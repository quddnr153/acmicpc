/* Problem Statements
*  방 번호 성공
문제집 
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
2 초	128 MB	2185	1009	891	47.293%
문제
다솜이는 은진이의 옆집에 새로 이사왔다. 다솜이는 자기 방 번호를 예쁜 플라스틱 숫자로 문에 붙이려고 한다.

다솜이의 옆집에서는 플라스틱 숫자를 한 세트로 판다. 한 세트에는 0번부터 9번까지 숫자가 하나씩 들어있다. 다솜이의 방 번호가 주어졌을 때, 필요한 세트의 개수의 최소값을 출력하시오. (6은 9를 뒤집어서 이용할 수 있고, 9는 6을 뒤집어서 이용할 수 있다.)

입력
첫째 줄에 다솜이의 방 번호 N이 주어진다. N은 1,000,000보다 작거나 같은 자연수이다.

출력
첫째 줄에 필요한 세트의 개수를 출력한다.

예제 입력  복사
9999
예제 출력  복사
2
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/20
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 1475.cpp
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	int cnt = 0;
	string N;
	cin >> N;
	bool chk[10][10];
	for(int i = 0; i < 10; i++)
		memset(chk[i], false, sizeof(chk[i]));
	for(int i = 0; i < N.size(); i++) {
		bool tmpchk = false;
		for(int j = 0; j < 10; j++) {
			cnt = max(cnt, j);
			switch(N[i]) {
			case '0':
				if(!chk[j][0]) {
					chk[j][0] = true;
					tmpchk = true;
				}
				break;
			case '1':
				if(!chk[j][1]) {
					chk[j][1] = true;
					tmpchk = true;
				}
				break;
			case '2':
				if(!chk[j][2]) {
					chk[j][2] = true;
					tmpchk = true;
				}
				break;
			case '3':
				if(!chk[j][3]) {
					chk[j][3] = true;
					tmpchk = true;
				}
				break;
			case '4':
				if(!chk[j][4]) {
					chk[j][4] = true;
					tmpchk = true;
				}
				break;
			case '5':
				if(!chk[j][5]) {
					chk[j][5] = true;
					tmpchk = true;
				}
				break;
			case '6':
				if(!chk[j][6]) {
					chk[j][6] = true;
					tmpchk = true;
				} else if(!chk[j][9]) {
					chk[j][9] = true;
					tmpchk = true;
				}
				break;
			case '7':
				if(!chk[j][7]) {
					chk[j][7] = true;
					tmpchk = true;
				}
				break;
			case '8':
				if(!chk[j][8]) {
					chk[j][8] = true;
					tmpchk = true;
				}
				break;
			case '9':
				if(!chk[j][9]) {
					chk[j][9] = true;
					tmpchk = true;
				} else if (!chk[j][6]) {
					chk[j][6] = true;
					tmpchk = true;
				}
				break;
			}
			if(tmpchk) break;
		}
	}
	cout << cnt + 1 << endl;
	return 0;
}