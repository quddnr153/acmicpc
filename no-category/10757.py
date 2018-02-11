"""
큰 수 A+B 실패
문제집 
시간 제한   메모리 제한 제출    정답    맞은 사람   정답 비율
1 초    256 MB  3173    1092    880 39.622%
문제
A+B를 계산하시오.

입력
첫째 줄에 A와 B가 주어진다. (0 < A,B < 1010000)

    출력
    첫째 줄에 A+B를 출력한다.

     

    예제 입력  복사
    9223372036854775807 9223372036854775808
    예제 출력  복사
    18446744073709551615
"""

"""
  Author    : Byungwook Lee
  Date      : 2016/12/12
  E-mail    : quddnr153@gmail.com
  Github    : github.com/quddnr153
  Filename  : 10757.py
"""

a, b = map(int, input().split());
print(a + b);
