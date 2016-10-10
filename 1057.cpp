#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int N, K, L, vs = 0, tmp;
    bool fight = false;
    cin >> N >> K >> L;
    tmp = N;
    while(1) {
        int cnt = 0;
        for(int i = 1; i <= tmp; i = i + 2) {
            cnt++;
            if(i + 1 == tmp + 1) {
                if(i == K) K = cnt;
                if(i == L) L = cnt;
                break;
            }
            if((i == K && (i + 1) == L) || (i == L && (i + 1) == K)) {
                fight = true;
                break;
            }
            if(i == K || (i + 1) == K) K = cnt;
            if(i == L || (i + 1) == L) L = cnt;
        }
        tmp = cnt;
        vs++;
        if(fight) {
            cout << vs << endl;
            break;
        }
    }
    return 0;
}
