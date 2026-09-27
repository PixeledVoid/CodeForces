// 4A
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a = 0;
    cin >> a;
    if (((a - 2) % 2 == 0) && (a - 2) > 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}