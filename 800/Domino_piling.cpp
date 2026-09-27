// 50A
// Rating: 800
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;
    int r = (m * n) - ((m * n) % 2);
    cout << r / 2 << '\n';
    return 0;
}