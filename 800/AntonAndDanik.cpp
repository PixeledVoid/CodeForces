// 734A
// Rating: 800
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string sc;
    int x, A = 0, D = 0;
    cin >> x;
    cin >> sc;
    for (char x : sc)
    {
        if (x == 'A')
            A++;
        else
            D++;
    }
    if (A > D)
        cout << "Anton";
    else if (D > A)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}