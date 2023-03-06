// 1439번 - 뒤집기

#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main (void) {
    string s;

    getline(cin, s);

    if ( s.size() == 1 ) return 0;
    
    int flip = 0;

    for ( int i = 1; i < s.size(); i++ ) {
        if ( s[0] != s[i] ) {
            flip++;
            if ( i == s.size()-1 ) break;
            if ( s[i] == s[i+1] ) flip--;
        }
    }

    printf("%d", flip);
}