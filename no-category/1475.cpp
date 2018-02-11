/* Problem Statements
*  �� ��ȣ ����
������ 
�ð� ����	�޸� ����	����	����	���� ���	���� ����
2 ��	128 MB	2185	1009	891	47.293%
����
�ټ��̴� �������� ������ ���� �̻�Դ�. �ټ��̴� �ڱ� �� ��ȣ�� ���� �ö�ƽ ���ڷ� ���� ���̷��� �Ѵ�.

�ټ����� ���������� �ö�ƽ ���ڸ� �� ��Ʈ�� �Ǵ�. �� ��Ʈ���� 0������ 9������ ���ڰ� �ϳ��� ����ִ�. �ټ����� �� ��ȣ�� �־����� ��, �ʿ��� ��Ʈ�� ������ �ּҰ��� ����Ͻÿ�. (6�� 9�� ����� �̿��� �� �ְ�, 9�� 6�� ����� �̿��� �� �ִ�.)

�Է�
ù° �ٿ� �ټ����� �� ��ȣ N�� �־�����. N�� 1,000,000���� �۰ų� ���� �ڿ����̴�.

���
ù° �ٿ� �ʿ��� ��Ʈ�� ������ ����Ѵ�.

���� �Է�  ����
9999
���� ���  ����
2
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/20
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 1475.cpp
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	int cnt = 0;
	string N;
	cin >> N;
	bool chk[10][10];
	for(int i = 0; i < 10; i++)
		memset(chk[i], false, sizeof(chk[i]));
	for(int i = 0; i < N.size(); i++) {
		bool tmpchk = false;
		for(int j = 0; j < 10; j++) {
			cnt = max(cnt, j);
			switch(N[i]) {
			case '0':
				if(!chk[j][0]) {
					chk[j][0] = true;
					tmpchk = true;
				}
				break;
			case '1':
				if(!chk[j][1]) {
					chk[j][1] = true;
					tmpchk = true;
				}
				break;
			case '2':
				if(!chk[j][2]) {
					chk[j][2] = true;
					tmpchk = true;
				}
				break;
			case '3':
				if(!chk[j][3]) {
					chk[j][3] = true;
					tmpchk = true;
				}
				break;
			case '4':
				if(!chk[j][4]) {
					chk[j][4] = true;
					tmpchk = true;
				}
				break;
			case '5':
				if(!chk[j][5]) {
					chk[j][5] = true;
					tmpchk = true;
				}
				break;
			case '6':
				if(!chk[j][6]) {
					chk[j][6] = true;
					tmpchk = true;
				} else if(!chk[j][9]) {
					chk[j][9] = true;
					tmpchk = true;
				}
				break;
			case '7':
				if(!chk[j][7]) {
					chk[j][7] = true;
					tmpchk = true;
				}
				break;
			case '8':
				if(!chk[j][8]) {
					chk[j][8] = true;
					tmpchk = true;
				}
				break;
			case '9':
				if(!chk[j][9]) {
					chk[j][9] = true;
					tmpchk = true;
				} else if (!chk[j][6]) {
					chk[j][6] = true;
					tmpchk = true;
				}
				break;
			}
			if(tmpchk) break;
		}
	}
	cout << cnt + 1 << endl;
	return 0;
}