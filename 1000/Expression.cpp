// 479A
// Rating: 1000
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, result;
    cin >> a;
    cin >> b;
    cin >> c;
    result = max({a * b * c, a * (b + c), a + b * c, (a + b) * c, a + b + c, a * b + c});
    cout << result;

    return 0;
}
