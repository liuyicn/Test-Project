/* 
 * File:   main.c
 * Author: liuyi
 *
 * Created on 2012年8月20日, 下午9:28
 */
/*一个信号处理的范例*/
/*github搞好了*/
/*权限问题真囧*/
/*SSH也搞好了*/
#include <unistd.h>
#include <stdlib.h> 
#include <signal.h>
#include <stdio.h>
int fuck()
{
    exit(0);
}
int print()
{
     printf("Fuck 群主！\n");
}
int main()
{
     signal(SIGINT, fuck);
     float cnmb;
     scanf("%f",&cnmb);
     for(int i=0;i<cnmb;i++)
     {
      print();
     }
}