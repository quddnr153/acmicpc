#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    string input[5];
    int maxn = 0;
    for(int i = 0; i < 5; i++) {
        cin >> input[i];
        maxn = max((int)input[i].length(), maxn);
    }
    for(int i = 0; i < maxn; i++) {
        for(int j = 0; j < 5; j++) {
            if(input[j].length() - 1 >= i)
                cout << input[j][i];
        }
    }
    printf("\n");
    return 0;
}
