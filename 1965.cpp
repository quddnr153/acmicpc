/* Problem Statements
*  ���ڳֱ�
������ 
�ð� ����	�޸� ����	����	����	���� ���	���� ����
2 ��	128 MB	3236	1358	1062	43.471%
����
������ü ����� ���ڵ��� �Ϸķ� �þ �ִ�.
���ڵ鸶�� ũ�Ⱑ �־��� �ִµ�, �տ� �ִ� ������ ũ�Ⱑ �ڿ� �ִ� ������ ũ�⺸�� ������,
�տ� �ִ� ���ڸ� �ڿ� �ִ� ���� �ȿ� ���� ���� �ִ�.
���� ��� �տ������� ������� ũ�Ⱑ (1, 5, 2, 3, 7)�� 5���� ���ڰ� �ִٸ�,
ũ�� 1�� ���ڸ� ũ�� 5�� ���ڿ� �ְ�, �ٽ� �� ���ڵ��� ũ�� 7�� ���� �ȿ� ���� �� �ִ�.
������ �̷��� ���ڸ� ���� �� �ִ� ����� ���� ������ ���� �� �ִ�.
���� ������ ���ʴ�� ũ�Ⱑ 1, 2, 3, 7�� ���ڵ��� �����ϸ� �� 4���� ���ڰ� �� ���� ���ڿ� ���� �ȴ�.

���ڵ��� ũ�Ⱑ �־��� ��, �� ���� ���� �� �ִ� �ִ��� ���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
������ ù ��° ���� ������ ���� n (1��n ��1000)�� ��Ÿ����. �� ��° �ٿ��� �� ���ڵ��� ũ�Ⱑ ������� �־�����.

���
ù° �ٿ� �� �ٿ� ���� �� �ִ� �ִ��� ���� ������ ����Ѵ�.

���� �Է�  ����
8
1 6 2 5 7 3 5 6
���� ���  ����
5
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/11/01
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 1965.cpp
*/

#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>

using namespace std;

int N;
int inset[1000];
int cache[1001];

int lis(int x)
{
	int& ret = cache[x+1];
	if(ret != -1) return ret;

	ret = 1;
	for(int next = x + 1; next < N; next++)
		if(x == -1 || inset[x] < inset[next])
			ret = max(ret, lis(next) + 1);
	return ret;
}

void test()
{
	cin >> N;
	for(int i = 0; i < N; i++)
		cin >> inset[i];
	memset(cache, -1, sizeof(cache));

	int res = lis(-1) - 1;

	cout << res << endl;
}

int main()
{
	test();
	return 0;
}