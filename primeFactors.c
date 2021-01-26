#include <stdio.h>
void prime(int no,int a)
{
  if(no<=1)
    return;
  else if(no%a==0)
  {
    printf("%d\n",a);
    prime(no/a,a);
  }
  else
    prime(no,a+1);
}
int main()
{
   int no;
   scanf("%d",&no);
prime(no,2);
   return 0;
}
