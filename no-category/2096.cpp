#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <math.h>
#include <algorithm>

#define INF 987654321

using namespace std;

int main()
{
    int N, a = 0, b = 0, c = 0;
    int max1 = 0, max2 = 0, max3 = 0, min1 = 0, min2 = 0, min3 = 0;
    cin >> N;
    for(int i = 0; i < N; i++) {
        int d, e, f;
        scanf("%d %d %d", &d, &e, &f);
        a = max(max1 + d, max2 + d);
        b = max(max1 + e, max(max2 + e, max3 + e));
        c = max(max2 + f, max3 + f);
        max1 = a;max2 = b; max3 = c;
        a = min(min1 + d, min2 + d);
        b = min(min1 + e, min(min2 + e, min3 + e));
        c = min(min2 + f, min3 + f);
        min1 = a; min2 = b; min3 = c;
    }
    cout << max(max1, max(max2, max3)) << ' ' << min(min1, min(min2, min3)) << endl;
    return 0;
}
