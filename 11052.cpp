#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>

using namespace std;

int N;
int bread[1002];
int cache[1002];

int dp(int items) {
	if (items == N) return 0;
	int& ret = cache[items];
	if (ret != -1) return ret;
	ret = 0;
	for (int i = 1; i <= N; i++) {
		if (items + i <= N)
			ret = max(ret, dp(items + i) + bread[i]);
	}
	return ret;
}

int main()
{
	cin >> N;
	memset(cache, -1, sizeof(cache));
	bread[0] = 0;
	for (int i = 0; i < N; i++)
		cin >> bread[i + 1];
	cout << dp(0) << endl;
	return 0;
}