#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);
    if (A >= V) {
        cout << 1 << endl;
    } else {
        int tmp = V - A;
        if (tmp % (A - B) == 0)
            cout << tmp / (A - B) << endl;
        else
            cout << tmp / (A - B) + 1 << endl;
    }
    return 0;
}
