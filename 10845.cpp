#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <queue>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int N;
    queue<int> q;
    cin >> N;
    for(int i = 0; i < N; i++) {
        string cmd;
        cin >> cmd;
        if(cmd.compare("push") == 0) {
            int tmp;
            cin >> tmp;
            q.push(tmp);
            cout << tmp << endl;
        } else if(cmd.compare("pop") == 0) {
            if(q.empty())
                cout << -1 << endl;
            else {
                cout << q.front() << endl;
                q.pop();
            }
        } else if(cmd.compare("size") == 0) {
            cout << q.size() << endl;
        } else if(cmd.compare("empty") == 0) {
            if(q.empty())
                cout << 1 << endl;
            else
                cout << 0 << endl;
        } else if(cmd.compare("front") == 0) {
            if(q.empty())
                cout << -1 << endl;
            else 
                cout << q.front() << endl;
        } else if(cmd.compare("back") == 0) {
            if(q.empty()) cout << -1 << endl;
            else cout << q.back() << endl;
        }
    }
    return 0;
}
