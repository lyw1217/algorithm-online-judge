// https://school.programmers.co.kr/learn/courses/30/lessons/12985
#include <iostream>

using namespace std;
// 1,2 -> 1
// 3,4 -> 2
// 5,6 -> 3
// 7,8 -> 4
// 짝수 -> /2
// 홀수 -> (+1)/2
int check_match(int m) {
    //cout << "m = " << m << endl;
    if ( m%2 == 0 ) return m/2;
    else            return (m+1)/2;
}

int solution(int n, int a, int b)
{
    int answer = 0;
    int a_match = check_match(a);
    int b_match = check_match(b);
    
    while ( 1 ) {
        answer++;
        if ( a_match == b_match ) break;
        a_match = check_match(a_match);
        b_match = check_match(b_match);
    }
    
    return answer;
}