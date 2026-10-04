// 2256A
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> board(3);
    int n;
    cin >> n;
    while (n--)
    {
        for (int &a : board)
        {
            cin >> a;
        }
        sort(board.begin(), board.end());
        if (board.back() > board[0] + board[1])
        {
            board.back() = board[0] + board[1];
        }
        cout << board.back() - board[0] << '\n';
    }

    return 0;
}