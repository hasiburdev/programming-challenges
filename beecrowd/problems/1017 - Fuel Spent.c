#include<stdio.h>

int main() {
	int time, avg_speed;
	float required_fuel;
	scanf("%d %d", &time, &avg_speed);
	required_fuel = (time * avg_speed) / 12.0;
	printf("%.3f\n", required_fuel);
	return 0; 
}