#include<stdio.h>
struct distance
{
	int feet;
	float inch;
}d1,d2,sum;
main()
{
	printf("enter 1st distance\n");
	printf("enter feet:");
	scanf("%d",&d1.feet);
	printf("enter inch:");
	scanf("%f",&d1.inch);
	
	printf("enter 2st distance\n");
	printf("enter feet:");
	scanf("%d",&d2.feet);
	printf("enter inch:");
	scanf("%f",&d2.inch);
	
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	
	printf("\n sum is distance=%d\n %f\n",sum.feet,sum.inch);
	
	
	
	
}
