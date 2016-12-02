/* Problem Statements
*  �α����� ��й�ȣ ����
�ѱ��� ���� ������ 
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 ��	128 MB	2401	681	573	29.294%
����
â���̴� �α����� ��ǻ�͸� ��ŷ�� �ؽ�Ʈ ���� �ϳ��� �ڽ��� ���Ϸ� �����ߴ�. ���Ͽ��� �ܾ �� �ٿ� �ϳ��� �����־���, �� �� �ϳ��� �α��̰� �¶��� �������� ����ϴ� ��й�ȣ�̴�.

������ ���캸�� â���̴� ��� �ܾ��� ���̰� Ȧ����� ����� �˾Ƴ�����. �׸��� ������ �α��̰� �� ��Ͽ� ���ؼ� ����ߴ� ���� �����س´�. �α����� ��й�ȣ�� ��Ͽ� ���ԵǾ� ������, ��й�ȣ�� ����� �� ���ڿ��� ���ԵǾ� �ִ�.

���� ���, �α����� ��й�ȣ�� "tulipan"�� ��쿡 ��Ͽ��� "napilut"�� �����ؾ� �Ѵ�. �� �� ���� ������ ���� ��� ��й�ȣ�� ��� �����ϴٰ� �Ѵ�.

�α����� ���Ͽ� �����ִ� �ܾ ��� �־����� ��, ��й�ȣ�� ���̿� ��� ���ڸ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �ܾ��� �� N (1 �� N �� 100)�� �־�����. ���� N�� �ٿ��� ���Ͽ� �����ִ� �ܾ �� �ٿ� �ϳ��� �־�����. �ܾ�� ���ĺ� �ҹ��ڷθ� �̷���� ������, ���̴� 2���� ũ�� 14���� ���� Ȧ���̴�.

���
ù° �ٿ� ��й�ȣ�� ���̿� ��� ���ڸ� ����Ѵ�. �׻� ���� ������ ��츸 �Է����� �־�����.

���� �Է�  ����
4
las
god
psala
sal
���� ���  ����
3 a
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 9933.cpp
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
	int N, index = 0;
	cin >> N;
	vector<string> inputs;
	for (int i = 0; i < N; i++) {
		string tmp;
		cin >> tmp;
		inputs.push_back(tmp);
	}
	for (int i = 0; i < N - 1; i++) {
		bool chk = false;
		string tmp = inputs[i];
		for (int j = 0; j < tmp.size(); j++)
			tmp[j] = inputs[i][tmp.size() - 1 - j];
		for (int j = i + 1; j < N; j++) {
			if (tmp.compare(inputs[j]) == 0) {
				chk = true;
				index = j;
				break;
			}
		}
		if (chk) break;
	}
	cout << inputs[index].size() << ' ' << inputs[index][inputs[index].size() / 2] << endl;
	return 0;
}