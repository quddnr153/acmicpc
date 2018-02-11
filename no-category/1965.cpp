/* Problem Statements
*  상자넣기
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
2 초	128 MB	3236	1358	1062	43.471%
문제
정육면체 모양의 상자들이 일렬로 늘어서 있다.
상자들마다 크기가 주어져 있는데, 앞에 있는 상자의 크기가 뒤에 있는 상자의 크기보다 작으면,
앞에 있는 상자를 뒤에 있는 상자 안에 넣을 수가 있다.
예를 들어 앞에서부터 순서대로 크기가 (1, 5, 2, 3, 7)인 5개의 상자가 있다면,
크기 1인 상자를 크기 5인 상자에 넣고, 다시 이 상자들을 크기 7인 상자 안에 넣을 수 있다.
하지만 이렇게 상자를 넣을 수 있는 방법은 여러 가지가 있을 수 있다.
앞의 예에서 차례대로 크기가 1, 2, 3, 7인 상자들을 선택하면 총 4개의 상자가 한 개의 상자에 들어가게 된다.

상자들의 크기가 주어질 때, 한 번에 넣을 수 있는 최대의 상자 개수를 출력하는 프로그램을 작성하시오.

입력
파일의 첫 번째 줄은 상자의 개수 n (1≤n ≤1000)을 나타낸다. 두 번째 줄에는 각 상자들의 크기가 순서대로 주어진다.

출력
첫째 줄에 한 줄에 넣을 수 있는 최대의 상자 개수를 출력한다.

예제 입력  복사
8
1 6 2 5 7 3 5 6
예제 출력  복사
5
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/11/01
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 1965.cpp
*/

#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>

using namespace std;

int N;
int inset[1000];
int cache[1001];

int lis(int x)
{
	int& ret = cache[x+1];
	if(ret != -1) return ret;

	ret = 1;
	for(int next = x + 1; next < N; next++)
		if(x == -1 || inset[x] < inset[next])
			ret = max(ret, lis(next) + 1);
	return ret;
}

void test()
{
	cin >> N;
	for(int i = 0; i < N; i++)
		cin >> inset[i];
	memset(cache, -1, sizeof(cache));

	int res = lis(-1) - 1;

	cout << res << endl;
}

int main()
{
	test();
	return 0;
}