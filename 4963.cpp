#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>

using namespace std;

int cache[51][51];
int maps[51][51];
int w, h;
int count;

int dp(int x, int y, int cnt)
{
    if(x < 0 || y < 0 || x >= w || y >= h) return 0;
    int& ret = cache[x][y];
    if(ret != -1) return ret;
    ret = 0;
    if(maps[x][y] == 0) return ret = 0;
    else {
        if(count == cnt) count++;
        return ret = dp(x - 1, y, cnt) + dp(x - 1, y - 1, cnt) + dp(x - 1, y + 1, cnt) + dp(x, y - 1, cnt) + dp(x, y + 1, cnt) + dp(x + 1, y - 1, cnt) + dp(x + 1, y, cnt) + dp(x + 1, y + 1, cnt);
    }
}

int main()
{
    while(1) {
        cin >> w >> h;
        if(w == 0 && h == 0)
            break;
        for(int i = 0; i < h; i++)
            for(int j = 0; j < w; j++)
                cin >> maps[i][j];
        for(int i = 0; i < 51; i++)
            memset(cache[i], -1, sizeof(cache[i]));
        count = 0;
        for(int i = 0; i < h; i++)
            for(int j = 0; j < w; j++)
                dp(i, j, count);
        cout << count << endl;
    }
    return 0;
}
