/* Problem Statements
*  평균은 넘겠지
한국어 원문
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	128 MB	814	458	404	59.941%
문제
대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다. 당신은 그들에게 슬픈 진실을 알려줘야 한다.

입력
첫째 줄에는 테스트케이스 C가 주어진다.

둘째 줄부터 각 테스트케이스 마다 첫 수로 정수 N(1 <= N <= 1000)명의 학생이 주어지고 그 다음으로 N명의 0부터 100 사이의 점수가 이어서 주어진다.

출력
각 케이스마다 한줄씩 평균을 넘는 학생들의 비율을 소수점 넷째자리에서 반올림하여 출력한다.

예제 입력  복사
5
5 50 50 70 80 100
7 100 95 90 80 70 60 50
3 70 90 80
3 70 90 81
9 100 99 98 97 96 95 94 93 91
예제 출력  복사
40.000%
57.143%
33.333%
66.667%
55.556%
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/15
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 4344.cpp
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void test()
{
	int N, cnt = 0;
	double avg = 0;
	cin >> N;
	vector<int> scores;
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		scores.push_back(tmp);
		avg += (double)tmp;
	}
	sort(scores.begin(), scores.end());
	avg /= N;
	for (int i = 0; i < N; i++)
		if (scores[i] > avg) cnt++;
	double rates = (double)cnt / (double)N * 100.0;
	printf("%.3lf%%\n", rates);
}

int main()
{
	int C;
	cin >> C;
	while (C--)test();
}