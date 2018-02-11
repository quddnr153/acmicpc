#include <iostream>
#include <string>
#include <string.h>
#include <math.h>
#include <algorithm>

using namespace std;

int queens[15], cnt = 0;

bool canPlace(int x, int y) {
	for(int i = 0; i < x; i++) {
		if((queens[i] == y) || (abs(i - x) == abs(queens[i] - y)))
			return false;
	}
	return true;
}

void placeQueens(int x, int size)
{
	for(int i = 0; i < size; i++) {
		if(canPlace(x, i)) {
			queens[x] = i;
			if(x == size - 1) {
				cnt++;
			}
			placeQueens(x + 1, size);
		}
	}
}

int main()
{
	int N;
	cin >> N;
	placeQueens(0, N);
	cout << cnt << endl;
	return 0;
}