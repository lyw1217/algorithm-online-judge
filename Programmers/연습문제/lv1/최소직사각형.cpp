// https://school.programmers.co.kr/learn/courses/30/lessons/86491
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int tmp = 0;
    int w_max = 0;
    int h_max = 0;
    for(int i=0; i<sizes.size(); i++) {
        if ( sizes[i][1] > sizes[i][0]) {
            tmp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = tmp;
        }
        
        if ( w_max < sizes[i][0] ) {
            w_max = sizes[i][0];
        }
        if ( h_max < sizes[i][1] ) {
            h_max = sizes[i][1];
        }
    }
    
    answer = w_max * h_max ;
    return answer;
}