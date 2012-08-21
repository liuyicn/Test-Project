/* 
 * File:   main.c
 * Author: liuyi
 *
 * Created on 2012年8月20日, 下午9:28
 */
/*一个信号处理的范例*/
/*Fuck 群主！*/
#include <unistd.h>
#include<stdlib.h> 
#include <signal.h>
#include <stdio.h>
int test()
{
    exit(0);
}
int print()
{
     printf("Hello World!\n");
     printf("Fuck 群主！\n");
}
int main()
{
     signal(SIGINT, test);
     int num;
     int num2;
     num = 1;
     num2 = num*1;
  while(num2)
      print();
       return 0;
}


