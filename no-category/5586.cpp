/* Problem Statements
*  JOI�� IOI
�ѱ��� ���� ������ 
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 ��	128 MB	858	640	583	76.509%
����
�Է����� �־����� ���ڿ����� �������� 3���� ���ڰ� JOI �Ǵ� IOI�� ���� ���� �� �� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ���ڿ��� ���ĺ� �빮�ڷθ� �̷���� �ִ�. ���� ���, �Ʒ��� ���� "JOIOIOI"���� JOI�� 1��, IOI�� 2�� �ִ�.



�Է�
ù° �ٿ� ���ĺ� 10000�� �̳��� ���ڿ��� �־�����. 

���
ù° �ٿ� ���ڿ��� ���ԵǾ� �ִ� JOI�� ����, ��° �ٿ� IOI�� ������ ����Ѵ�.

���� �Է�  ����
JOIOIOIOI
���� ���  ����
1
3
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 5586.cpp
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
	string input, joi = "JOI", ioi = "IOI";
	cin >> input;
	int len = input.length(), joicnt = 0, ioicnt = 0;
	for (int i = 0; i < len - 2; i++) {
		if (input.substr(i, 3).compare(joi) == 0) joicnt++;
		if (input.substr(i, 3).compare(ioi) == 0) ioicnt++;
	}
	cout << joicnt << endl << ioicnt << endl;
	return 0;
}