#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <math.h>
#include <algorithm>

using namespace std;

int N;

int cache[100001][3];
int board[100001][3];

int maxdp(int x, int y)
{
    if(x < 0 || y < 0 || x >= N || y >= 3) return 0;
    int& ret = cache[x][y];
    if(ret != -1) return ret;
    ret = 0;
    return ret = max(maxdp(x + 1, y + 1) + board[x + 1][y + 1], max(maxdp(x + 1, y) + board[x + 1][y], maxdp(x + 1, y - 1) + board[x + 1][y - 1]));
}

int mindp(int x, int y)
{
    if(x < 0 || x >= N) return 0;
    if(y < 0 || y >= 3) return 987654321;
    int& ret = cache[x][y];
    if(ret != -1) return ret;
    ret = 0;
    return ret = min(mindp(x + 1, y + 1) + board[x + 1][y + 1], min(mindp(x + 1, y - 1) + board[x + 1][y - 1], mindp(x + 1, y) + board[x + 1][y]));
}

int main()
{
    cin >> N;
    for(int i = 0 ; i < N; i++)
        for(int j = 0; j < 3; j++)
            cin >> board[i][j];
    int maxn = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 100001; j++) memset(cache[j], -1, sizeof(cache[i]));
        maxn = max(maxn, maxdp(0, i) + board[0][i]);
    }
    int minn = 987654321;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 100001; j++) memset(cache[j], -1, sizeof(cache[i]));
        minn = min(minn, mindp(0, i) + board[0][i]);
    }
    cout << maxn << " " << minn << endl;
    return 0;
}
