#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int N;
    scanf("%d", &N);
    long long answer = 1;
    for (int i = 1; i <= N; i++)
        answer *= i;
    cout << answer << endl;
    return 0;
}
