#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main () 
{
    
    int childpid=fork();
    if(childpid<0)
{
    perror("failed to fork");
    return 1;
}
    if(childpid==0)
    printf("i am the child :%id \n",getpid());
    else 
    printf("i am parent :%id \n", getpid());
    return 0;
}

