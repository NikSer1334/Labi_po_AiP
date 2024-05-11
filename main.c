
#include "lr.h"

int main(void) 
{
  int n;
  printf("Enter the lab number (TO SELECT AN ADDITIONAL TASK, ENTER THE LAB NUMBER INCREASED BY 10): ");
  scanf("%d",&n);
  getchar();
  if(n==1)
    return lr1();
  else if(n==2)
    return lr2();
  else if(n==3)
    return lr3();
  else if(n==4)
    return lr4();
  else if(n==11)
    return lr1d();  
  else if(n==12)
    return lr2d();
  else if(n==13)
    return lr3d();
  else if(n==5)
    return lr5();
  else if(n==14)
    return lr4d();
  else if(n==15)
    return lr5d();
  else if(n==6)
    return lr6();
  else if(n==16)
    return lr6d();
  else if(n==7)
    return lr7();
  else if(n==17)
   printf("Welcome to the additional task for laboratory work number 7. You are in the EXE file.");
  else
    printf("there is no such lab");
}



