/* Problem Statements
*  8���� ����
�ѱ��� ���� ������ 
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 ��	128 MB	739	418	390	60.842%
����
â���̴� �������� ������ �����ϰ� �ִ�. â���̴� ���� 2������ �����, ������ 8������ �����. ����, 2���� ���� 8���� ���� ��ȯ�Ϸ��� �Ѵ�.

â���̰� ����� ����� ������ ����.

2������ ���̰� 3���� ������ ������ �� ���� ���� �տ� 0�� ���δ�.
�� ����, 3�ڸ��� �׷��� ������.
�Ʒ��� ǥ�� ������ 8������ �ٲ۴�.
2������ �־����� ��, â���̰� ����� ����� �̿��� 8������ �ٲٴ� ���α׷��� �ۼ��Ͻÿ�.

000	0
001	1
010	2
011	3
100	4
101	5
110	6
111	7
�Է�
ù° �ٿ� 2������ �־�����. �� ���� 100�ڸ� �̳��̰�, ù ��° �ڸ��� 1�̴�.

���
ù�� �ٿ� 8������ ����Ѵ�.

���� �Է�  ����
1010
���� ���  ����
12
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 2998.cpp
*/
#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string input;
	cin >> input;
	int len = 3  - (input.size() % 3);
	if (len == 1)
		input = "0" + input;
	else if (len == 2) input = "00" + input;
	vector<string> eight;
	for (int i = 0; i <= input.size() - 3; i += 3)
		eight.push_back(input.substr(i, 3));
	for (int i = 0; i < eight.size(); i++) {
		int tmp = 0;
		if (eight[i][0] == '1') tmp += 4;
		if (eight[i][1] == '1') tmp += 2;
		if (eight[i][2] == '1') tmp += 1;
		cout << tmp;
	}
	cout << endl;

	return 0;
}