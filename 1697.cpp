/* Problem Statements
*  ���ٲ��� ����
�ѱ��� ����
������ 
�ð� ����	�޸� ����	����	����	���� ���	���� ����
2 ��	128 MB	11405	3030	2057	25.033%
����
�����̴� ������ ���ٲ����� �ϰ� �ִ�.
�����̴� ���� �� N(0 �� N �� 100,000)�� �ְ�, ������ �� K(0 �� K �� 100,000)�� �ִ�.
�����̴� �Ȱų� �����̵��� �� �� �ִ�.
����, �������� ��ġ�� X�� �� �ȴ´ٸ� 1�� �Ŀ� X-1 �Ǵ� X+1�� �̵��ϰ� �ȴ�.
�����̵��� �ϴ� ��쿡�� 1�� �Ŀ� 2*X�� ��ġ�� �̵��ϰ� �ȴ�.

�����̿� ������ ��ġ�� �־����� ��,
�����̰� ������ ã�� �� �ִ� ���� ���� �ð��� �� �� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù ��° �ٿ� �����̰� �ִ� ��ġ N�� ������ �ִ� ��ġ K�� �־�����.

���
�����̰� ������ ã�� ���� ���� �ð��� ����Ѵ�.

���� �Է�  ����
5 17
���� ���  ����
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