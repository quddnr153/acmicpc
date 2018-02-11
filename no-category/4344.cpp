/* Problem Statements
*  ����� �Ѱ���
�ѱ��� ����
������ 
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 ��	128 MB	814	458	404	59.941%
����
���л� ��������� 90%�� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�. ����� �׵鿡�� ���� ������ �˷���� �Ѵ�.

�Է�
ù° �ٿ��� �׽�Ʈ���̽� C�� �־�����.

��° �ٺ��� �� �׽�Ʈ���̽� ���� ù ���� ���� N(1 <= N <= 1000)���� �л��� �־����� �� �������� N���� 0���� 100 ������ ������ �̾ �־�����.

���
�� ���̽����� ���پ� ����� �Ѵ� �л����� ������ �Ҽ��� ��°�ڸ����� �ݿø��Ͽ� ����Ѵ�.

���� �Է�  ����
5
5 50 50 70 80 100
7 100 95 90 80 70 60 50
3 70 90 80
3 70 90 81
9 100 99 98 97 96 95 94 93 91
���� ���  ����
40.000%
57.143%
33.333%
66.667%
55.556%
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/15
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 4344.cpp
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void test()
{
	int N, cnt = 0;
	double avg = 0;
	cin >> N;
	vector<int> scores;
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		scores.push_back(tmp);
		avg += (double)tmp;
	}
	sort(scores.begin(), scores.end());
	avg /= N;
	for (int i = 0; i < N; i++)
		if (scores[i] > avg) cnt++;
	double rates = (double)cnt / (double)N * 100.0;
	printf("%.3lf%%\n", rates);
}

int main()
{
	int C;
	cin >> C;
	while (C--)test();
}