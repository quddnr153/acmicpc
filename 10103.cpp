/* Problem Statements
*  주사위 게임
한국어 원문
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	256 MB	745	668	629	90.765%
문제
창영이와 상덕이는 게임을 하고 있다.

게임을 시작하는 시점에서, 두 사람은 점수는 모두 100점이다.

게임은 여섯 면 주사위를 사용하며, 라운드로 진행된다.
매 라운드마다, 각 사람은 주사위를 던진다.
낮은 숫자가 나온 사람은 상대편 주사위에 나온 숫자만큼 점수를 잃게 된다.
두 사람의 주사위가 같은 숫자가 나온 경우에는 아무도 점수를 잃지 않는다.

게임이 끝난 이후에 두 사람의 점수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 라운드의 수 n (1 ≤ n ≤ 15)가 주어진다.
다음 n개 줄에는 두 정수가 주어진다.
첫 번째 정수는 그 라운드에서 창영이의 주사위에 나타난 숫자,
두 번째 정수는 상덕이의 주사위에 나타난 숫자이다.
두 정수는 항상 1보다 크거나 같고, 6보다 작거나 같다.

출력
첫째 줄에 게임이 끝난 이후에 창영이의 점수,
둘째 줄에는 상덕이의 점수를 출력한다.

예제 입력  복사
4
5 6
6 6
4 3
5 2
예제 출력  복사
94
91
힌트
첫 라운드는 상덕이의 승리이다.
따라서 창영이는 6점을 잃게 된다.
두번째 라운드는 두 사람의 숫자가 같기 때문에, 아무도 점수를 잃지 않고 넘어간다.
세번째 라운드의 승자는 창영이이기 때문에, 상덕이는 4점을 잃게 된다.
마지막 라운드는 창영이가 승리하고, 상덕이는 5점을 잃게 된다.
따라서, 창영이는 6점, 상덕이는 9점을 잃었다.
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/11/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 10103.cpp
*/

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, c = 100, s = 100;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		int tmp1, tmp2;
		scanf("%d%d", &tmp1, &tmp2);
		if(tmp1 == tmp2)
			continue;
		else if(tmp1 > tmp2)
			s -= tmp1;
		else
			c -= tmp2;
	}
	printf("%d\n%d\n", c, s);
	return 0;
}