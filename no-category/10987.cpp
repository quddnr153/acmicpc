/* Problem Statements
*  ������ ����
������ 
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 ��	256 MB	1173	823	764	73.462%
����
���ĺ� �ҹ��ڷθ� �̷���� �ܾ �־�����.
�� ��, ����(a, e, i, o, u)�� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �ܾ �־�����.
�ܾ��� ���̴� 1���� ũ�ų� ����, 100���� �۰ų� ������,
���ĺ� �ҹ��ڷθ� �̷���� �ִ�.

���
ù° �ٿ� ������ ������ ����Ѵ�.

���� �Է�  ����
baekjoon
���� ���  ����
4
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/11/01
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 10987.cpp
*/

#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main()
{
	string input;
	cin >> input;
	int cnt = 0;
	for(int i = 0; i < input.size(); i++) {
		if(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u')
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}