/* Problem Statements
*  ���� ���� ����
�ѱ��� ����
������ 
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 ��	128 MB	2778	1388	1016	49.682%
����
���簢������ �̷���� �ִ� ���� �ٴ� ������ �־�����.
���� ������ ���� ���α׷��� �ۼ��Ͻÿ�.



�� ���簢���� ����, ���� �Ǵ� �밢������ ����Ǿ� �ִ� �簢���� �ɾ �� �ִ� �簢���̴�. 

�� ���簢���� ���� ���� ��������,
�� ���簢������ �ٸ� ���簢������ �ɾ �� �� �ִ� ��ΰ� �־�� �Ѵ�.
������ �ٴٷ� �ѷ��׿� ������, ���� ������ ���� �� ����.

�Է�
�Է��� ���� ���� �׽�Ʈ ���̽��� �̷���� �ִ�.
�� �׽�Ʈ ���̽��� ù° �ٿ��� ������ �ʺ� w�� ���� h�� �־�����.
w�� h�� 50���� �۰ų� ���� ���� �����̴�.

��° �ٺ��� h�� �ٿ��� ������ �־�����. 1�� ��, 0�� �ٴ��̴�.

�Է��� ������ �ٿ��� 0�� �� �� �־�����.

���
�� �׽�Ʈ ���̽��� ���ؼ�, ���� ������ ����Ѵ�.

���� �Է�  ����
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
���� ���  ����
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