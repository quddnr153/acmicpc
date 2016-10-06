#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> v;
    for(int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    int sum = 0;
    for(int i = 0; i < N; i++) {
        sum += v[i];
    }
    cout << sum << endl;
    return 0;
}
