nclude <iostream>
#include <cstdio>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>

using namespace std;

const int MAX_N = 1000001;
int n = MAX_N;
unsigned char prime[(MAX_N + 7) / 8];

inline bool isPrime(int k) { return prime[k >> 3] & (1 << (k & 7)); }
inline void setcomposite(int k) { prime[k >> 3] &= ~(1 << (k & 7)); }

void eratosthenes(){
	memset(prime, 255, sizeof(prime));
	setcomposite(0);
	setcomposite(1);
	for(int i = 2; i * i <= n; i++){
		if(isPrime(i))
		for(int j = i * i; j <= n; j += i)
			setcomposite(j);
	}
}

int main()
{
	int M, N;
	cin >> M >> N;
	eratosthenes();
	for(int i = M; i <= N; i++){
		if(isPrime(i)) printf("%d\n", i);
	}
	return 0;
}
