#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n == 1) cout << 1 << endl;
    else {
        int tmp = 8;
        for(int i = 0; i <= n; i++) {
            if(n < tmp) {
                cout << i + 2 << endl;
                break;
            }
            else {
                tmp = (tmp / 2 + (3 * (i + 2))) * 2;
                continue;
            }
        }
    }
    return 0;
}

