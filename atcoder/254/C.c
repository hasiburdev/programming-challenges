#include<stdio.h>
int main() {
    long long N, K;
    int list[1000];
    int splitList[1000][1000];
    scanf("%d %d", &N, &K);
    for(int i=0;i<N;i++) {
        scanf("%d ", &list[i]);
    }
    for(int i=0; i<K; i++) {
        int a = 0;
        for(int j=i; j<N; j+=K) {
        splitList[i][a++] = list[j];
        }
    }

    
}