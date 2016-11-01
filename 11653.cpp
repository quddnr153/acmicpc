/* Problem Statements
*  소인수분해
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	256 MB	2177	1166	941	55.353%
문제
정수 N이 주어졌을 때, 소인수분해하는 프로그램을 작성하시오.

입력
첫째 줄에 정수 N (1 ≤ N ≤ 10,000,000)이 주어진다.

출력
N의 인수를 한 줄에 하나씩 증가하는 순서대로 출력한다.

예제 입력  복사
72
예제 출력  복사
2
2
2
3
3
예제 입력 2  복사
3
예제 출력 2  복사
3
예제 입력 3  복사
6
예제 출력 3  복사
2
3
예제 입력 4  복사
2
예제 출력 4  복사
2
예제 입력 5  복사
9991
예제 출력 5  복사
97
103
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/11/01
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 11653.cpp
*/

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> factor(int n)
{
	if(n == 1) return vector<int>(1, 1);
	vector<int> ret;
	for(int div = 2; n > 1; div++) {
		while(n % div == 0){
			n /= div;
			ret.push_back(div);
		}
	}
	return ret;
}

int main()
{
	int N;
	cin >> N;
	if(N != 1){
		vector<int> res = factor(N);
		int len = res.size();
		for(int i = 0; i < len; i++)
			printf("%d\n", res[i]);
	}
	return 0;
}