#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>

using namespace std;

const int MAX_N = 16;
const int INF = 987654321;
const int start = 0;

int N;
int weight[MAX_N][MAX_N];
int cache[MAX_N][1 << MAX_N];

/**
*  here : salesman current location
*  visited : visited location set of salesman, using bitmask (0 not yet visited, 1 visited)
*            ex) 1010 : 0, 2 locations are not visited and 1, 3 are visited
*
*  return minimum weight when salesman visited all location
*/
int tsp(int here, int visited) {
	// base case: if all visited, return weight of  last location to start location
	if (visited == (1 << N) - 1) {
		return weight[here][start];
	}

	int& result = cache[here][visited];

	if (result != -1) {
		return result;
	}

	result = INF;

	for (int next = 0; next < N; next++) {
		if (visited & (1 << next)) {
			continue;
		}

		// weight 0 means that salesman cannot go the next location from here
		if (weight[here][next] == 0) {
			continue;
		}

		result = min(result, tsp(next, visited | (1 << next)) + weight[here][next]);
	}

	return result;
}

int main() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> weight[i][j];
		}
	}

	memset(cache, -1, sizeof(cache));

	cout << tsp(0, 1) << endl;
}
