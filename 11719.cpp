/* Problem Statements
*  그대로 출력하기 2
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	256 MB	1703	979	887	61.512%
문제
입력 받은 대로 출력하는 프로그램을 작성하시오.

입력
입력이 주어진다. 입력은 최대 100줄로 이루어져 있고, 알파벳 소문자, 대문자, 공백, 숫자로만 이루어져 있다. 각 줄은 100글자를 넘지 않으며, 빈 줄이 주어질 수도 있고, 각 줄의 앞 뒤에 공백이 있을 수도 있다.

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
*  Date     : 2016/12/15
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 11719.cpp
*/

#include <iostream>
#include <string>
#include <string.h>
#include <cstdio>

using namespace std;

int main() {
	string str;
	while (getline(cin, str)) cout << str << endl;
}