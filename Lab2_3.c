#include <stdio.h>
#define Pi 3.14159
int main(void)
{
	
	int x,r;
	float y;
	printf("Please enter the side of the cube: ");
	scanf("%d",&x);
	printf("Please enter the radius of the sphere:");
	scanf("%d",&r);
	y=x*x*x-Pi*r*r*r*4/3;
	printf("the volume of the cube with spherical hollow is: ");
	printf("%.3f\n",y);
		return 0;
	
}
