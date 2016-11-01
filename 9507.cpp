/* Problem Statements
*  Generations of Tribbles
�ѱ��� ����
������ 
�ð� ����	�޸� ����	����	����	���� ���	���� ����
2 ��	128 MB	1265	890	789	71.793%
����
���� ���뿡�� ��¥ ������ ����.
�׷��� �Ḹ�� �Ǻ���ġ�� �������� �Ѵ�.
������ �Ǻ���ġ�� �ʹ� �ܼ��ؼ� ���� ���� ������ �Ǻ���ġ�� �������� �Ѵ�.
�׷��� ������ ���� �Ǻ���ġ�� �������.
�Ḹ�� �Ǻ���ġ �Լ��� koong(n)�̶�� �� ��,

n < 2 :                         1
n = 2 :                         2
n = 3 :                         4
n > 3 : koong(n ? 1) + koong(n ? 2) + koong(n ? 3) + koong(n ? 4)
�̴�.

�����е� �� �Ǻ���ġ�� ���غ��ƶ�.

 

�Է�
�Է��� ù��° ���� �׽�Ʈ���̽��� ���� t (0 < t < 69)�� �־�����.
���� t�ٿ��� ���° �Ǻ���ġ�� ���ؾ��ϴ����� ��Ÿ���� n(0 �� n �� 67)�� �־�����.

���
�� �׽�Ʈ���̽��� ����, �� �ٿ� �� �Ǻ���ġ���� ����϶�.

���� �Է�  ����
8
0
1
2
3
4
5
30
67
���� ���  ����
1
1
2
4
8
15
201061985
7057305768232953720
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/11/01
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 9507.cpp
*/

#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>

using namespace std;

unsigned long long koong[68];
int N;

void test()
{
	cin >> N;
	for(int i = 0; i <= N; i++) {
		if(i < 2) koong[i] = 1;
		else if(i == 2) koong[i] = 2;
		else if(i == 3) koong[i] = 4;
		else koong[i] = koong[i - 1] + koong[i - 2] + koong[i - 3] + koong[i - 4];
	}
	cout << koong[N] << endl;
}

int main()
{
	int T;
	cin >> T;
	while(T--) test();
	return 0;
}