/* Problem Statements
*  ����Ʈ�� ����
�ѱ��� ����
������ 
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 ��	128 MB	588	312	255	56.291%
����
����Ʈ�� ������ ������ �ڿ��� n�� ���Ͽ�, n���� ũ��, 2n���� �۰ų� ���� �Ҽ��� ��� �ϳ� �����Ѵٴ� ������ ��� �ִ�.

�� ������ ������ ����Ʈ���� 1845�⿡ �����߰�, ������Ƽ ü������� 1850�⿡ �����ߴ�.

���� ���, 10���� ũ��, 20���� �۰ų� ���� �Ҽ��� 4���� �ִ�. (11, 13, 17, 19) ��, 14���� ũ��, 28���� �۰ų� ���� �Ҽ��� 3���� �ִ�. (17,19, 23)

n�� �־����� ��, n���� ũ��, 2n���� �۰ų� ���� �Ҽ��� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 

�Է�
�Է��� ���� ���� �׽�Ʈ ���̽��� �̷���� �ִ�. �� ���̽��� n�� �����ϸ�, �� �ٷ� �̷���� �ִ�. (n �� 123456)

�Է��� ���������� 0�� �־�����.

���
�� �׽�Ʈ ���̽��� ���ؼ�, n���� ũ��, 2n���� �۰ų� ���� �Ҽ��� ������ ����Ѵ�.

���� �Է�  ����
1
10
13
100
1000
10000
100000
0
���� ���  ����
1
4
3
21
135
1033
8392
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/20
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 4948.cpp
*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <string.h>

#define MAX_N (123456 * 2)

using namespace std;

char prime[(MAX_N + 7) /8];

inline bool isPrime(int k) { return prime[k >> 3] & (1 << (k & 7)); }
inline void setComposite(int k) { prime[k >> 3] &= ~(1 << (k & 7)); }

void eratosthenes() {
	memset(prime, 255, sizeof(prime));
	setComposite(0);
	setComposite(1);
	for(int i = 2; i * i <= MAX_N; i++)
		if(isPrime(i))
			for(int j = i * i; j <= MAX_N; j += i)
				setComposite(j);
}

int main()
{
	int n;
	eratosthenes();
	cin >> n;
	while(n != 0) {
		int cnt = 0;
		for(int i = n + 1; i <= 2 * n; i++) {
			if(isPrime(i)) cnt++;
		}
		cout << cnt << endl;
		cin >> n;
	}
	return 0;
}