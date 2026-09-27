// 282A
// Rating: 800
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, result = 0;
    string exp;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> exp;
        if ((exp.front() == '+') || (exp.back() == '+'))
        {
            result++;
        }
        else
        {
            result--;
        }
    }
    cout << result;
    return 0;
}