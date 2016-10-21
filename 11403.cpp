nclude <iostream>i
#include <cstdio>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>
#include <string.h>

using namespace std;

int N;
vector<vector<int> > adj;
vector<bool> visited;

void dfs(int here)
{
//	cout << "DFS visits " << here << endl;
	for(int i = 0; i < adj[here].size(); i++){
		if(adj[here][i] == 1) {
			if(!visited[i]) {
				visited[i] = true;
				dfs(i);
			}
		}
	}
}
void dfsAll(){
	for(int i = 0; i < adj.size(); i++) {
		visited = vector<bool>(adj.size(), false);
		dfs(i);
		for(int j = 0; j < adj.size(); j++) {
			if(visited[j]) printf("1 ");
			else printf("0 ");
		}
		printf("\n");
	}
}

int main()
{
	scanf("%d", &N);
	adj.assign(N, vector<int>(N, 0));
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			int tmp;
			scanf("%d", &tmp);
			adj[i][j] = tmp;
		}
	}
	dfsAll();
	return 0;
}
