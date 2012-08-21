
#include <unistd.h>
#include<stdlib.h> 
#include <signal.h>
#include <stdio.h>
int test()
{
    exit(0);
}

int main()
{
     signal(SIGINT, test);
  while(1)
       printf("Fuck you!\n");
       return 0;
}


