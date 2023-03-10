// https://school.programmers.co.kr/learn/courses/30/lessons/12933
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    vector<int> digits;
    
    while( n > 0 ) {
        digits.push_back(n%10);
        n /= 10;
    }
    
    sort(digits.begin(), digits.end());
    
    int d = 1;
    for( int i = 0; i < digits.size(); i++ ) {
        answer += digits[i] * d;
        d *= 10;
    }
    
    return answer;
}