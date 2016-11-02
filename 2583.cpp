/* Problem Statements
*  영역 구하기
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	128 MB	2001	1141	945	58.405%
문제
눈금의 간격이 1인 M×N(M,N≤100)크기의 모눈종이가 있다.
이 모눈종이 위에 눈금에 맞추어 K개의 직사각형을 그릴 때,
이들 K개의 직사각형의 내부를 제외한 나머지 부분이 몇 개의 분리된 영역으로 나누어진다.

예를 들어 M=5, N=7 인 모눈종이 위에 <그림 1>과 같이 직사각형 3개를 그렸다면,
그 나머지 영역은 <그림 2>와 같이 3개의 분리된 영역으로 나누어지게 된다.



<그림 2>와 같이 분리된 세 영역의 넓이는 각각 1, 7, 13이 된다.

M, N과 K 그리고 K개의 직사각형의 좌표가 주어질 때,
K개의 직사각형 내부를 제외한 나머지 부분이 몇 개의 분리된 영역으로 나누어지는지,
그리고 분리된 각 영역의 넓이가 얼마인지를 구하여 이를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 M과 N, 그리고 K가 빈칸을 사이에 두고 차례로 주어진다.
M, N, K는 모두 100 이하의 자연수이다.
둘째 줄부터 K개의 줄에는 한 줄에 하나씩 직사각형의 왼쪽 아래 꼭짓점의 x, y좌표값과 오른쪽 위 꼭짓점의 x, y좌표값이 빈칸을 사이에 두고 차례로 주어진다.
모눈종이의 왼쪽 꼭짓점의 좌표는 (0,0)이고, 오른쪽 위 꼭짓점의 좌표는(N,M)이다.
입력되는 K개의 직사각형들이 모눈종이 전체를 채우는 경우는 없다.

출력
첫째 줄에 분리되어 나누어지는 영역의 개수를 출력한다.
둘째 줄에는 각 영역의 넓이를 오름차순으로 정렬하여 빈칸을 사이에 두고 출력한다.

예제 입력  복사
5 7 3
0 2 4 4
1 1 2 5
4 0 6 2
예제 출력  복사
3
1 7 13
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/11/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 2583.cpp
*/

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

bool map[100][100], visited[100][100];
int m, n, k;

int dfs(int y, int x) {
	if (x < 0 || y < 0 || x >= n || y >= m || map[y][x] || visited[y][x]) return 0;
	visited[y][x] = true;

	int re = 1;
	re += dfs(y - 1, x);
	re += dfs(y + 1, x);
	re += dfs(y, x - 1);
	re += dfs(y, x + 1);

	return re;
}

int main() {
	scanf("%d %d %d", &m, &n, &k);

	int x1, x2, y1, y2;
	for (int i = 0; i < k; i++) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (int j = y1; j < y2; j++) fill(map[j] + x1, map[j] + x2, true);
	}

	vector<int> arr;
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < m; y++) {
			const int &p = dfs(y, x);
			if (p) arr.emplace_back(p);
		}
	}
	printf("%d\n", arr.size());
	sort(arr.begin(), arr.end());
	for(int i = 0; i < arr.size(); i++) printf("%d ", arr[i]);
	printf("\n");
	return 0;
}