#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int N, K;
int cache[10001][101];
vector<int> coin, tmp;
int sumdp(int capacity, int num, int cnt)
{
	if(capacity == 0) {
		tmp.push_back(cnt);
		return 1;
	}
	if(num < 0) return 0;
	int& ret = cache[capacity][num];
	if(ret != -1) return ret;
	ret = 0;
	int tmp = capacity/coin[num];
	for(int i = tmp; i >= 0; i--){
		ret += sumdp(capacity - (i*coin[num]), num - 1, cnt + i);
	}
	return ret;
}

int main()
{
	cin >> N >> K;
	for(int i = 0; i < 10001; i++)
		memset(cache[i], -1, sizeof(cache[0]));
	for(int i = 0; i < N; i++){
		int tmp;
		cin >> tmp;
		coin.push_back(tmp);
	}
	sort(coin.begin(), coin.end());
	sumdp(K, N - 1, 0);
	if(!tmp.empty()){
		sort(tmp.begin(), tmp.end());
		cout << tmp[0] << endl;
	}
	else
		cout << -1 << endl;
	return 0;
}
