#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i = 0; i <= N; i++){
        string tmp;
        getline(cin, tmp);
        if(i == 0) continue;
        else if(tmp[0] - 'A' > 26){
            tmp[0] -= 'a' - 'A';
            cout << tmp << endl;
        }
        else
            cout << tmp << endl;
    }
    return 0;
}
