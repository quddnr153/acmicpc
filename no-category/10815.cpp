#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <math.h>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
	int N, M;
	cin >> N;
	map<int, int> user;
	for(int i = 0; i < N; i++){
		int tmp;
		scanf("%d", &tmp);
		user.insert(pair<int,int>(tmp, tmp));
	}
	cin >> M;
	for(int i = 0; i < M; i++){
		int tmp;
		scanf("%d", &tmp);
		map<int,int>::iterator it = user.find(tmp);
		if(it == user.end())
			cout << 0 << ' ';
		else
			cout << 1 << ' ';
	}
	cout << endl;
	return 0;
}