/* Problem Statements
*  플로이드
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	256 MB	1637	1037	808	64.744%
문제
n(1≤n≤100)개의 도시가 있다
그리고 한 도시에서 출발하여 다른 도시에 도착하는 m(1≤m≤100,000)개의 버스가 있다.
각 버스는 한 번 사용할 때 필요한 비용이 있다.

모든 도시의 쌍 (A, B)에 대해서 도시 A에서 B로 가는데 필요한 비용의 최소값을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 도시의 개수 n(1≤n≤100)이 주어지고 둘째 줄에는 버스의 개수 m(1≤m≤100,000)이 주어진다.
그리고 셋째 줄부터 m+2줄까지 다음과 같은 버스의 정보가 주어진다.
먼저 처음에는 그 버스의 출발 도시의 번호가 주어진다.
버스의 정보는 버스의 시작 도시 a, 도착 도시 b, 한 번 타는데 필요한 비용 c로 이루어져 있다.
시작 도시와 도착 도시가 같은 경우는 없다. 비용은 100,000보다 작거나 같은 자연수이다.

출력
N개의 줄을 출력해야 한다.
i번째 줄에 출력하는 j번째 숫자는 도시 i에서 j로 가는데 필요한 최소 비용이다.
만약, i에서 j로 갈 수 없는 경우에는 그 자리에 0을 출력한다.

예제 입력  복사
5
14
1 2 2
1 3 3
1 4 1
1 5 10
2 4 2
3 4 1
3 5 1
4 5 3
3 5 10
3 1 8
1 4 2
5 1 7
3 4 2
5 2 4
예제 출력  복사
0 2 3 1 4
12 0 15 2 5
8 5 0 1 1
10 7 13 0 3
7 4 10 6 0
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/11/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 11404.cpp
*/

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int map[100][100];

int main() {
	int n, m, a, b, c;
	scanf("%d%d", &n, &m);

	for (int i = 0; i < n; i++) {
		fill_n(map[i], n, 987654321);
		map[i][i] = 0;
	}

	for (int i = 0; i < m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		a--, b--;
		map[a][b] = min(map[a][b], c);
	}

	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				map[i][j] = min(map[i][j], map[i][k] + map[k][j]);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) printf("%d ", map[i][j] == 987654321 ? 0 : map[i][j]);
		puts("");
	}
	return 0;
}