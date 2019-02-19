#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(){
	int pid1 = fork();
	if(pid1>0){
		wait(NULL);
	  	int pid2 = fork();
		if(pid2 ==0){
			execl("./3b","",NULL);	
		}
		else{
			wait(NULL);
		}
	}
	else{	
		execl("./3a","",NULL);
	}
	return 0;
}
