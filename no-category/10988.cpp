/* Problem Statements
*  팰린드롬인지 확인하기 성공
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	256 MB	1291	861	747	70.672%
문제
알파벳 소문자로만 이루어진 단어가 주어진다. 이 때, 이 단어가 팰린드롬인지 아닌지 확인하는 프로그램을 작성하시오.

팰린드롬이란 앞으로 읽을 때와 거꾸로 읽을 때 똑같은 단어를 말한다. 

level, noon은 팰린드롬이고, baekjoon, online, judge는 팰린드롬이 아니다.

입력
첫째 줄에 단어가 주어진다. 단어의 길이는 1보다 크거나 같고, 100보다 작거나 같으며, 알파벳 소문자로만 이루어져 있다.

출력
첫째 줄에 팰린드롬이면 1, 아니면 0을 출력한다.

예제 입력 
level
예제 출력 
1
예제 입력 2
baekjoon
예제 출력 2 
0
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 110988.cpp
*/

#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main()
{
	string in;
	cin >> in;
	bool chk = true;
	for(int i = 0; i < in.size() / 2; i++) {
		if(in[i] != in[in.size() - i - 1]) {
			chk = false;
			break;
		}
	}
	if(chk) cout << 1 << endl;
	else cout << 0 << endl;
}