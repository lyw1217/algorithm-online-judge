// 1546번 - 평균
// https://www.acmicpc.net/problem/1546
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    scanf("%d", &n);

    vector<int> scores;
    int buf;
    for (int i=0; i<n; i++) {
        cin >> buf;
        scores.push_back(buf);
    }

    int max = *max_element(scores.begin(), scores.end());
    double sum = 0;
    for (int i=0; i<n; i++) {
        sum += (double)scores[i] / max * 100;
    }

    double result;

    result = sum / n;

    printf("%lf", result);
}