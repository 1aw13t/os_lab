#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* func(int pid) {
	char command[100] = "ps -p ";
	char buf[20];
	char *buffer1 = (char *)malloc(1000*sizeof(char));
	char buffer[1000];
	//strcpy(buffer,"Hello");
	//printf("%s\n",buffer);
	snprintf(buf,sizeof(buf),"%d",pid);
	strcat(command,buf);
	strcat(command," -o lstart");
	//printf("%s\n",command);
	FILE *pp;
	int flag = 0;
	char *line;
	pp = popen(command, "r");
	if (pp != NULL) {
		while (1) {
 	  		line = fgets(buffer, sizeof(buffer), pp);
 	  		//puts(buffer1);
	  		if (line == NULL) break;
	  		if(flag == 1){
	  			strcpy(buffer1,buffer);
	  			break;
	  		}
	  		flag = 1;
		}
		pclose(pp);
	}
	//printf("%s\n",buffer1);
	return buffer1;
}

int main(){
	int pid;
	scanf("%d",&pid);
	char *s = func(pid); 
	printf("Time = %s",s);
	return 0;
}