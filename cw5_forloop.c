#include <stdio.h>

int main(){
	int num, units;
	double  tp,  rate; 

	printf("Enter number of costumers: ");
	scanf("%d", &num);

	for (int i = 0; i < num; i++){
		printf("Enter number of electricity units comsumed: ");
       		scanf("%d", &units);

	if ( units <= 100){
		rate = units*0.50;
		tp = rate+20.00;
		printf("Total bill: %.2f\n", tp);
	}else if ( 100 < units <= 300){
		rate = units*0.75;
		tp = rate+20;
		printf("Total bill: %.2f\n", tp);
	}else if ( 300 < units <= 600){
		rate = units*1.20;
		tp = rate+20;
		if (tp > 500){
			tp *= tp*.10;
		}
		printf("Total bill: %.2f\n", tp);
	}else {
		rate = units*1.50;
		tp = rate+20;
		  if (tp > 500){
                        tp *= tp*.10;
                }

		printf("Total bill: %.2f\n", tp);
	}
}

	return 0;
}
