#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>

using namespace std;

void test()
{
    int R;
    string S;
    cin >> R >> S;
    for(int i = 0; i < S.size(); i++) {
        for(int j = 0; j < R; j++) cout << S[i];
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
        test();
    return 0;
}
