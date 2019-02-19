#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(){
	int pid1 = fork();
	if(pid1>0){
		sleep(10);
	  	int pid2 = fork();
		if(pid2 ==0){
			execl("./3b","",NULL);	
		}
		else{
			sleep(10);
		}
	}
	else{	
		execl("./3a","",NULL);
	}
	return 0;
}
