// https://school.programmers.co.kr/learn/courses/30/lessons/12909?language=cpp

#include<string>
#include <iostream>
#include<vector>
using namespace std;

bool solution(string s)
{
    vector<char> b;
    
    for (int i=0; i<s.length(); i++) {
        if (s[i] == '(') {
            b.push_back(s[i]);
        } else if (s[i] == ')') {
            if (b.size() < 1) return false;
            b.pop_back();
        }
    }
    
    if ( b.size() > 0 ) return false;
    
    return true;
}