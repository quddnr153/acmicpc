/* Problem Statements
*  캥거루 세마리
한국어 원문
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	128 MB	1246	812	749	66.401%
문제
캥거루 세 마리가 사막에서 놀고 있다.
사막에는 수직선이 하나 있고, 캥거루는 서로 다른 한 좌표 위에 있다.

한 번 움직일 때,
바깥쪽의 두 캥거루 중 한 마리가 다른 두 캥거루 사이의 정수 좌표로 점프한다.
한 좌표 위에 있는 캥거루가 두 마리 이상일 수는 없다.

캥거루는 최대 몇 번 움직일 수 있을까?

입력
첫째 줄에 세 캥거루의 초기 위치 A, B, C가 주어진다. (0 < A < B < C < 100)

출력
캥거루가 최대 몇 번 움직일 수 있는지 출력한다.

예제 입력  복사
3 5 9
예제 출력  복사
3
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/11/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 2965.cpp
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int a, b, c, res;
	cin >> a >> b >> c;
	res = (c + a > 2 * b ? c - b - 1 : b - a - 1);
	cout << res << endl;
	return 0;
}