/* Problem Statements
*  크로아티아 알파벳
한국어 원문 문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	128 MB	732	288	257	43.559%
문제
예전에는 운영체제에서 크로아티아 알파벳을 입력할 수가 없었다. 따라서, 다음과 같이 크로아티아 알파벳을 다음과 같이 변경해서 입력했다.

크로아티아 알파벳	변경
?	c=
?	c-
d?	dz=
n	d-
lj	lj
nj	nj
?	s=
?	z=
예를 들어, ljes=njak은 크로아티아 알파벳 6개(lj, e, ?, nj, a, k)로 이루어져 있다.

단어가 주어졌을 때, 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.

입력
첫째 줄에 최대 100글자의 단어가 주어진다. 알파벳 소문자와 '-', '='로만 이루어져 있다.

문제 설명에 나와있는 크로아티아 알파벳만 주어진다.

출력
입력으로 주어진 단어가 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.

예제 입력  복사
ljes=njak
예제 출력  복사
6
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/15
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 2941.cpp
*/

#include <cstdio>
#include <algorithm>

using namespace std;

char str[105];
int len = 0;

int solve(int pos) {
	if (pos >= len) return 0;
	switch (str[pos]) {
		case 'c': return solve(str[pos + 1] == '=' || str[pos + 1] == '-' ? pos + 2 : pos + 1) + 1;
		case 'd':
			if (str[pos + 1] == 'z' && str[pos + 2] == '=') return solve(pos + 3) + 1;
			else if (str[pos + 1] == '-') return solve(pos + 2) + 1;
			else return solve(pos + 1) + 1;
		case 'l': return solve(str[pos + 1] == 'j' ? pos + 2 : pos + 1) + 1;
		case 'n': return solve(str[pos + 1] == 'j' ? pos + 2 : pos + 1) + 1;
		case 's': return solve(str[pos + 1] == '=' ? pos + 2 : pos + 1) + 1;
		case 'z': return solve(str[pos + 1] == '=' ? pos + 2 : pos + 1) + 1;
		default: return solve(pos + 1) + 1;
	}
}

int main() {
	while ((str[len] = getchar()) != '\n' && str[len] != -1) len++;
	printf("%d", solve(0));
}