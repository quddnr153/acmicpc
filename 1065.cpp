/* Problem Statements
*  한수
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
2 초	128 MB	2364	1165	1071	51.195%
문제
어떤 양의 정수 X의 자리수가 등차수열을 이룬다면, 그 수를 한수라고 한다.
등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다.
N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오. 

입력
첫째 줄에 1,000보다 작거나 같은 자연수 N이 주어진다.

출력
첫째 줄에 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력한다.

예제 입력  복사
110
예제 출력  복사
99
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/11/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 1065.cpp
*/

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	short arr[145], len = 0, n;
	for (short i = 1; i < 100; i++) arr[len++] = i;
	for (short i = 1; i < 10; i++) {
		for (short j = i / 2; j > 0; j--) arr[len++] = i * 100 + (i - j) * 10 + i - j * 2;
		arr[len++] = i * 100 + i * 10 + i;
		for (short j = 1; i + j * 2 < 10; j++) arr[len++] = i * 100 + (i + j) * 10 + i + j * 2;
	}
	scanf("%hd", &n);
	printf("%d\n", upper_bound(arr, arr + 144, n) - arr);
	return 0;
}