#include <cstdio>
#define P(x) ((x==1)?printf("* "):printf(" *"))

int main(){
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            P(i % 2 == 0 ? 1 : 0);
        }
        puts("");
    } 
    return 0;
}