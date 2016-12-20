/* Problem Statements
*  �������� ����
�ѱ��� ����
������ 
�ð� ����	�޸� ����	����	����	���� ���	���� ����
1 ��	128 MB	909	378	276	41.692%
����
1���� ū �ڿ��� �߿���  1�� �ڱ� �ڽ��� ������ ����� ���� �ڿ����� �Ҽ���� �Ѵ�. ���� ���, 5�� 1�� 5�� ������ ����� ���� ������ �Ҽ��̴�. ������, 6�� 6 = 2 �� 3 �̱� ������ �Ҽ��� �ƴϴ�.

�������� ������ ������ �������� ���ذ� ������, 2���� ū ��� ¦���� �� �Ҽ��� ������ ��Ÿ�� �� �ִٴ� ���̴�. �̷��� ���ڸ� ������ ���ڶ�� �Ѵ�. ��, ¦���� �� �Ҽ��� ������ ��Ÿ���� ǥ���� �� ������ ������ ��Ƽ���̶�� �Ѵ�. ���� ���, 4 = 2 + 2, 6 = 3 + 3, 8 = 3 + 5, 10 = 5 + 5, 12 = 5 + 7, 14 = 3 + 11, 14 = 7 + 7�̴�. 10000���� ���� ��� ¦�� n�� ���� ������ ��Ƽ���� �����Ѵ�.

2���� ū ¦�� n�� �־����� ��, n�� ������ ��Ƽ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ���� ������ n�� ������ ��Ƽ���� ���������� ��쿡�� �� �Ҽ��� ���̰� ���� ���� ���� ����Ѵ�.

�Է�
ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����. �� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ� ¦�� n�� �־�����. (4 �� n �� 10,000)

���
�� �׽�Ʈ ���̽��� ���ؼ� �־��� n�� ������ ��Ƽ���� ����Ѵ�. ����ϴ� �Ҽ��� ���� �ͺ��� ���� ����ϸ�, �������� �����Ѵ�.

���� �Է�  ����
3
8
10
16
���� ���  ����
3 5
5 5
5 11
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/20
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 9020.cpp
*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>

#define MAX_N (10001)

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
	int T;
	cin >> T;
	eratosthenes();
	while(T--) {
		int tmp, half;
		cin >> tmp;
		half = tmp / 2;
		if(isPrime(half)) {
			cout << half << " " << half << endl;
			continue;
		}
		for(int i = 1; i < half; i++) {
			if(isPrime(half - i) && isPrime(half + i)) {
				cout << half - i << " " << half + i << endl;
				break;
			}
		}
	}
	return 0;
}