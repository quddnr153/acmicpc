/* Problem Statements
* �׷� �ܾ� üĿ
������ 
�ð� ����   �޸� ���� ����    ����    ���� ���   ���� ����
2 ��    128 MB  901 528 472 60.051%
����
�׷� �ܾ�� �ܾ �����ϴ� ��� ���ڿ� ���ؼ�, �� ���ڰ� �����ؼ� ��Ÿ���� ��츸�� ���Ѵ�. ���� ���, ccazzzzbb�� c, a, z, b�� ��� �����ؼ� ��Ÿ����, kin�� k, i, n�� �����ؼ� ��Ÿ���� ������ �׷� �ܾ�������, aabbbccb�� b�� �������� ��Ÿ���� ������ �׷� �ܾ �ƴϴ�.

�ܾ� N���� �Է����� �޾� �׷� �ܾ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� �ܾ��� ���� N�� ���´�. N�� 100���� �۰ų� ���� �ڿ����̴�. ��°�ٺ��� N���� �ٿ� �ܾ ���´�. �ܾ�� ���ĺ� �ҹ��ڷθ� �Ǿ��ְ� �ߺ����� ������, ���̴� �ִ� 100�̴�.

���
ù° �ٿ� �׷� �ܾ��� ������ ����Ѵ�.

���� �Է�  ����
3
happy
new
year
���� ���  ����
3
*/

/*
*  Author   : Byungwook Lee
*  Date     : 2016/12/15
*  E-mail   : quddnr153@gmail.com
*  Github   : github.com/quddnr153
*  Filename : 1316.cpp
*/

#include <iostream>
#include <string>
#include <string.h>
#include <cstdio>

using namespace std;

int main()
{
    int N, cnt, a[26];
    cin >> N; 
    cnt = N;
    while(N--) {
        string word;
        cin >> word;
        memset(a, 0, sizeof(a));
        for(int i = 0; i < word.size(); i++) {
            if(!a[word[i] - 'a'] || word[i] == word[i - 1]) a[word[i] - 'a']++;
            else {
                cnt--;
                break;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
