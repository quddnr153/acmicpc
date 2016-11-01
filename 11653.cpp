/* Problem Statements
*  ���μ�����
������ 
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 ��	256 MB	2177	1166	941	55.353%
����
���� N�� �־����� ��, ���μ������ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���� N (1 �� N �� 10,000,000)�� �־�����.

���
N�� �μ��� �� �ٿ� �ϳ��� �����ϴ� ������� ����Ѵ�.

���� �Է�  ����
72
���� ���  ����
2
2
2
3
3
���� �Է� 2  ����
3
���� ��� 2  ����
3
���� �Է� 3  ����
6
���� ��� 3  ����
2
3
���� �Է� 4  ����
2
���� ��� 4  ����
2
���� �Է� 5  ����
9991
���� ��� 5  ����
97
103
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/11/01
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 11653.cpp
*/

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> factor(int n)
{
	if(n == 1) return vector<int>(1, 1);
	vector<int> ret;
	for(int div = 2; n > 1; div++) {
		while(n % div == 0){
			n /= div;
			ret.push_back(div);
		}
	}
	return ret;
}

int main()
{
	int N;
	cin >> N;
	if(N != 1){
		vector<int> res = factor(N);
		int len = res.size();
		for(int i = 0; i < len; i++)
			printf("%d\n", res[i]);
	}
	return 0;
}