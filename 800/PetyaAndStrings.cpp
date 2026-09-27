// 112A
// Rating: 800
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1, s2;
    int r = 0;
    cin >> s1;
    cin >> s2;
    for (int i = 0; i < s1.length(); i++)
    {
        if (tolower(s1[i]) < tolower(s2[i]))
        {
            r = -1;
            break;
        }
        else if (tolower(s1[i]) > tolower(s2[i]))
        {
            r = 1;
            break;
        }
    }
    cout << r;
    return 0;
}