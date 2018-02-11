/* Problem Statements
*  숨바꼭질 성공
한국어 원문
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
2 초	128 MB	11405	3030	2057	25.033%
문제
수빈이는 동생과 숨바꼭질을 하고 있다.
수빈이는 현재 점 N(0 ≤ N ≤ 100,000)에 있고, 동생은 점 K(0 ≤ K ≤ 100,000)에 있다.
수빈이는 걷거나 순간이동을 할 수 있다.
만약, 수빈이의 위치가 X일 때 걷는다면 1초 후에 X-1 또는 X+1로 이동하게 된다.
순간이동을 하는 경우에는 1초 후에 2*X의 위치로 이동하게 된다.

수빈이와 동생의 위치가 주어졌을 때,
수빈이가 동생을 찾을 수 있는 가장 빠른 시간이 몇 초 후인지 구하는 프로그램을 작성하시오.

입력
첫 번째 줄에 수빈이가 있는 위치 N과 동생이 있는 위치 K가 주어진다.

출력
수빈이가 동생을 찾는 가장 빠른 시간을 출력한다.

예제 입력  복사
5 17
예제 출력  복사
4
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/11/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 1697.cpp
*/

#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <list>

using namespace std;

int visit[100001];

void bfs(int n, int k) {
	memset(visit, 0, sizeof(visit));
	list<int> q;
	q.push_back(n);
	visit[n] = 0;
	int cur;
	while(!q.empty()) {
		cur = q.front();
		q.pop_front();
		if(cur == k) {
			cout << visit[cur] << endl;
			return;
		}
		if(cur+1 >= 0 && cur+1 <= 100000 && visit[cur+1] == 0){
			q.push_back(cur + 1);
			visit[cur+1] = visit[cur] + 1;
		}     
		if(cur-1 >= 0 && cur-1 <= 100000 && visit[cur-1] == 0){
			q.push_back(cur - 1);
			visit[cur-1] = visit[cur] + 1;
		}     
		if(cur*2 >= 0 && cur*2 <= 100000 && visit[cur*2] == 0){
			q.push_back(cur * 2);
			visit[cur*2] = visit[cur] + 1;
		}
	}
}

int main()
{
	int N, K;
	cin >> N >> K;
	bfs(N, K);
	return 0;
}