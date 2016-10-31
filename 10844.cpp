#include <iostream>
#include <string>
#include <string.h>

using namespace std;

const int MOD = 1000 * 1000 * 1000;
int N;
int cache[101][10];

int dp(int n, int number)
{
	if(n == N) return 1;
	int& ret = cache[n][number];
	if(ret != -1) return ret;
	ret = 0;
	if(number == 0) ret = (ret % MOD + dp(n + 1, number + 1) % MOD) % MOD;
	else if(number == 9) ret = (ret % MOD + dp(n + 1, number - 1) % MOD) % MOD;
	else
		ret = (ret % MOD + (dp(n + 1, number + 1) % MOD + dp(n + 1, number - 1) % MOD) % MOD) % MOD;
	return ret;
}

int main()
{
	int res = 0;
	cin >> N;
	for(int i = 0; i < 101; i++)
		memset(cache[i], -1, sizeof(cache[i]));
	for(int i = 1; i <= 9; i++) 
		res = (res % MOD + dp(1, i) % MOD) % MOD;
	cout << res << endl;
	return 0;
}