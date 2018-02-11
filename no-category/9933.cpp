/* Problem Statements
*  민균이의 비밀번호 성공
한국어 원문 문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	128 MB	2401	681	573	29.294%
문제
창영이는 민균이의 컴퓨터를 해킹해 텍스트 파일 하나를 자신의 메일로 전송했다. 파일에는 단어가 한 줄에 하나씩 적혀있었고, 이 중 하나는 민균이가 온라인 저지에서 사용하는 비밀번호이다.

파일을 살펴보던 창영이는 모든 단어의 길이가 홀수라는 사실을 알아내었다. 그리고 언젠가 민균이가 이 목록에 대해서 얘기했던 것을 생각해냈다. 민균이의 비밀번호는 목록에 포함되어 있으며, 비밀번호를 뒤집어서 쓴 문자열도 포함되어 있다.

예를 들어, 민균이의 비밀번호가 "tulipan"인 경우에 목록에는 "napilut"도 존재해야 한다. 알 수 없는 이유에 의해 모두 비밀번호로 사용 가능하다고 한다.

민균이의 파일에 적혀있는 단어가 모두 주어졌을 때, 비밀번호의 길이와 가운데 글자를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 단어의 수 N (1 ≤ N ≤ 100)이 주어진다. 다음 N개 줄에는 파일에 적혀있는 단어가 한 줄에 하나씩 주어진다. 단어는 알파벳 소문자로만 이루어져 있으며, 길이는 2보다 크고 14보다 작은 홀수이다.

출력
첫째 줄에 비밀번호의 길이와 가운데 글자를 출력한다. 항상 답이 유일한 경우만 입력으로 주어진다.

예제 입력  복사
4
las
god
psala
sal
예제 출력  복사
3 a
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/02
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 9933.cpp
*/
#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, index = 0;
	cin >> N;
	vector<string> inputs;
	for (int i = 0; i < N; i++) {
		string tmp;
		cin >> tmp;
		inputs.push_back(tmp);
	}
	for (int i = 0; i < N - 1; i++) {
		bool chk = false;
		string tmp = inputs[i];
		for (int j = 0; j < tmp.size(); j++)
			tmp[j] = inputs[i][tmp.size() - 1 - j];
		for (int j = i + 1; j < N; j++) {
			if (tmp.compare(inputs[j]) == 0) {
				chk = true;
				index = j;
				break;
			}
		}
		if (chk) break;
	}
	cout << inputs[index].size() << ' ' << inputs[index][inputs[index].size() / 2] << endl;
	return 0;
}