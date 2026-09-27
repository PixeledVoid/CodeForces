// 236A
// Rating: 800
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    bool seen[26] = {false};
    int c = 0;

    for (char ch : s)
    {
        int index = ch - 'a';
        if (!seen[index])
        {
            seen[index] = true;
            c++;
        }
    }

    if (c % 2 == 0)
    {
        cout << "CHAT WITH HER!\n";
    }
    else
    {
        cout << "IGNORE HIM!\n";
    }

    return 0;
}