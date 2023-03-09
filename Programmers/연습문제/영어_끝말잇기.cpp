// https://school.programmers.co.kr/learn/courses/30/lessons/12981

#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool check_word(string last_word, string word) {
    if ( last_word[last_word.length()-1] != word[0] ) return true;
    return false;
}

bool check_dup(vector<string> shown, string word) {
    for (int i = 0; i < shown.size(); i++){
        if ( shown[i] == word ) return true;
    }
    
    return false;
}

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    vector<string> shown;
    
    int turn = 0;
    int drop = 0;
    bool flag = false;
    for(int i=0; i<words.size(); i++) {
        drop++;
        if ( i % n == 0 ) {
            turn++;
            drop = 1;
        }
        
        if (i > 0 && check_word(words[i-1], words[i])) {
            flag = true;
            break;
        }
        
        if (check_dup(shown, words[i])) {
            flag = true;
            break;
        }
        shown.push_back(words[i]);
    }
    
    if ( flag ) {
        answer.push_back(drop);
        answer.push_back(turn);    
    } else {
        answer.push_back(0);
        answer.push_back(0);    
    }
    

    return answer;
}