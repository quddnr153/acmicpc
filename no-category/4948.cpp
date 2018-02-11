/* Problem Statements
*  베르트랑 공준
한국어 원문
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	128 MB	588	312	255	56.291%
문제
베르트랑 공준은 임의의 자연수 n에 대하여, n보다 크고, 2n보다 작거나 같은 소수는 적어도 하나 존재한다는 내용을 담고 있다.

이 명제는 조제프 베르트랑이 1845년에 추측했고, 파프누티 체비쇼프가 1850년에 증명했다.

예를 들어, 10보다 크고, 20보다 작거나 같은 소수는 4개가 있다. (11, 13, 17, 19) 또, 14보다 크고, 28보다 작거나 같은 소수는 3개가 있다. (17,19, 23)

n이 주어졌을 때, n보다 크고, 2n보다 작거나 같은 소수의 개수를 구하는 프로그램을 작성하시오. 

입력
입력은 여러 개의 테스트 케이스로 이루어져 있다. 각 케이스는 n을 포함하며, 한 줄로 이루어져 있다. (n ≤ 123456)

입력의 마지막에는 0이 주어진다.

출력
각 테스트 케이스에 대해서, n보다 크고, 2n보다 작거나 같은 소수의 개수를 출력한다.

예제 입력  복사
1
10
13
100
1000
10000
100000
0
예제 출력  복사
1
4
3
21
135
1033
8392
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/20
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 4948.cpp
*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <string.h>

#define MAX_N (123456 * 2)

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
	int n;
	eratosthenes();
	cin >> n;
	while(n != 0) {
		int cnt = 0;
		for(int i = n + 1; i <= 2 * n; i++) {
			if(isPrime(i)) cnt++;
		}
		cout << cnt << endl;
		cin >> n;
	}
	return 0;
}