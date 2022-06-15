#include<stdio.h>
#include<string.h>

int main() {
	char* name;
	double salary, total_sales;
	scanf("%s %lf %lf", &name, &salary, &total_sales);
	printf("TOTAL = R$ %.2lf\n", salary + total_sales * .15);
}