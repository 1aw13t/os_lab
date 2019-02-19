#include  <stdio.h>
#include  <string.h>
#include  <sys/types.h>
#include <unistd.h>
int main(){
	if(fork() == 0){
		float r;
		scanf("%f",&r);
		printf("Perimeter is %f and area is %f\n", 2*3.14*r , 3.14*r*r );	
	}
	else{
		wait(NULL);
		float l,b;
		scanf("%f%f",&l,&b);
		printf("Perimeter is %f and area is %f\n", 2*(l+b) , l*b);
	}
	return 0;
}
