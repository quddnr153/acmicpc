/* Problem Statements
*  제곱수의 합 성공
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
2 초	128 MB	3826	1517	1078	39.058%
문제
어떤 자연수 N은 그보다 작은 제곱수들의 합으로 나타낼 수 있다. 예를 들어 11=3^2+1^2+1^2(3개 항)이다. 이런 표현방법은 여러 가지가 될 수 있는데, 11의 경우 11=2^2+2^2+1^2+1^2+1^2(5개 항)도 가능하다. 이 경우, 수학자 숌크라테스는 “11은 3개 항의 제곱수 합으로 표현할 수 있다.”라고 말한다. 또한 11은 그보다 적은 항의 제곱수 합으로 표현할 수 없으므로, 11을 그 합으로써 표현할 수 있는 제곱수 항의 최소 개수는 3이다.

주어진 자연수 N을 이렇게 제곱수들의 합으로 표현할 때에 그 항의 최소개수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 자연수 N이 주어진다. (1<=N<=100,000)

출력
주어진 자연수를 제곱수의 합으로 나타낼 때에 그 제곱수 항의 최소 개수를 출력한다.

예제 입력  복사
7
예제 출력  복사
4
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/20
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 1699.cpp
*/

#include <cstdio>
#include <algorithm>

using namespace std;

int dp[100001];

int solve(int num) {
	int &p = dp[num];
	if (p) return p;

	p = 1 + solve(num - 1);

	for (int i = 2, t = 4; t <= num / 2; i++, t = i * i) {
		p = min(p, solve(t) + solve(num - t));
	}

	return p;
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i * i <= n; i++) dp[i * i] = 1;
	printf("%d\n", solve(n));
}