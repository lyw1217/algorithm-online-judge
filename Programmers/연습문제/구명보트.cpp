// https://school.programmers.co.kr/learn/courses/30/lessons/42885

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;

    sort(people.begin(), people.end());
    
    int l = 0;
    int r = people.size()-1;
    
    while ( l <= r ) {
        if ( people[l] + people[r] <= limit ) {
            answer++;
            l++;
            r--;
        } else {
            answer++;
            r--;    
        }
    }
    
    return answer;
}