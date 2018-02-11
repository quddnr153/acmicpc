#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>


using namespace std;


int main()
{
    int A[100][100], B[100][100];
    int N, M;
    scanf("%d %d", &N, &M);
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++) scanf("%d", &A[i][j]);
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++) {
            int tmp; scanf("%d", &tmp);
            A[i][j] +=  tmp;
        }
    }
    for(int i = 0 ; i < N; i++){
        for(int j = 0; j < M; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
    return 0;
}
