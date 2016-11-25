/* Problem Statements
*  덱
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	256 MB	1077	547	488	54.770%
문제
정수를 저장하는 덱(Deque)를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

명령은 총 여덟 가지이다.

push_front X: 정수 X를 덱의 앞에 넣는다.
push_back X: 정수 X를 덱의 뒤에 넣는다.
pop_front: 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
pop_back: 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 덱에 들어있는 정수의 개수를 출력한다.
empty: 덱이 비어있으면 1을, 아니면 0을 출력한다.
front: 덱의 가장 앞에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 덱의 가장 뒤에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
입력
첫째 줄에 주어지는 명령의 수 N (1 ≤ N ≤ 10,000)이 주어진다. 둘쨰 줄부터 N개의 줄에는 명령이 하나씩 주어진다. 주어지는 정수는 1보다 크거나 같고, 100,000보다 작거나 같다. 문제에 나와있지 않은 명령이 주어지는 경우는 없다.

출력
출력해야하는 명령이 주어질 때마다, 한 줄에 하나씩 출력한다.

예제 입력  복사
15
push_back 1
push_front 2
front
back
size
empty
pop_front
pop_back
pop_front
size
empty
pop_back
push_front 3
empty
front
예제 출력  복사
2
1
2
0
2
1
-1
0
1
-1
0
3
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/11/25
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 10866.cpp
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <string>

using namespace std;

int main()
{
	int N;
	deque<int> dq;
	cin >> N;
	for(int i = 0; i < N; i++) {
		string cmd;
		cin >> cmd;
		if(cmd.compare("push_front") == 0) {
			int tmp;
			cin >> tmp;
			dq.push_front(tmp);
		} else if(cmd.compare("push_back") == 0) {
			int tmp;
			cin >> tmp;
			dq.push_back(tmp);
		} else if(cmd.compare("pop_front") == 0) {
			if(dq.empty())
				cout << -1 << endl;
			else {
				cout << dq.front() << endl;
				dq.pop_front();
			}
		} else if(cmd.compare("pop_back") == 0) {
			if(dq.empty())
				cout << -1 << endl;
			else {
				cout << dq.back() << endl;
				dq.pop_back();
			}
		} else if(cmd.compare("size") == 0) {
			cout << dq.size() << endl;
		} else if(cmd.compare("empty") == 0) {
			if(dq.empty())
                cout << 1 << endl;
            else
                cout << 0 << endl;
		} else if(cmd.compare("front") == 0) {
			if(dq.empty())
                cout << -1 << endl;
            else
                cout << dq.front() << endl;
		} else if(cmd.compare("back") == 0) {
			if(dq.empty()) cout << -1 << endl;
            else cout << dq.back() << endl;
		}
	}
	return 0;
}