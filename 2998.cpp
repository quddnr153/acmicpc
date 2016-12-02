/* Problem Statements
*  8진수 성공
한국어 원문 문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	128 MB	739	418	390	60.842%
문제
창영이는 여러가지 진법을 공부하고 있다. 창영이는 어제 2진법을 배웠고, 오늘은 8진법을 배웠다. 이제, 2진법 수를 8진법 수로 변환하려고 한다.

창영이가 사용한 방법은 다음과 같다.

2진수의 길이가 3으로 나누어 떨어질 때 까지 수의 앞에 0을 붙인다.
그 다음, 3자리씩 그룹을 나눈다.
아래의 표를 참고해 8진수로 바꾼다.
2진수가 주어졌을 때, 창영이가 사용한 방법을 이용해 8진수로 바꾸는 프로그램을 작성하시오.

000	0
001	1
010	2
011	3
100	4
101	5
110	6
111	7
입력
첫째 줄에 2진수가 주어진다. 이 수는 100자리 이내이고, 첫 번째 자리는 1이다.

출력
첫재 줄에 8진수를 출력한다.

예제 입력  복사
1010
예제 출력  복사
12
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 2998.cpp
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
	string input;
	cin >> input;
	int len = 3  - (input.size() % 3);
	if (len == 1)
		input = "0" + input;
	else if (len == 2) input = "00" + input;
	vector<string> eight;
	for (int i = 0; i <= input.size() - 3; i += 3)
		eight.push_back(input.substr(i, 3));
	for (int i = 0; i < eight.size(); i++) {
		int tmp = 0;
		if (eight[i][0] == '1') tmp += 4;
		if (eight[i][1] == '1') tmp += 2;
		if (eight[i][2] == '1') tmp += 1;
		cout << tmp;
	}
	cout << endl;

	return 0;
}