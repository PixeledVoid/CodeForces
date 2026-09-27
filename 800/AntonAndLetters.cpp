// 443A
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin, s);
    set<char> chars;
    for (char c : s)
    {
        if ((c >= 'a') && (c <= 'z'))
        {
            chars.insert(c);
        }
    }
    cout << chars.size();
    return 0;
}