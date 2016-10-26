#include <stdio.h>
#define Pi 3.14159
int main(void)
{

	int a,b,c,d,y1,y2,q1,q2;
	printf("Please input fraction X <ex.1/2>:");
	scanf("%d/%d",&a,&b);
	printf("Please input fraction Y <ex.1/2>:");
	scanf("%d/%d",&c,&d);
	
	printf("The answer is ");
	y1=a*c;
	y2=b*d;
	q1=y1/y2;	
	q2=y1%y2;

	
	printf("%d %d/%d\n",q1,q2,y2);
		return 0;
	
}
