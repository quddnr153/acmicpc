#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <math.h>

using namespace std;


int N, M, K;
int xx = 0, yy = 0;
int arr[15][15];

int retrive(int x, int y, bool chk) {
    if(x >= N || x < 0 || y >= M || y < 0) return 0;
    if(x == N - 1 && y == M - 1 && chk) return 1;
    if(x == xx&& y == yy) chk = true;
    return retrive(x + 1, y, chk) + retrive(x, y + 1, chk);
}

int main()
{
    cin >> N >> M >> K;
    int cnt = 1;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(K == cnt){
            xx = i; yy = j;
            }
            arr[i][j] = cnt++;
        }
    }
    cout << retrive(0, 0, false) << endl;
    return 0;
}
