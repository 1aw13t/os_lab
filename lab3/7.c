#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(){
	pid_t A,B,C,D,E,F,G,H,I;
	B = fork();
	if(B==0){
		A = getppid();
		printf("Process B : \npid : %d\nppid: %d\n ",getpid(),getppid());
	}
	else{
		C=fork();
		if(C==0){
			E = fork();
			if(E==0){
				printf("Process E : \npid : %d\nppid: %d\n ",getpid(),getppid());
			}
			else{
				F=fork();
				if(F==0){
					printf("Process F : \npid : %d\nppid: %d\n",getpid(),getppid());
				}
				else{
					printf("Process C : \npid : %d\nppid: %d\n",getpid(),getppid());
				}
			}
		}
		else{
			D = fork();
			if(D==0){
				G = fork();
				if(G==0){
					H = fork();
					if(H==0){
						printf("Process H : \npid : %d\nppid: %d\n ",getpid(),getppid());
					}
					else{
						I = fork();
						if(I==0){
							printf("Process I : \npid : %d\nppid: %d\n ",getpid(),getppid());
						}
						else{
							printf("Process G : \npid : %d\nppid: %d\n ",getpid(),getppid());
						}
					}
				}
				else{
					printf("Process D : \npid : %d\nppid: %d\n ",getpid(),getppid());
				}
			}
			else{
				printf("Process A : \npid : %d\n",getpid());
			}
		}
	}
}
