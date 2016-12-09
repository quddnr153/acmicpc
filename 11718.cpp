/* Problem Statements
*  그대로 출력하기
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	256 MB	2999	1198	990	44.837%
문제
입력 받은 대로 출력하는 프로그램을 작성하시오.

입력
입력이 주어진다. 입력은 최대 100줄로 이루어져 있고, 알파벳 소문자, 대문자, 공백, 숫자로만 이루어져 있다. 각 줄은 100글자를 넘지 않으며, 빈 줄은 주어지지 않는다. 또, 각 줄은 공백으로 시작하지 않고, 공백으로 끝나지 않는다.

출력
입력받은 그대로 출력한다.

예제 입력  복사
Hello
Baekjoon
Online Judge
예제 출력  복사
Hello
Baekjoon
Online Judge
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/09
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 11718.cpp
*/

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
	string s;
	while (getline(cin, s)) cout << s << endl;
	return 0;
}