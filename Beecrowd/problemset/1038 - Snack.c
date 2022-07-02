#include<stdio.h>

int main() {
    int count, amount;
    double price;
    scanf("%d %d", &count, &amount);
    switch(count) {
    	case 1:
    		price = amount * 4.00;
    		break;
    	case 2: 
    		price = amount * 4.50;
    		break;
    	case 3:
    		price = amount * 5.00;
    		break;
    	case 4: 
    		price = amount * 2.00;
    		break;
    	case 5: 
    		price = amount * 1.50;
    		break;
    }
    printf("Total: R$ %.2f\n", price);
    return 0;
}