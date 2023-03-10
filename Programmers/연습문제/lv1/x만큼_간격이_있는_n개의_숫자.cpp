// https://school.programmers.co.kr/learn/courses/30/lessons/12954

#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    
    answer.push_back(x);
    int xx = x;
    for (int i=0; i<n-1; i++) {
        xx += x;
        answer.push_back(xx);
    }
    
    return answer;
}