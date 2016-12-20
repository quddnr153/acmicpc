/* Problem Statements
*  �ּ� �� ����
������ 
�ð� ����	�޸� ����	����	����	���� ���	���� ����
2 ��	128 MB	2518	1134	843	47.413%
����
�θ� �� �˷��� �ڷᱸ�� �� �ּ� ���̶�� ���� �ִ�. �ּ� ���� �̿��Ͽ� ������ ���� ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�迭�� �ڿ��� x�� �ִ´�.
�迭���� ���� ���� ���� ����ϰ�, �� ���� �迭���� �����Ѵ�.
���α׷��� ó���� ����ִ� �迭���� �����ϰ� �ȴ�.

�Է�
ù° �ٿ� ������ ���� N(1��N��100,000)�� �־�����. ���� N���� �ٿ��� ���꿡 ���� ������ ��Ÿ���� ���� x�� �־�����. ���� x�� �ڿ������ �迭�� x��� ���� �ִ�(�߰��ϴ�) �����̰�, x�� 0�̶�� �迭���� ���� ���� ���� ����ϰ� �� ���� �迭���� �����ϴ� ����̴�. �ԷµǴ� �ڿ����� 2^31���� �۴�.

���
�Է¿��� 0�� �־��� ȸ����ŭ ���� ����Ѵ�. ���� �迭�� ��� �ִ� ����ε� ���� ���� ���� ����϶�� �� ��쿡�� 0�� ����ϸ� �ȴ�.

���� �Է�  ����
9
0
12345678
1
2
0
0
0
0
32
���� ���  ����
0
1
2
12345678
0
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/20
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 1927.cpp
*/

#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
	priority_queue<int, vector<int>, greater<int> > pq;
	int N;
	cin >> N;
	while(N--) {
		int tmp;
		cin >> tmp;
		if(tmp == 0) {
			if(pq.empty()) {
				cout << "0" << endl;
			} else {
				cout << pq.top() << endl;
				pq.pop();
			}
		} else {
			pq.push(tmp);
		}
	}
	return 0;
}