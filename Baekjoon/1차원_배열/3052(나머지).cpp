// 3052번 - 나머지

#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (void) {
    vector<int> nums;
    int buf;
    for (int i = 0; i < 10; i++) {
        scanf("%d",&buf);
        nums.push_back(buf % 42);
    }
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    printf("%d", (int)nums.size());
}