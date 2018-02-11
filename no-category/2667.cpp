#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>

#define MAX_N 25

using namespace std;

int N;
int cache[MAX_N][MAX_N];
string board[MAX_N];

int makegroup(int x, int y, int cnt)
{
    if(x < 0 || y < 0 || x >= N || y >= N) return 0;
    int& ret = cache[x][y];
    if(ret != -1) return 0;
    if(board[x][y] == '0') {
        ret = 0;
        return 0;
    } else {
        cnt++;
        ret = 1;
        return ret = makegroup(x - 1, y, cnt) + makegroup(x, y - 1, cnt) + makegroup(x + 1, y, cnt) +makegroup(x, y + 1, cnt) + 1;
    }
}

int main()
{
    vector<int> agroup;
    scanf("%d", &N);
    for(int i = 0; i < MAX_N; i++)
        memset(cache[i], -1, sizeof(cache[i]));
    for(int i = 0; i < N; i++)
        cin >> board[i];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            int tmp = makegroup(i, j, 0);
            if(tmp > 0) 
                agroup.push_back(tmp);
        }
    }
    sort(agroup.begin(), agroup.end());
    cout << agroup.size() << endl;
    for(int i = 0; i < agroup.size(); i++)
        cout << agroup[i] << endl;
    return 0;
}
