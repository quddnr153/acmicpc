/* Problem Statements
*  ���̾� ����
�ѱ��� ���� ������ 
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 ��	128 MB	784	495	446	64.265%
����
������� �ҸӴϴ� �Ʒ� �׸��� ���� ������ ���̾� ��ȭ�⸦ ����Ѵ�.



��ȭ�� �ɰ� ���� ��ȣ�� �ִٸ�, ���ڸ� �ϳ��� ���� ������ �ݼ� ���� �ִ� �� ���� �ð�������� ������ �Ѵ�. �ٸ� ���ڸ� �������� ���̾��� ���� ��ġ�� ���ư��⸦ ��ٷ��� �Ѵ�.

���� 1�� �ɷ��� �� 2�ʰ� �ʿ��ϴ�. 1���� ū ���� �Ŵµ� �ɸ��� �ð��� �̺��� �� �ɸ���, �� ĭ ���� �ִ� ���ڸ� �ɱ� ���ؼ� 1�ʾ� �� �ɸ���.

������� �ҸӴϴ� ��ȭ ��ȣ�� �� ���ڿ� �ش��ϴ� ���ڷ� �ܿ��. ��, � �ܾ �� ��, �� ���ĺ��� �ش��ϴ� ���ڸ� �ɸ� �ȴ�. ���� ���, UNUCIC�� 868242�� ����.

�ҸӴϰ� �ܿ� �ܾ �־����� ��, �� ��ȭ�� �ɱ� ���ؼ� �ʿ��� �ð��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���ĺ� �빮�ڷ� �̷���� �ܾ �־�����. �ܾ�� 2����~15���ڷ� �̷���� �ִ�.

���
ù° �ٿ� ���̾��� �ɱ� ���ؼ� �ʿ��� �ð��� ����Ѵ�.

���� �Է�  ����
UNUCIC
���� ���  ����
36
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 5622.cpp
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
	int cnt = 0;
	string input;
	cin >> input;
	cnt += input.size();
	for (int i = 0; i < input.size(); i++) {
		char a = input[i];
		if (a == 'A' || a == 'B' || a == 'C')
			cnt += 2;
		else if (a == 'D' || a == 'E' || a == 'F')
			cnt += 3;
		else if (a == 'G' || a == 'H' || a == 'I')
			cnt += 4;
		else if (a == 'J' || a == 'K' || a == 'L')
			cnt += 5;
		else if (a == 'M' || a == 'N' || a == 'O')
			cnt += 6;
		else if (a == 'P' || a == 'Q' || a == 'R' || a == 'S')
			cnt += 7;
		else if (a == 'T' || a == 'U' || a == 'V')
			cnt += 8;
		else if (a == 'W' || a == 'X' || a == 'Y' || a == 'Z')
			cnt += 9;
	}
	cout << cnt << endl;
	return 0;
}