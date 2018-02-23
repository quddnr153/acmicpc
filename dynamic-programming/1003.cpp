#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int cache[42][2];

int fibo(int n, int num)
{
	int& ret = cache[n][num];
	if(ret != -1) return ret;
	if(n == 0 && num == 0) return (ret = 1);
	if(n == 1 && num == 1) return (ret = 1);
	if(n == 0 && num == 1) return (ret = 0);
	if(n == 1 && num == 0) return (ret = 0);
	return (ret = fibo(n-1, num) + fibo(n-2, num));
}

void test()
{
	int N;
	cin >> N;
	for(int i = 0; i < 42; i++)
		memset(cache[i], -1, sizeof(cache[0]));
	cout << fibo(N, 0) << " " << fibo(N, 1) << endl;
}

int main()
{
	int T;
	cin >> T;
	while(T--)
		test();
	return 0;
}
