#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,value;                           /*value:(rangea->b)*/
    int max=0;                               /*max cycle length*/
    int temp=1;                              /*cycle length*/
    int temp2;                         	     /*init_a value*/
    int temp3,flag;                          /*use this swap*/
	while(scanf("%d %d",&a,&b)!=EOF)
	{
	   if(a>b)                                /*swap*/
	   {
	       temp3=a;
	       a=b;
	       b=temp3;
	   	   flag=1;
	   }
	   temp2=a;
	   while(a<=b)                             /*3*n+1 function*/
	   {
	      value=a;
	      while(value!=1)
	      {
	         if((value%2)==0)
	         {
	           value=value/2;
	         }
	         else
	         {
	           value=value*3+1;
	         }
	         temp++;
	      
	      }
	      if(temp>max)                            
	      {
	         max=temp;
	      }
	      temp=1;
	      a++;
	      
	   }
	   if(flag==1)
	   {
	      printf("%d %d %d\n",b,temp2,max);
	   }
	   else
	   {
	      printf("%d %d %d\n",temp2,b,max);
	   }
	   max=0;
	   flag=0;
	}

  return 0;
}
