/* Problem Statements
*  ���̻� �迭 ����
������ 
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 ��	256 MB	1186	680	588	60.870%
����
���̻� �迭�� ���ڿ� S�� ��� ���̻縦 ���������� ������ ���� �迭�̴�.

baekjoon�� ���̻�� baekjoon, aekjoon, ekjoon, kjoon, joon, oon, on, n ���� �� 8������ �ְ�, �̸� ���������� �����ϸ�, aekjoon, baekjoon, ekjoon, joon, kjoon, n, on, oon�� �ȴ�.

���ڿ� S�� �־����� ��, ��� ���̻縦 ���������� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���ڿ� S�� �־�����. S�� ���ĺ� �ҹ��ڷθ� �̷���� �ְ�, ���̴� 1,000���� �۰ų� ����.

���
ù° �ٺ��� S�� ���̻縦 ���������� �� �ٿ� �ϳ��� ����Ѵ�.

���� �Է�  ����
baekjoon
���� ���  ����
aekjoon
baekjoon
ekjoon
joon
kjoon
n
on
oon
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 11656.cpp
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
	int len = input.length();
	vector<string> suffix;
	for (int i = 0; i < len; i++) {
		string tmp = input.substr(i, len - i);
		suffix.push_back(tmp);
	}
	sort(suffix.begin(), suffix.end());
	int suffixlen = suffix.size();
	for (int i = 0; i < suffixlen; i++)
		cout << suffix[i] << endl;
	return 0;
}