#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <math.h>
#include <algorithm>

using namespace std;

int N, M;
int cache[1001][1001];
int candybox[1001][1001];

int maxcandy(int n, int m)
{
    if(n < 0 || m < 0 || n >= N || m >= M) return 0;
    int& ret = cache[n][m];
    if(ret != -1) return ret;
    return ret = max(maxcandy(n + 1, m) + candybox[n + 1][m], max(maxcandy(n, m + 1) + candybox[n][m + 1], maxcandy(n + 1, m + 1) + candybox[n + 1][m + 1]));
}

int main()
{
    scanf("%d %d", &N, &M);
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            scanf("%d", &candybox[i][j]);
    for(int i = 0; i < 1001; i++)
        memset(cache[i], -1, sizeof(cache[i]));
    printf("%d\n", maxcandy(0, 0) + candybox[0][0]);
    return 0;
}
