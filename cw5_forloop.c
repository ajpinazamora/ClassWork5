#include <stdio.h>

int main(){
	int num, units;
	double  tp,  rate; 

	printf("Enter number of costumers: ");
	scanf("%d", &num);

	for (int i = 0; i < num; i++){
		printf("Enter number of units comsumed by costumer: ");
       		scanf("%d", &units);

	if ( units <= 100){
		rate = units*0.50;
		tp = rate+20.00;
	}else if ( units <= 300){
		rate = units*0.75;
		tp = rate+20;
	}else if ( units <= 600){
		rate = units*1.20;
		tp = rate+20;
		if (tp > 500){
			tp = tp*1.10;
		}
	}else {
		rate = units*1.50;
		tp = rate+20;
		  if (tp > 500){
                        tp = tp*1.10;
                }
	}
	printf("Total bill for customer %d: $%.2f\n", i+1, tp);

}
	return 0;
}
