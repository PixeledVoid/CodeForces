// 281A
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a;
    cin >> a;
    a.front() = (char)toupper(a.front());
    cout << a;
    return 0;
}