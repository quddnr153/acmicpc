/* Problem Statements
*  섬의 개수 실패
한국어 원문
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	128 MB	2778	1388	1016	49.682%
문제
정사각형으로 이루어져 있는 섬과 바다 지도가 주어진다.
섬의 개수를 세는 프로그램을 작성하시오.



한 정사각형과 가로, 세로 또는 대각선으로 연결되어 있는 사각형은 걸어갈 수 있는 사각형이다. 

두 정사각형이 같은 섬에 있으려면,
한 정사각형에서 다른 정사각형으로 걸어서 갈 수 있는 경로가 있어야 한다.
지도는 바다로 둘러쌓여 있으며, 지도 밖으로 나갈 수 없다.

입력
입력은 여러 개의 테스트 케이스로 이루어져 있다.
각 테스트 케이스의 첫째 줄에는 지도의 너비 w와 높이 h가 주어진다.
w와 h는 50보다 작거나 같은 양의 정수이다.

둘째 줄부터 h개 줄에는 지도가 주어진다. 1은 땅, 0은 바다이다.

입력의 마지막 줄에는 0이 두 개 주어진다.

출력
각 테스트 케이스에 대해서, 섬의 개수를 출력한다.

예제 입력  복사
1 1
0
2 2
0 1
1 0
3 2
1 1 1
1 1 1
5 4
1 0 1 0 0
1 0 0 0 0
1 0 1 0 1
1 0 0 1 0
5 4
1 1 1 0 1
1 0 1 0 1
1 0 1 0 1
1 0 1 1 1
5 5
1 0 1 0 1
0 0 0 0 0
1 0 1 0 1
0 0 0 0 0
1 0 1 0 1
0 0
예제 출력  복사
0
1
1
3
1
9
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/11/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 4963.cpp
*/

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int n, m;
bool map[50][50];
int dx[] = { -1,-1,-1,0,0,1,1,1 };
int dy[] = { -1,0,1,-1,1,-1,0,1 };

bool visited[50][50];

bool dfs(int r, int c) {
	if (r < 0 || r >= n || c < 0 || c >= m) return false;

	if (visited[r][c] || map[r][c] == 0) return false;
	visited[r][c] = true;

	bool check = false;
	for (int i = 0; i < 8; i++) {
		if (map[r + dx[i]][c + dy[i]]) {
			check |= dfs(r + dx[i], c + dy[i]);
		}
	}

	return true;
}

int main() {
	while (true) {
		scanf("%d%d", &m, &n);
		if (n == 0 && m == 0) break;

		int t;
		for (int i = 0; i < n; i++) {
			fill_n(visited[i], m, false);
			for (int j = 0; j < m; j++) {
				scanf("%d", &t);
				map[i][j] = t ? true : false;
			}
		}

		int cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (dfs(i, j)) cnt++;
			}
		}

		printf("%d\n", cnt);
	}
	return 0;
}