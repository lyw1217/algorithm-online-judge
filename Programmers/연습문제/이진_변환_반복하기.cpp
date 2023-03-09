// https://school.programmers.co.kr/learn/courses/30/lessons/70129

#include <string>
#include <vector>
#include <iostream>

using namespace std;

string conv_binary(int dec) {
    vector<char> result;
    
    while(dec != 0) {
        
        if (dec % 2 == 1) result.insert(result.begin(),'1');
        else result.insert(result.begin(),'0');
        
        dec = dec / 2 ;
    }
    
    string s(result.begin(), result.end());
    
    return s;
}

vector<int> solution(string s) {
    vector<int> answer;
    int zero_count;
    
    int del_count = 0;
    int conv_count = 0;
    
    while (1) {
        zero_count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0') zero_count++;
        }
        
        cout << "zero_count = " << zero_count << endl;
        cout << "s.length() - zero_count = " << s.length() - zero_count << endl;
        
        s = conv_binary(s.length() - zero_count);
        cout << "s = " << s << "(" << s.length() << ")"<< endl;
        
        del_count += zero_count;
        conv_count += 1;
        if (s.length() == 1 ) break;
        if (conv_count == 10) break;
    }
    
    answer.push_back(conv_count);
    answer.push_back(del_count);
    
    return answer;
}