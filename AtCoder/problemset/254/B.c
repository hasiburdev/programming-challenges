#include<stdio.h>
int main() {
    int N;
    int numbers[30][30]; 
    scanf("%d", &N);
    for( int i = 0; i< N; i++) {
        for(int j=0;j<=i; j++) {

            if(j== 0) {
                numbers[i][j] = 1;
                printf("1 ");
                continue;
            } else if(j==i) {
                numbers[i][j] = 1;
                printf("1");
            } else{
                numbers[i][j] = numbers[i-1][j-1] + numbers[i-1][j];
            printf("%d ", numbers[i][j]);
            }
        }
        printf("\n");
    }
}