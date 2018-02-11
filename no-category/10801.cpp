#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int A[10], B[10];
    int awin = 0, bwin = 0;
    for(int i = 0; i < 10; i++) cin >> A[i];
    for(int i = 0; i < 10; i++) cin >> B[i];
    for(int i = 0; i < 10; i++) {
        if(A[i] > B[i]) awin++;
        else if(A[i] < B[i]) bwin++;
        else continue;
    }
    if(awin > bwin) cout << 'A' << endl;
    else if(awin < bwin) cout << 'B' << endl;
    else cout << 'D' << endl;
    return 0;
}
