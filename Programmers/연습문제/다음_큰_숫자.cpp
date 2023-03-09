// https://school.programmers.co.kr/learn/courses/30/lessons/12911
#include <string>
#include <vector>
using namespace std;

int get_count(int num) {
    int count = 0;
    while (num != 0) {
        if ( num % 2 == 1)  count++;
        num = num / 2 ;
    }
    
    return count;
}

int solution(int n) {
    int count = get_count(n);
    while (true) {
        if (count == get_count(n+1)) return n+1;
        n++;
    }
}