/* Problem Statements
*  �Ѽ�
������ 
�ð� ����	�޸� ����	����	����	���� ���	���� ����
2 ��	128 MB	2364	1165	1071	51.195%
����
� ���� ���� X�� �ڸ����� ���������� �̷�ٸ�, �� ���� �Ѽ���� �Ѵ�.
���������� ���ӵ� �� ���� ���� ���̰� ������ ������ ���Ѵ�.
N�� �־����� ��, 1���� ũ�ų� ����, N���� �۰ų� ���� �Ѽ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 

�Է�
ù° �ٿ� 1,000���� �۰ų� ���� �ڿ��� N�� �־�����.

���
ù° �ٿ� 1���� ũ�ų� ����, N���� �۰ų� ���� �Ѽ��� ������ ����Ѵ�.

���� �Է�  ����
110
���� ���  ����
99
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/11/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 1065.cpp
*/

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	short arr[145], len = 0, n;
	for (short i = 1; i < 100; i++) arr[len++] = i;
	for (short i = 1; i < 10; i++) {
		for (short j = i / 2; j > 0; j--) arr[len++] = i * 100 + (i - j) * 10 + i - j * 2;
		arr[len++] = i * 100 + i * 10 + i;
		for (short j = 1; i + j * 2 < 10; j++) arr[len++] = i * 100 + (i + j) * 10 + i + j * 2;
	}
	scanf("%hd", &n);
	printf("%d\n", upper_bound(arr, arr + 144, n) - arr);
	return 0;
}