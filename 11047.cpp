#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int N, K, cnt = 0;
	cin >> N >> K;
	vector<int> coin;
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		coin.push_back(tmp);
	}
	for (int i = N - 1; i >= 0; i--) {
		if (K % coin[i] == 0) {
			cnt += (K / coin[i]);
			break;
		}
		else {
			if (K < coin[i]) {
				continue;
			}else{
				cnt += (K / coin[i]);
				K %= coin[i];
			}
		}
	}
	cout << cnt << endl;
	return 0;
}