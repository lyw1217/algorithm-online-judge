// 2562번 - 최댓값

#include <cstdio>

int main(void) {
    int n, idx;
    int max = 0;
    for (int i=0; i<9; i++) {
        scanf("%d", &n);
        if (n > max) {
            max = n;
            idx = i+1;
        }
    }
    printf("%d\n%d", max, idx);
}
