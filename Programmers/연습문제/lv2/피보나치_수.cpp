// https://school.programmers.co.kr/learn/courses/30/lessons/12945?language=cpp
#include <string>
#include <vector>
using namespace std;

long d[100001];

long fibo(long n) {
    
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (d[n] != 0 ) return d[n]%1234567;
    
    return d[n] = (fibo(n-1)%1234567 + fibo(n-2)%1234567)%1234567;
}

int solution(int n) {
    return fibo(n);
}