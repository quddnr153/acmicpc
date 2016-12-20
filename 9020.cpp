/* Problem Statements
*  골드바흐의 추측
한국어 원문
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	128 MB	909	378	276	41.692%
문제
1보다 큰 자연수 중에서  1과 자기 자신을 제외한 약수가 없는 자연수를 소수라고 한다. 예를 들어, 5는 1과 5를 제외한 약수가 없기 때문에 소수이다. 하지만, 6은 6 = 2 × 3 이기 때문에 소수가 아니다.

골드바흐의 추측은 유명한 정수론의 미해결 문제로, 2보다 큰 모든 짝수는 두 소수의 합으로 나타낼 수 있다는 것이다. 이러한 숫자를 골드바흐 숫자라고 한다. 또, 짝수를 두 소수의 합으로 나타내는 표현을 그 숫자의 골드바흐 파티션이라고 한다. 예를 들면, 4 = 2 + 2, 6 = 3 + 3, 8 = 3 + 5, 10 = 5 + 5, 12 = 5 + 7, 14 = 3 + 11, 14 = 7 + 7이다. 10000보다 작은 모든 짝수 n에 대한 골드바흐 파티션은 존재한다.

2보다 큰 짝수 n이 주어졌을 때, n의 골드바흐 파티션을 출력하는 프로그램을 작성하시오. 만약 가능한 n의 골드바흐 파티션이 여러가지인 경우에는 두 소수의 차이가 가장 작은 것을 출력한다.

입력
첫째 줄에 테스트 케이스의 개수 T가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있고 짝수 n이 주어진다. (4 ≤ n ≤ 10,000)

출력
각 테스트 케이스에 대해서 주어진 n의 골드바흐 파티션을 출력한다. 출력하는 소수는 작은 것부터 먼저 출력하며, 공백으로 구분한다.

예제 입력  복사
3
8
10
16
예제 출력  복사
3 5
5 5
5 11
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/20
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 9020.cpp
*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>

#define MAX_N (10001)

using namespace std;

char prime[(MAX_N + 7) /8];

inline bool isPrime(int k) { return prime[k >> 3] & (1 << (k & 7)); }
inline void setComposite(int k) { prime[k >> 3] &= ~(1 << (k & 7)); }

void eratosthenes() {
	memset(prime, 255, sizeof(prime));
	setComposite(0);
	setComposite(1);
	for(int i = 2; i * i <= MAX_N; i++)
		if(isPrime(i))
			for(int j = i * i; j <= MAX_N; j += i)
				setComposite(j);
}

int main()
{
	int T;
	cin >> T;
	eratosthenes();
	while(T--) {
		int tmp, half;
		cin >> tmp;
		half = tmp / 2;
		if(isPrime(half)) {
			cout << half << " " << half << endl;
			continue;
		}
		for(int i = 1; i < half; i++) {
			if(isPrime(half - i) && isPrime(half + i)) {
				cout << half - i << " " << half + i << endl;
				break;
			}
		}
	}
	return 0;
}