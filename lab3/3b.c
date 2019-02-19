#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(){
	float l,b;
	scanf("%f%f",&l,&b);
	printf("Perimeter is %f and area is %f\n", 2*(l+b) , l*b);
	return 0;
}
