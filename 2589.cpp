#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>

#define INF 987654321

using namespace std;

int X, Y;
int board[50][50];

int main()
{
    scanf("%d %d", &X, &Y);
    for(int i = 0; i < X; i++){
        strint tmp;
        scanf("%s", &tmp);
        for(int j = 0; j < tmp.size(); j++)
            if(tmp[j] == 'W') board = INF;
            else if(tmp[j] == 'L') board = 1;
    }
}
