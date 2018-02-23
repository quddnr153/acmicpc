#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int cache[31][31];

int dp(int n, int m)
{
	int& ret = cache[n][m];
	if(ret != -1) return ret;
	if(n == m || m == 0)
		return ret = 1;
	return ret = dp(n - 1, m - 1) + dp(n - 1, m);
}

void test()
{
	int N, M;
	cin >> N >> M;
	for(int i = 0; i < 31; i++)
		memset(cache[i], -1, sizeof(cache[0]));
	cout << dp(M, N) << endl;
}

int main()
{
	int T;
	cin >> T;
	while(T--)
		test();
	return 0;
}
