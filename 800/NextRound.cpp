// 158A
// Rating: 800
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    std::cin >> n >> k;

    std::vector<int> scores(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >> scores[i];
    }

    int ts = scores[k - 1];
    int c = 0;

    for (int i = 0; i < n; ++i)
    {
        if (scores[i] >= ts && scores[i] > 0)
        {
            c++;
        }
    }
    cout << c;
    return 0;
}