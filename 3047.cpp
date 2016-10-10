#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers;
    for(int i = 0; i < 3; i++) {
        int tmp;
        cin >> tmp;
        numbers.push_back(tmp);
    }
    sort(numbers.begin(), numbers.end());
    string an;
    cin >> an;
    for(int i = 0; i < 3; i++) {
        if(an[i] == 'A') cout << numbers[0];
        if(an[i] == 'B') cout << numbers[1];
        if(an[i] == 'C') cout << numbers[2];
        if(i == 2) cout << endl;
        else cout << ' ';
    }
}
