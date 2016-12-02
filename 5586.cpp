/* Problem Statements
*  JOI와 IOI
한국어 원문 문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	128 MB	858	640	583	76.509%
문제
입력으로 주어지는 문자열에서 연속으로 3개의 문자가 JOI 또는 IOI인 곳이 각각 몇 개 있는지 구하는 프로그램을 작성하시오. 문자열을 알파벳 대문자로만 이루어져 있다. 예를 들어, 아래와 같이 "JOIOIOI"에는 JOI가 1개, IOI가 2개 있다.



입력
첫째 줄에 알파벳 10000자 이내의 문자열이 주어진다. 

출력
첫째 줄에 문자열에 포함되어 있는 JOI의 개수, 둘째 줄에 IOI의 개수를 출력한다.

예제 입력  복사
JOIOIOIOI
예제 출력  복사
1
3
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 5586.cpp
*/
#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string input, joi = "JOI", ioi = "IOI";
	cin >> input;
	int len = input.length(), joicnt = 0, ioicnt = 0;
	for (int i = 0; i < len - 2; i++) {
		if (input.substr(i, 3).compare(joi) == 0) joicnt++;
		if (input.substr(i, 3).compare(ioi) == 0) ioicnt++;
	}
	cout << joicnt << endl << ioicnt << endl;
	return 0;
}