#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	float r;
	scanf("%f",&r);
	printf("Perimeter is %f and area is %f\n", 2*3.14*r , 3.14*r*r);
	return 0;
}
