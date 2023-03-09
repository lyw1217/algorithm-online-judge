#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// common_len은 배열 common의 길이입니다.
int solution(int common[], size_t common_len) {
    int answer = 0 ;
    int diff_1 = common[common_len-2] - common[common_len-3] ;
    int diff_2 = common[common_len-1] - common[common_len-2] ;
    
    int diff ;
    if ( diff_2 == diff_1 ) // 공차수열
        diff = diff_2 ;
    else if ( diff_2 / diff_1 != 1 ) // 공비수열
        diff = (diff_2 / diff_1) * diff_2;
    
    answer = common[common_len-1] + diff;
    return answer;
}

