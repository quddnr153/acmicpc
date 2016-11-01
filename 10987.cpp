/* Problem Statements
*  모음의 개수
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	256 MB	1173	823	764	73.462%
문제
알파벳 소문자로만 이루어진 단어가 주어진다.
이 때, 모음(a, e, i, o, u)의 개수를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 단어가 주어진다.
단어의 길이는 1보다 크거나 같고, 100보다 작거나 같으며,
알파벳 소문자로만 이루어져 있다.

출력
첫째 줄에 모음의 개수를 출력한다.

예제 입력  복사
baekjoon
예제 출력  복사
4
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/11/01
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 10987.cpp
*/

#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main()
{
	string input;
	cin >> input;
	int cnt = 0;
	for(int i = 0; i < input.size(); i++) {
		if(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u')
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}