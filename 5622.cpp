/* Problem Statements
*  다이얼 성공
한국어 원문 문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	128 MB	784	495	446	64.265%
문제
상근이의 할머니는 아래 그림과 같이 오래된 다이얼 전화기를 사용한다.



전화를 걸고 싶은 번호가 있다면, 숫자를 하나를 누른 다음에 금속 핀이 있는 곳 까지 시계방향으로 돌려야 한다. 다른 숫자를 누르려면 다이얼이 원래 위치로 돌아가기를 기다려야 한다.

숫자 1을 걸려면 총 2초가 필요하다. 1보다 큰 수를 거는데 걸리는 시간은 이보다 더 걸리며, 한 칸 옆에 있는 숫자를 걸기 위해선 1초씩 더 걸린다.

상근이의 할머니는 전화 번호를 각 숫자에 해당하는 문자로 외운다. 즉, 어떤 단어를 걸 때, 각 알파벳에 해당하는 숫자를 걸면 된다. 예를 들어, UNUCIC는 868242와 같다.

할머니가 외운 단어가 주어졌을 때, 이 전화를 걸기 위해서 필요한 시간을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 알파벳 대문자로 이루어진 단어가 주어진다. 단어는 2글자~15글자로 이루어져 있다.

출력
첫째 줄에 다이얼을 걸기 위해서 필요한 시간을 출력한다.

예제 입력  복사
UNUCIC
예제 출력  복사
36
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 5622.cpp
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
	int cnt = 0;
	string input;
	cin >> input;
	cnt += input.size();
	for (int i = 0; i < input.size(); i++) {
		char a = input[i];
		if (a == 'A' || a == 'B' || a == 'C')
			cnt += 2;
		else if (a == 'D' || a == 'E' || a == 'F')
			cnt += 3;
		else if (a == 'G' || a == 'H' || a == 'I')
			cnt += 4;
		else if (a == 'J' || a == 'K' || a == 'L')
			cnt += 5;
		else if (a == 'M' || a == 'N' || a == 'O')
			cnt += 6;
		else if (a == 'P' || a == 'Q' || a == 'R' || a == 'S')
			cnt += 7;
		else if (a == 'T' || a == 'U' || a == 'V')
			cnt += 8;
		else if (a == 'W' || a == 'X' || a == 'Y' || a == 'Z')
			cnt += 9;
	}
	cout << cnt << endl;
	return 0;
}