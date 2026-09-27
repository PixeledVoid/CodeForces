// Made with the help of AI
// Didn't manage to get a proper solution
// Worth it for the experience it bought
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <cmath>

using namespace std;

int K, S;
double latency_in_ms, bandwidth_gbps;
int bytes_per_token, num_layers;
double SLO1, SLO2, tp_UB, tp_base, dist_base, w_tp, w_c;

struct TaskTime
{
    int batch_size;
    double times[6];
};
vector<TaskTime> task_times;

enum State
{
    INIT,
    READY_P_PRE,
    WAIT_UPLINK_PRE,
    READY_P_PROC,
    WAIT_DOWNLINK_PRE,
    READY_P_POST,
    READY_D_PRE,
    WAIT_UPLINK_DEC,
    READY_D_PROC,
    WAIT_DOWNLINK_DEC,
    READY_D_POST,
    FINISHED
};

struct Request
{
    int id;
    int Lin;
    int cloud_id;
    State state;
};

vector<Request> reqs;
bool edge_busy = false;
vector<bool> cloud_busy;

void parse_startup()
{
    cin >> K >> S >> latency_in_ms >> bandwidth_gbps >> bytes_per_token >> num_layers;
    cin >> SLO1 >> SLO2 >> tp_UB >> tp_base >> dist_base >> w_tp >> w_c;
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        TaskTime tt;
        cin >> tt.batch_size;
        for (int j = 0; j < 6; ++j)
            cin >> tt.times[j];
        task_times.push_back(tt);
    }
    cloud_busy.assign(K, false);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    parse_startup();
    string token;

    while (cin >> token)
    {
        if (token == "END")
            break;

        int event_count;
        cin >> event_count;

        for (int i = 0; i < event_count; ++i)
        {
            string ev_type;
            cin >> ev_type;

            if (ev_type == "ARR")
            {
                int rid, lin;
                cin >> rid >> lin;
                while (reqs.size() <= rid)
                    reqs.push_back({(int)reqs.size(), 0, 0, INIT});
                reqs[rid] = {rid, lin, rid % K, READY_P_PRE};
            }
            else if (ev_type == "TDN")
            {
                string server, cmd;
                cin >> server >> cmd;

                if (server == "E")
                    edge_busy = false;
                else
                {
                    int cid = stoi(server.substr(1));
                    cloud_busy[cid] = false;
                }

                string step;
                cin >> step;

                if (cmd == "P" && step == "POST")
                {
                    string rem, rid_str;
                    double dur;
                    cin >> rem >> rid_str >> dur;
                    reqs[stoi(rid_str)].state = READY_D_PRE;
                }
                else if (cmd == "D" && step == "POST")
                {
                    string m_str, count_str, rid_str;
                    double dur;
                    cin >> m_str >> count_str >> rid_str >> dur;
                    if (reqs[stoi(rid_str)].state != FINISHED)
                    {
                        reqs[stoi(rid_str)].state = READY_D_PRE;
                    }
                }
                else
                {

                    string remainder;
                    getline(cin, remainder);
                }
            }
            else if (ev_type == "XDN")
            {
                string dir, rem, size, phase;
                int m;
                cin >> dir >> rem >> size >> phase >> m;
                vector<int> rids(m);
                for (int j = 0; j < m; ++j)
                    cin >> rids[j];

                for (int r : rids)
                {
                    if (dir == "UP" && phase == "PRE")
                        reqs[r].state = READY_P_PROC;
                    if (dir == "DOWN" && phase == "PRE")
                        reqs[r].state = READY_P_POST;
                    if (dir == "UP" && phase == "DEC")
                        reqs[r].state = READY_D_PROC;
                    if (dir == "DOWN" && phase == "DEC")
                        reqs[r].state = READY_D_POST;
                }
            }
            else if (ev_type == "FIN")
            {
                int rid;
                cin >> rid;
                reqs[rid].state = FINISHED;
            }
        }

        vector<string> assignments;

        for (auto &r : reqs)
        {
            if (r.state == READY_P_PRE && !edge_busy)
            {
                assignments.push_back("E P PRE " + to_string(r.cloud_id) + " " + to_string(r.id));
                edge_busy = true;
                r.state = WAIT_UPLINK_PRE;
            }
            else if (r.state == READY_P_POST && !edge_busy)
            {
                assignments.push_back("E P POST " + to_string(r.cloud_id) + " " + to_string(r.id));
                edge_busy = true;
                r.state = READY_D_PRE;
            }
            else if (r.state == READY_D_PRE && !edge_busy)
            {
                assignments.push_back("E D PRE -1 1 " + to_string(r.id));
                edge_busy = true;
                r.state = WAIT_UPLINK_DEC;
            }
            else if (r.state == READY_D_POST && !edge_busy)
            {
                assignments.push_back("E D POST -1 1 " + to_string(r.id));
                edge_busy = true;
                r.state = INIT;
            }
            else if (r.state == READY_P_PROC && !cloud_busy[r.cloud_id])
            {
                assignments.push_back("C" + to_string(r.cloud_id) + " P PROC 0 " + to_string(num_layers) + " " + to_string(r.cloud_id) + " " + to_string(r.id));
                cloud_busy[r.cloud_id] = true;
                r.state = WAIT_DOWNLINK_PRE;
            }
            else if (r.state == READY_D_PROC && !cloud_busy[r.cloud_id])
            {
                assignments.push_back("C" + to_string(r.cloud_id) + " D PROC " + to_string(r.cloud_id) + " 1 " + to_string(r.id));
                cloud_busy[r.cloud_id] = true;
                r.state = WAIT_DOWNLINK_DEC;
            }
        }

        cout << assignments.size() << "\n";
        for (const string &cmd : assignments)
        {
            cout << cmd << "\n";
        }
        cout << flush;
    }

    return 0;
}