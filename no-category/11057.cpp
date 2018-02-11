#include <iostream>
#include <string>
#include <string.h>

using namespace std;

const int MOD = 10007;
int N;
int cache[1001][10];

int dp(int n, int number)
{
	if(n == N) return 1;
	int& ret = cache[n][number];
	if(ret != -1) return ret;
	ret = 0;
	for(int i = number; i <= 9; i++){
		ret = (ret % MOD + dp(n + 1, i) % MOD) % MOD;
	}
	return ret;
}

int main()
{
	int res = 0;
	cin >> N;
	for(int i = 0; i < 1001; i++)
		memset(cache[i], -1, sizeof(cache[i]));
	for(int i = 0; i <= 9; i++) 
		res = (res % MOD + dp(1, i) % MOD) % MOD;
	cout << res << endl;
	return 0;
}