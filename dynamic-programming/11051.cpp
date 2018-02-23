#include <iostream>
#include <string.h>
#define MAXN 1000
#define MOD 10007
using namespace std;
int cache[MAXN][MAXN];
int bino(int n, int r)
{
	if(n == r || r == 0) return 1;
	int& ret = cache[n][r];
	if(ret != -1) return ret;
	return ret = (bino(n - 1, r - 1) % MOD + bino(n - 1, r) % MOD) % MOD;
}
int main()
{
	int n, r;
	for(int i = 0 ; i < MAXN; i++)
		memset(cache[i], -1, sizeof(cache[i]));
	cin >> n >> r;
	cout << bino(n, r) << endl;
	return 0;
}
