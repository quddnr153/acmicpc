#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <stdlib.h>

#define MAX_N 1000*1000

using namespace std;

int n;

unsigned char sieve[(MAX_N + 7) / 8];
inline bool isPrime(int k) { return sieve[k >> 3] & (1 << (k & 7)); }

inline void setComposite(int k) { sieve[k >> 3] &= ~(1 << (k & 7)); }

void eratosthenes() {
    n = MAX_N;
    memset(sieve, 255, sizeof(sieve));
    setComposite(0);
    setComposite(1);
    int sqrtn = int(sqrt((double)n));
    for(int i = 2; i <= sqrtn; ++i)
        if(isPrime(i))
            for(int j = i *i; j <=n; j+=i)
                setComposite(j);
}

int main()
{
    int M, N;
    cin >> M >> N;
    eratosthenes();
    for(int i = M; i <= N; i++) {
        if(isPrime(i))
            cout << i << endl;
    }
    return 0;
}
