// https://school.programmers.co.kr/learn/courses/30/lessons/12916

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    int p_c = 0;
    int p_y = 0;
    for(int i=0; i<s.length(); i++) {
        if (s[i] == 'p' || s[i] == 'P') p_c++;
        else if (s[i] == 'y' || s[i] == 'Y') p_y++;
    }
    if (p_c == p_y) answer = true;
    else answer = false;

    return answer;
}