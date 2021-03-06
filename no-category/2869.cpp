/* Problem Statements
*  달팽이는 올라가고 싶다 실패
한국어 원문
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	128 MB	3297	1281	1068	40.501%
문제
땅 위에 달팽이가 있다.
이 달팽이는 높이가 V미터인 나무 막대를 올라갈 것이다.

달팽이는 낮에 A미터 올라갈 수 있다.
하지만, 밤에 잠을 자는 동안 B미터 미끄러진다.
또, 정상에 올라간 후에는 미끄러지지 않는다.

달팽이가 나무 막대를 모두 올라가려면, 며칠이 걸리는지 구하는 프로그램을 작성하시오.

입력
첫째 줄에 A, B, V가 공백으로 구분되어서 주어진다. (1 ≤ B < A ≤ V ≤ 1,000,000,000)

출력
첫째 줄에 달팽이가 나무 막대를 모두 올라가는데 며칠이 걸리는지 출력한다.

예제 입력  복사
2 1 5
예제 출력  복사
4
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/11/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 2869.cpp
*/

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int A, B, V, N = 0;
	scanf("%d%d%d", &A, &B, &V);
	N = (V - A) / (A - B);
	if((V - A) % (A - B)) N++;
	N++;
	printf("%d\n", N);
	return 0;
}