/* Problem Statements
*  알파벳 거리
한국어 원문 문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	128 MB	1207	775	645	65.482%
문제
길이가 같은 두 단어가 주어졌을 때, 각 단어에 포함된 모든 글자의 알파벳 거리를 구하는 프로그램을 작성하시오.

두 글자 x와 y 사이의 알파벳 거리를 구하려면, 먼저 각 알파벳에 숫자를 할당해야 한다. 'A'=1, 'B' = 2, ..., 'Z' = 26. 그 다음 y ≥ x인 경우에는 y-x, y < x인 경우에는 (y+26) - x가 알파벳 거리가 된다.

에를 들어, 'B'와 'D' 사이의 거리는 4 - 2 = 2이고, 'D'와 'B' 사이의 거리는 (2+26) - 4 = 24이다.

입력
첫째 줄에 테스트 케이스의 수 (< 100)가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있고, 두 단어가 공백으로 구분되어져 있다. 단어의 길이는 4보다 크거나 같고, 20보다 작거나 같으며, 알파벳 대문자로만 이루어져 있다.

출력
각 테스트 케이스 마다 각 글자의 알파벳 거리를 공백으로 구분해 출력한다.

예제 입력  복사
5
AAAA ABCD
ABCD AAAA
DARK LOKI
STRONG THANOS
DEADLY ULTIMO
예제 출력  복사
Distances: 0 1 2 3
Distances: 0 25 24 23
Distances: 8 14 19 24
Distances: 1 14 9 25 1 12
Distances: 17 7 19 5 1 16
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 5218.cpp
*/

#include <iostream>
#include <string.h>
#include <string>
#include <math.h>
#include <stdlib.h>

using namespace std;

void test()
{
	string a, b;
	cin >> a >> b;
	cout << "Distances: ";
	for(int i = 0; i < a.size(); i++) {
		if(a[i] > b[i]) {
			cout << 26 - abs(a[i] - b[i]) << ' ';
		}
		else
			cout << abs(a[i] - b[i]) << ' ';
	}
	cout << endl;
}

int main()
{
	int T;
	cin >> T;
	while(T--)
		test();
	return 0;
}