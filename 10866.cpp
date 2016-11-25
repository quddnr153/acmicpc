/* Problem Statements
*  ��
������ 
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 ��	256 MB	1077	547	488	54.770%
����
������ �����ϴ� ��(Deque)�� ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.

����� �� ���� �����̴�.

push_front X: ���� X�� ���� �տ� �ִ´�.
push_back X: ���� X�� ���� �ڿ� �ִ´�.
pop_front: ���� ���� �տ� �ִ� ���� ����, �� ���� ����Ѵ�. ����, ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
pop_back: ���� ���� �ڿ� �ִ� ���� ����, �� ���� ����Ѵ�. ����, ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ���� ����ִ� ������ ������ ����Ѵ�.
empty: ���� ��������� 1��, �ƴϸ� 0�� ����Ѵ�.
front: ���� ���� �տ� �ִ� ������ ����Ѵ�. ���� ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
back: ���� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
�Է�
ù° �ٿ� �־����� ����� �� N (1 �� N �� 10,000)�� �־�����. �Ѥ� �ٺ��� N���� �ٿ��� ����� �ϳ��� �־�����. �־����� ������ 1���� ũ�ų� ����, 100,000���� �۰ų� ����. ������ �������� ���� ����� �־����� ���� ����.

���
����ؾ��ϴ� ����� �־��� ������, �� �ٿ� �ϳ��� ����Ѵ�.

���� �Է�  ����
15
push_back 1
push_front 2
front
back
size
empty
pop_front
pop_back
pop_front
size
empty
pop_back
push_front 3
empty
front
���� ���  ����
2
1
2
0
2
1
-1
0
1
-1
0
3
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/11/25
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 10866.cpp
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <string>

using namespace std;

int main()
{
	int N;
	deque<int> dq;
	cin >> N;
	for(int i = 0; i < N; i++) {
		string cmd;
		cin >> cmd;
		if(cmd.compare("push_front") == 0) {
			int tmp;
			cin >> tmp;
			dq.push_front(tmp);
		} else if(cmd.compare("push_back") == 0) {
			int tmp;
			cin >> tmp;
			dq.push_back(tmp);
		} else if(cmd.compare("pop_front") == 0) {
			if(dq.empty())
				cout << -1 << endl;
			else {
				cout << dq.front() << endl;
				dq.pop_front();
			}
		} else if(cmd.compare("pop_back") == 0) {
			if(dq.empty())
				cout << -1 << endl;
			else {
				cout << dq.back() << endl;
				dq.pop_back();
			}
		} else if(cmd.compare("size") == 0) {
			cout << dq.size() << endl;
		} else if(cmd.compare("empty") == 0) {
			if(dq.empty())
                cout << 1 << endl;
            else
                cout << 0 << endl;
		} else if(cmd.compare("front") == 0) {
			if(dq.empty())
                cout << -1 << endl;
            else
                cout << dq.front() << endl;
		} else if(cmd.compare("back") == 0) {
			if(dq.empty()) cout << -1 << endl;
            else cout << dq.back() << endl;
		}
	}
	return 0;
}