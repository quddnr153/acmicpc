#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

string rev(string s)
{
    string res = "";
    for(int i = s.size() - 1; i >= 0; i--) res += s[i];
    return res;
}

string addstrings(string s1, string s2)
{
    string ret;
    int a1 = atoi(s1.c_str());
    int a2 = atoi(s2.c_str());
    ostringstream tmp;
    tmp << (a1 + a2);
    return tmp.str();
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    string result = rev(addstrings(rev(s1), rev(s2)));
    bool chk = false;
    for(int i = 0; i < result.size(); i++)
        if(result[i] == '0' && !chk) continue;
        else cout << result[i];
    cout << endl;
    return 0;
}
