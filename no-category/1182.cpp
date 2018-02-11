nclude <iostream>
#include <cstdio>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>

using namespace std;


int N, S;
vector<int> numbers;

int dp(int n, int sum, int empty){
	if(n < 0 || n > N) return 0;
	if(n == N && sum == S) {
		if(empty != 0) return 1;
		else return 0;
	}
	else if(n == N && sum != S) return 0;
	return dp(n + 1, sum, empty) + dp(n + 1, sum + numbers[n + 1], empty + 1);
}

int main()
{
	cin >> N >> S;
	numbers.push_back(0);
	for(int i = 0; i < N; i++){
		int tmp;
		cin >> tmp;
		numbers.push_back(tmp);
	}
	cout << dp(0, 0, 0) << endl;
	return 0;
}
