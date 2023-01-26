#include <stdio.h>

int main(){
	int n, sum=0, a=0,i;
	float avg;
	printf("Enter numbers:");
	scanf("%d", &n);

	while(n>0)
	{
		i=n%10;
		sum+=i;
		n/=10;
		a++;
	}
	avg = sum/a;
	printf("Average is %5.2f", avg);
	
	return 0;
}
