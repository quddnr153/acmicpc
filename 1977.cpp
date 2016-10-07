#include <iostream>
#include <cstdio>
#include <string.h>
#include <string>
#include <algorithm>
#include <math.h>

#include <vector>
using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;
    vector<int> com;
    for(int st = 1; st <= 100; st++) {
        int sq = st * st;
        if(sq >= M && sq <= N)
            com.push_back(sq);
    }
    if(com.empty())
        cout << -1 << endl;
    else {
        int sum = 0;
        for(int i = 0 ;i < com.size(); i++){
            sum += com[i];
        }
        cout << sum << endl << com[0] << endl;
    }
    return 0;
}
