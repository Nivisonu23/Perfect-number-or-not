#include<stdio.h>
int main()
{
  int n,s=0,i;
  scanf("%d",&n);
  for(i=1;i<n;i++)
  {
    if(n%i==0)
      s+=i;
  }
  if(s==n)
    printf("Perfect Number");
  else
    printf("Not a Perfect Number");
  return 0;
}
