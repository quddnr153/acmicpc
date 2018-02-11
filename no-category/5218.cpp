/* Problem Statements
*  ���ĺ� �Ÿ�
�ѱ��� ���� ������ 
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 ��	128 MB	1207	775	645	65.482%
����
���̰� ���� �� �ܾ �־����� ��, �� �ܾ ���Ե� ��� ������ ���ĺ� �Ÿ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�� ���� x�� y ������ ���ĺ� �Ÿ��� ���Ϸ���, ���� �� ���ĺ��� ���ڸ� �Ҵ��ؾ� �Ѵ�. 'A'=1, 'B' = 2, ..., 'Z' = 26. �� ���� y �� x�� ��쿡�� y-x, y < x�� ��쿡�� (y+26) - x�� ���ĺ� �Ÿ��� �ȴ�.

���� ���, 'B'�� 'D' ������ �Ÿ��� 4 - 2 = 2�̰�, 'D'�� 'B' ������ �Ÿ��� (2+26) - 4 = 24�̴�.

�Է�
ù° �ٿ� �׽�Ʈ ���̽��� �� (< 100)�� �־�����. �� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, �� �ܾ �������� ���еǾ��� �ִ�. �ܾ��� ���̴� 4���� ũ�ų� ����, 20���� �۰ų� ������, ���ĺ� �빮�ڷθ� �̷���� �ִ�.

���
�� �׽�Ʈ ���̽� ���� �� ������ ���ĺ� �Ÿ��� �������� ������ ����Ѵ�.

���� �Է�  ����
5
AAAA ABCD
ABCD AAAA
DARK LOKI
STRONG THANOS
DEADLY ULTIMO
���� ���  ����
Distances: 0 1 2 3
Distances: 0 25 24 23
Distances: 8 14 19 24
Distances: 1 14 9 25 1 12
Distances: 17 7 19 5 1 16
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 5218.cpp
*/

#include <iostream>
#include <string.h>
#include <string>
#include <math.h>
#include <stdlib.h>

using namespace std;

void test()
{
	string a, b;
	cin >> a >> b;
	cout << "Distances: ";
	for(int i = 0; i < a.size(); i++) {
		if(a[i] > b[i]) {
			cout << 26 - abs(a[i] - b[i]) << ' ';
		}
		else
			cout << abs(a[i] - b[i]) << ' ';
	}
	cout << endl;
}

int main()
{
	int T;
	cin >> T;
	while(T--)
		test();
	return 0;
}