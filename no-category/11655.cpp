#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>

using namespace std;

string ROT13(string input)
{
    for(int i = 0; i < input.length(); i++) {
        if(input[i] == ' ') continue;
        else if((char)input[i] >= 'a' && (char)input[i] <= 'z') {
            if((char)input[i] + 13 > 'z') {
                char tmp = input[i] + 12 - 'z' + 'a';
                input[i] = tmp;
            } else input[i] = (char)(input[i] + 13);
        } else if((char)input[i] >= 'A' && (char)input[i] <= 'Z') {
            if((char)input[i] + 13 > 'Z') {
                char tmp = input[i] + 12 - 'Z' + 'A';
                input[i] = tmp;
            } else input[i] = (char)(input[i] + 13);
        } else continue;
    }
    return input;
}

int main()
{
    string input;
    getline(cin, input);
    cout << ROT13(input) << endl;
    return 0;
}
