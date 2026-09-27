// 1912L
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s;
    cin >> n >> s;
    int leftL = 0, leftO = 0;
    int totalL = count(s.begin(), s.end(), 'L');
    int totalO = count(s.begin(), s.end(), 'O');
    for (int i = 1; i < n; i++)
    {
        /*Previous Approach*/
        // string left = s.substr(0, i);
        // int leftL = count(left.begin(), left.end(), 'L');
        // int leftO = count(left.begin(), left.end(), 'O');

        if (s[i - 1] == 'L')
        {
            leftL++;
        }
        else
            leftO++;

        if (leftL != (totalL - leftL) && leftO != (totalO - leftO))
        {
            cout << i << '\n';
            return 0;
        }
    }
    cout << -1 << '\n';
    return 0;
}