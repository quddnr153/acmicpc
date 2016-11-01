/* Problem Statements
*  Generations of Tribbles
한국어 원문
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
2 초	128 MB	1265	890	789	71.793%
문제
꿍은 군대에서 진짜 할짓이 없다.
그래서 꿍만의 피보나치를 만들어보려고 한다.
기존의 피보나치는 너무 단순해서 꿍은 좀더 복잡한 피보나치를 만들어보고자 한다.
그래서 다음과 같은 피보나치를 만들었다.
꿍만의 피보나치 함수가 koong(n)이라고 할 때,

n < 2 :                         1
n = 2 :                         2
n = 3 :                         4
n > 3 : koong(n ? 1) + koong(n ? 2) + koong(n ? 3) + koong(n ? 4)
이다.

여러분도 꿍 피보나치를 구해보아라.

 

입력
입력의 첫번째 줄을 테스트케이스의 개수 t (0 < t < 69)가 주어진다.
다음 t줄에는 몇번째 피보나치를 구해야하는지를 나타내는 n(0 ≤ n ≤ 67)이 주어진다.

출력
각 테스트케이스에 대해, 각 줄에 꿍 피보나치값을 출력하라.

예제 입력  복사
8
0
1
2
3
4
5
30
67
예제 출력  복사
1
1
2
4
8
15
201061985
7057305768232953720
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/11/01
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 9507.cpp
*/

#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>

using namespace std;

unsigned long long koong[68];
int N;

void test()
{
	cin >> N;
	for(int i = 0; i <= N; i++) {
		if(i < 2) koong[i] = 1;
		else if(i == 2) koong[i] = 2;
		else if(i == 3) koong[i] = 4;
		else koong[i] = koong[i - 1] + koong[i - 2] + koong[i - 3] + koong[i - 4];
	}
	cout << koong[N] << endl;
}

int main()
{
	int T;
	cin >> T;
	while(T--) test();
	return 0;
}