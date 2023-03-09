// https://school.programmers.co.kr/learn/courses/30/lessons/42842
#include <string>
#include <vector>
#include <iostream>

using namespace std;

// 가로 길이를 3부터 늘려가면서 brown의 최대 개수를 골라보자
// 전체 brown = 가로길이 * 2 + (세로길이-2)*2
// 전체 yellow = (가로길이-2) * (세로길이-2)

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int w = 2;
    int h = 2;
    bool flag = true;
    //cout << "brown = " << brown << " yellow = " << yellow << endl;
    while(flag) {
        w = 2;
        h++;
        while(flag) {
            w++;
            //cout << "w=" << w << ",h=" << h << endl;
            //cout << "(w*2) + (h-2)*2 = " << (w*2) + (h-2)*2 << endl;
            //cout << "(w-2) * (h-2) = " << (w-2) * (h-2) << endl;
            if (   ( brown  == ((w*2) + (h-2)*2) )
                && ( yellow == ((w-2) * (h-2)    ) ) ) 
            {
                flag = false;
                break;
            }         
            else if (   ( brown  < ((w*2) + (h-2)*2) )
                     || ( yellow < ((w-2) * (h-2)  ) ) ) {
                //cout << "next" << endl;
                break;
            }
        }
    }
    answer.push_back(w);
    answer.push_back(h);
    return answer;
}