/* Problem Statements
*  �Ӹ�������� Ȯ���ϱ� ����
������ 
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 ��	256 MB	1291	861	747	70.672%
����
���ĺ� �ҹ��ڷθ� �̷���� �ܾ �־�����. �� ��, �� �ܾ �Ӹ�������� �ƴ��� Ȯ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Ӹ�����̶� ������ ���� ���� �Ųٷ� ���� �� �Ȱ��� �ܾ ���Ѵ�. 

level, noon�� �Ӹ�����̰�, baekjoon, online, judge�� �Ӹ������ �ƴϴ�.

�Է�
ù° �ٿ� �ܾ �־�����. �ܾ��� ���̴� 1���� ũ�ų� ����, 100���� �۰ų� ������, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.

���
ù° �ٿ� �Ӹ�����̸� 1, �ƴϸ� 0�� ����Ѵ�.

���� �Է� 
level
���� ��� 
1
���� �Է� 2
baekjoon
���� ��� 2 
0
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 110988.cpp
*/

#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main()
{
	string in;
	cin >> in;
	bool chk = true;
	for(int i = 0; i < in.size() / 2; i++) {
		if(in[i] != in[in.size() - i - 1]) {
			chk = false;
			break;
		}
	}
	if(chk) cout << 1 << endl;
	else cout << 0 << endl;
}