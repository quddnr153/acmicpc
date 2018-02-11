/* Problem Statements
*  접미사 배열 성공
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	256 MB	1186	680	588	60.870%
문제
접미사 배열은 문자열 S의 모든 접미사를 사전순으로 정렬해 놓은 배열이다.

baekjoon의 접미사는 baekjoon, aekjoon, ekjoon, kjoon, joon, oon, on, n 으로 총 8가지가 있고, 이를 사전순으로 정렬하면, aekjoon, baekjoon, ekjoon, joon, kjoon, n, on, oon이 된다.

문자열 S가 주어졌을 때, 모든 접미사를 사전순으로 정렬한 다음 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 문자열 S가 주어진다. S는 알파벳 소문자로만 이루어져 있고, 길이는 1,000보다 작거나 같다.

출력
첫째 줄부터 S의 접미사를 사전순으로 한 줄에 하나씩 출력한다.

예제 입력  복사
baekjoon
예제 출력  복사
aekjoon
baekjoon
ekjoon
joon
kjoon
n
on
oon
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 11656.cpp
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
	int len = input.length();
	vector<string> suffix;
	for (int i = 0; i < len; i++) {
		string tmp = input.substr(i, len - i);
		suffix.push_back(tmp);
	}
	sort(suffix.begin(), suffix.end());
	int suffixlen = suffix.size();
	for (int i = 0; i < suffixlen; i++)
		cout << suffix[i] << endl;
	return 0;
}