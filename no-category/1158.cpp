/* Problem Statements
*  조세퍼스 문제
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
2 초	128 MB	2297	1107	879	52.290%
문제
조세퍼스 문제는 다음과 같다.

1번부터 N번까지 N명의 사람이 원을 이루면서 앉아있고, 양의 정수 M(≤ N)이 주어진다.
이제 순서대로 M번째 사람을 제거한다.
한 사람이 제거되면 남은 사람들로 이루어진 원을 따라 이 과정을 계속해 나간다.
이 과정은 N명의 사람이 모두 제거될 때까지 계속된다.
원에서 사람들이 제거되는 순서를 (N, M)-조세퍼스 순열이라고 한다.
예를 들어 (7, 3)-조세퍼스 순열은 <3, 6, 2, 7, 5, 1, 4>이다.

N과 M이 주어지면 (N,M)-조세퍼스 순열을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 N과 M이 빈 칸을 사이에 두고 순서대로 주어진다. (1 ≤ M ≤ N ≤ 5,000)

출력
예제와 같이 조세퍼스 순열을 출력한다.

예제 입력  복사
7 3
예제 출력  복사
<3, 6, 2, 7, 5, 1, 4>
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/11/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 1158.cpp
*/

#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	int N, M, cnt = 0;
	scanf("%d%d", &N, &M);
	list<int> table;
	vector<int> permutation;
	for(int i = 1; i <= N; i++)
		table.push_back(i);
	list<int>::iterator cur = table.begin();
	while(permutation.size() != N) {
		for(int i = 0; i < M - 1; i++) {
			if(++cur == table.end()) {
				cur = table.begin();
			}
		}
		permutation.push_back(*cur);
		list<int>::iterator tmp = cur++;
		if(cur == table.end()) cur = table.begin();
		table.erase(tmp);
	}
	cout << '<';
	for(int i = 0; i < N; i++) {
		cout << permutation[i];
		if(i != N - 1)
			cout << ", ";
	}
	cout << '>' << endl;
	return 0;
}