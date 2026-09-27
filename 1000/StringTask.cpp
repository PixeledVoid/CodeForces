// 118A
// Rating: 1000
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, res = "", v = "AEIOUYaeiouy";
    cin >> s;
    for (char c : s)
    {
        c = (char)tolower(c);
        if (v.find(c) != string::npos)
        {
            continue;
        }
        else
        {
            res += ".";
            res += c;
        }
    }
    cout << res;

    return 0;
}