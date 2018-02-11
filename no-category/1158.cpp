/* Problem Statements
*  �����۽� ����
������ 
�ð� ����	�޸� ����	����	����	���� ���	���� ����
2 ��	128 MB	2297	1107	879	52.290%
����
�����۽� ������ ������ ����.

1������ N������ N���� ����� ���� �̷�鼭 �ɾ��ְ�, ���� ���� M(�� N)�� �־�����.
���� ������� M��° ����� �����Ѵ�.
�� ����� ���ŵǸ� ���� ������ �̷���� ���� ���� �� ������ ����� ������.
�� ������ N���� ����� ��� ���ŵ� ������ ��ӵȴ�.
������ ������� ���ŵǴ� ������ (N, M)-�����۽� �����̶�� �Ѵ�.
���� ��� (7, 3)-�����۽� ������ <3, 6, 2, 7, 5, 1, 4>�̴�.

N�� M�� �־����� (N,M)-�����۽� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� N�� M�� �� ĭ�� ���̿� �ΰ� ������� �־�����. (1 �� M �� N �� 5,000)

���
������ ���� �����۽� ������ ����Ѵ�.

���� �Է�  ����
7 3
���� ���  ����
<3, 6, 2, 7, 5, 1, 4>
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/11/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 1158.cpp
*/

#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	int N, M, cnt = 0;
	scanf("%d%d", &N, &M);
	list<int> table;
	vector<int> permutation;
	for(int i = 1; i <= N; i++)
		table.push_back(i);
	list<int>::iterator cur = table.begin();
	while(permutation.size() != N) {
		for(int i = 0; i < M - 1; i++) {
			if(++cur == table.end()) {
				cur = table.begin();
			}
		}
		permutation.push_back(*cur);
		list<int>::iterator tmp = cur++;
		if(cur == table.end()) cur = table.begin();
		table.erase(tmp);
	}
	cout << '<';
	for(int i = 0; i < N; i++) {
		cout << permutation[i];
		if(i != N - 1)
			cout << ", ";
	}
	cout << '>' << endl;
	return 0;
}