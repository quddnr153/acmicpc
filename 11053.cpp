#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <algorithm>

using namespace std;

int N;
int inset[1000];
int cache[1001];

int lis(int x)
{
    int& ret = cache[x + 1];
    if(ret != -1) return ret;
    ret = 1;
    for(int next = x + 1; next < N; next++)
        if(x == -1 || inset[x] < inset[next])
            ret = max(ret, lis(next) + 1);
    return ret;
}

int main()
{
    cin >> N;
    for(int i = 0 ; i < N; i++)
        cin >> inset[i];
    memset(cache, -1, sizeof(cache));
    int res = lis(-1) - 1;
    cout << res << endl;
    return 0;
}
