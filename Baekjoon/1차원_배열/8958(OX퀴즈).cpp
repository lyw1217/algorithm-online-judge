// 8958번 - OX퀴즈

#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main(void) {
    int num;
    cin >> num ;
    cin.ignore();

    for (int i=0; i<num; i++) {
        int count = 0;
        int score = 0;
        string test;

        getline(cin, test);
        for (int j=0; j<test.size(); j++) {
            if (test[j] == 'O') {
                count++;
                if ( j == test.size()-1 ) {
                    for ( int k=0; k<count; k++) {
                        score += k+1;
                    }
                }
            } else {
                //printf("count = %d\n", count);
                for ( int k=0; k<count; k++) {
                    score += k+1;
                }
                count = 0;
            }
        }
        printf("%d\n", score);
    }
}