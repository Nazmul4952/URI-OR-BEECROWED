#include<stdio.h>
int main(){
	int n,h;
	float p;
	double ts;
	scanf("%d%d%f",&n,&h,&p);
	ts=p*h;
	printf("NUMBER = %d\n",n);
	printf("SALARY = U$ %0.2lf\n",ts);
	return 0;
}
