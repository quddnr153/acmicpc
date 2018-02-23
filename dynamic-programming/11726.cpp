#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#define MOD 10007
using namespace std;

int cache[1001];
int N;

int dp (int n)
{
	if(n > N) return 0;
	if(n == N) return 1;
	int& ret = cache[n];
	if(ret != -1) return ret;
	return ret = ((dp(n + 1) % MOD) + (dp(n + 2) % MOD)) % MOD;
}

int main()
{
	cin >> N;
	memset(cache, -1, sizeof(cache));
	cout << dp(0) << endl;
	return 0;
}
