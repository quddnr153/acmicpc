#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#define MAXN	302

using namespace std;

int cache[MAXN][2];
int input[MAXN];

int main()
{
	int N;
	cin >> N;
	for(int i = 0; i < N; i++)
		cin >> input[i];
	for(int i = 0; i < N; i++)
		memset(cache[i], 0, sizeof(cache[0]));
	if(N == 1)
		cout << input[0] << endl;
	else if(N == 2)
		cout << input[0] + input[1] << endl;
	else{
		cache[1][0] = input[0];
		cache[1][1] = 0;
		cache[2][0] = input[0] + input[1];
		cache[2][1] = input[1];
		for(int i = 3; i <= N; i++){
			cache[i][0] = cache[i - 1][1] + input[i - 1];
			cache[i][1] = max(cache[i - 2][0] + input[i - 1], cache[i - 2][1] + input[i - 1]);
		}
		cout << max(cache[N][0], cache[N][1]) << endl;
	}
	return 0;
}
