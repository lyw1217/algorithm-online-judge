// https://school.programmers.co.kr/learn/courses/30/lessons/12951

#include <string>
#include <vector>
#include <iostream>
#include <cstdio>

using namespace std;

string solution(string s) {
    string answer = "";
    
    if ( s[0] > 'a' ) s[0] = s[0]-32;
    
    int isSpace = -1;
    for (int i=0; i<s.size(); i++) {
        if ( s[i] == ' ') isSpace = i;
        if ( i - isSpace == 1 ) {
            if ( s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i]-32;
                isSpace = -1;
            }
        } else if ( i - isSpace > 1 ) {
            if ( s[i] >= 'A' && s[i] <= 'Z' ) {
                s[i] = s[i]+32;
                isSpace = -1;
            }
        }
    }
    
    answer = s;
    
    return answer;
}