// https://school.programmers.co.kr/learn/courses/30/lessons/12939

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> split(string s) {
    vector<int> tmp;
    
    int last_index = 0;
    int length_num = 0;
    
    for ( int i = 1; i < s.length(); i++ ) {
        length_num++ ;
        if ( s[i] == ' ' ) {
            tmp.push_back( stoi( s.substr(last_index, length_num) ) );
            last_index = i+1;
        } else if ( i == s.length()-1 ) {
            tmp.push_back( stoi( s.substr(last_index, length_num) ) );
        }
    }
    
    return tmp;
}

int get_min(vector<int> n) {
    int m = n[0];
    for (int i = 0; i < n.size(); i++) {
        if (n[i] < m) m = n[i];
    }
    return m;
}

int get_max(vector<int> n) {
    int m = n[0];
    for (int i = 0; i < n.size(); i++) {
        if (n[i] > m) m = n[i];
    }
    return m;
}

string solution(string s) {
    string answer = "";
    
    vector<int> nums;
    
    nums = split(s);
    
    int min, max;
    
    min = get_min(nums);
    max = get_max(nums);
    
    answer = to_string(min) + " " + to_string(max);
    
    return answer;
}