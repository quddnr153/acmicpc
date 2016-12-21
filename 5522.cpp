/* Problem Statements
*  카드 게임 성공
한국어 원문
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	256 MB	745	661	617	89.680%
문제
JOI군은 카드 게임을 하고 있다. 이 카드 게임은 5회의 게임으로 진행되며, 그 총점으로 승부를 하는 게임이다.

JOI군의 각 게임의 득점을 나타내는 정수가 주어졌을 때, JOI군의 총점을 구하는 프로그램을 작성하라.

입력
표준 입력에서 다음과 같은 데이터를 읽어온다.

i 번째 줄(1 ≤ i ≤ 5)에는 정수 Ai가 적혀있다. 이것은 i번째 게임에서의 JOI군의 점수를 나타낸다.
모든 입력 데이터는 다음 조건을 만족한다.

0 ≤ Ai ≤ 100．
출력
표준 출력에 JOI군의 총점을 한 줄로 출력하라.

예제 입력  복사
1
2
3
4
5
예제 출력  복사
15
예제 입력 2  복사
0
100
0
10
100
예제 출력 2  복사
210
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/21
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 5522.cpp
*/

#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	for(int i = 0; i < 5; i++) {
		int tmp;
		cin >> tmp;
		sum += tmp;
	}
	cout << sum << endl;
	return 0;
}