// 71A
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, l;
    string s;
    char f, b;
    cin >> n;
    string words[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        words[i] = s;
    }
    for (string &word : words)
    {
        if (word.length() <= 10)
        {
            cout << word << '\n';
            continue;
        }
        else
        {
            f = word.front();
            b = word.back();
            l = word.length() - 2;
            word = f + to_string(l) + b;
        }
        cout << word << '\n';
    }

    return 0;
}