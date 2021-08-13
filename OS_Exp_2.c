#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
int main()
{
	pid_t child_Pid;
	child_Pid=fork();
	if(child_Pid<0)
	{
		printf("fork gfailed");
		return 1;
	}
	
	else if(child_Pid==0)
	{
		printf("child process successfully created!\n");
		printf("child_Pid=%d,parent_Pid=%d\n",getpid(),getppid());	
	}
	
	else
	{
		wait(NULL);
		printf("parent process successfully created\n");
		printf("child_Pid=%d,parent_Pid=%d",getpid(),getppid());
	}
	
	return 0;
}			

	

