#include<stdio.h>

int main() {
    int number,work_hour;
    float hourly_rate, salary;
    scanf("%d %d %f", &number, &work_hour, &hourly_rate);
    salary = (float) work_hour * hourly_rate;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}