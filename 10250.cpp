#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <math.h>
#include <algorithm>

using namespace std;

void test()
{
    int H, W, N;
    cin >> H >> W >> N;
    if(N % H == 0) {
        cout << H;
        if(N / H <= 9) cout << 0 << N / H << endl;
        else cout << N / H << endl;
    } else {
        cout << N % H;
        if(N / H + 1 <= 9) cout << 0 << N / H + 1 << endl;
        else cout << N / H + 1 << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    while(T--)
        test();
    return 0;
}
