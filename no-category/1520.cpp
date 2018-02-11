#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int M, N;
int cache[501][501];
int board[500][500];

int dp(int y, int x)
{
	if(y < 0 || y >= M || x < 0 || x >= N) return 0;
	if((y == M - 1) && (x == N - 1)) return 1;
	int& ret = cache[y][x];
	if(ret != -1) return ret;
	ret = 0;
	if((y - 1) >= 0 && board[y][x] > board[y - 1][x])
		ret += dp(y - 1, x);
	if((x - 1) >= 0 && board[y][x] > board[y][x - 1])
		ret += dp(y, x - 1);
	if((y + 1) < M && board[y][x] > board[y + 1][x])
		ret += dp(y + 1, x);
	if((x + 1) < N && board[y][x] > board[y][x + 1])
		ret += dp(y, x + 1);
	return ret;
}

int main()
{
	cin >> M >> N;
	for(int i = 0; i < 501; i++)
		memset(cache[i], -1, sizeof(cache[i]));
	for(int i = 0; i < M; i++)
		for(int j = 0; j < N; j++)
			cin >> board[i][j];
	cout << dp(0, 0) << endl;
	return 0;
}