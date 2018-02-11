/* Problem Statements
*  ũ�ξ�Ƽ�� ���ĺ�
�ѱ��� ���� ������ 
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 ��	128 MB	732	288	257	43.559%
����
�������� �ü������ ũ�ξ�Ƽ�� ���ĺ��� �Է��� ���� ������. ����, ������ ���� ũ�ξ�Ƽ�� ���ĺ��� ������ ���� �����ؼ� �Է��ߴ�.

ũ�ξ�Ƽ�� ���ĺ�	����
?	c=
?	c-
d?	dz=
n	d-
lj	lj
nj	nj
?	s=
?	z=
���� ���, ljes=njak�� ũ�ξ�Ƽ�� ���ĺ� 6��(lj, e, ?, nj, a, k)�� �̷���� �ִ�.

�ܾ �־����� ��, �� ���� ũ�ξ�Ƽ�� ���ĺ����� �̷���� �ִ��� ����Ѵ�.

�Է�
ù° �ٿ� �ִ� 100������ �ܾ �־�����. ���ĺ� �ҹ��ڿ� '-', '='�θ� �̷���� �ִ�.

���� ���� �����ִ� ũ�ξ�Ƽ�� ���ĺ��� �־�����.

���
�Է����� �־��� �ܾ �� ���� ũ�ξ�Ƽ�� ���ĺ����� �̷���� �ִ��� ����Ѵ�.

���� �Է�  ����
ljes=njak
���� ���  ����
6
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/15
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 2941.cpp
*/

#include <cstdio>
#include <algorithm>

using namespace std;

char str[105];
int len = 0;

int solve(int pos) {
	if (pos >= len) return 0;
	switch (str[pos]) {
		case 'c': return solve(str[pos + 1] == '=' || str[pos + 1] == '-' ? pos + 2 : pos + 1) + 1;
		case 'd':
			if (str[pos + 1] == 'z' && str[pos + 2] == '=') return solve(pos + 3) + 1;
			else if (str[pos + 1] == '-') return solve(pos + 2) + 1;
			else return solve(pos + 1) + 1;
		case 'l': return solve(str[pos + 1] == 'j' ? pos + 2 : pos + 1) + 1;
		case 'n': return solve(str[pos + 1] == 'j' ? pos + 2 : pos + 1) + 1;
		case 's': return solve(str[pos + 1] == '=' ? pos + 2 : pos + 1) + 1;
		case 'z': return solve(str[pos + 1] == '=' ? pos + 2 : pos + 1) + 1;
		default: return solve(pos + 1) + 1;
	}
}

int main() {
	while ((str[len] = getchar()) != '\n' && str[len] != -1) len++;
	printf("%d", solve(0));
}