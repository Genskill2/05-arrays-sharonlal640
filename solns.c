/* Enter your solutions in this file */
#include <stdio.h>
int max(int a[100],int n)
{
  int m=a[0];
  for(int i=1;i<n;++i)
  {
    if(a[i]>m)
      m=a[i];
  }
  return m;
}
int min(int a[100],int n)
{
  int m=a[0];
  for(int i=1;i<n;++i)
  {
    if(a[i]<m)
      m=a[i];
  }
  return m;
}
float average(int a[100], int n)
{
  int s=0;
  for(int i=0;i<n;++i)
    s+=a[i];
  return (float)(s/n);
}
int mode(int a[100], int n)
{
  int mode=a[0];
  int count=0;
  int max=0;
  if(n==1)
    return a[0];
  for(int i=0;i<n;++i)
  {
    for(int j=i+1;j<n;++j)
    {
      if(a[i]==a[j])
        count++;
    }
    if(count>max)
    {
     max=count;
     mode=a[i];
    }
    }
return mode;
}
int factors(int n, int a[])
{
  int count=0;
  for(int i=0;i<100;++i)
  {
    if(n>0 && n!=1)
    {
      for(int j=2;j<100;j++)
      {
        if(n%j==0)
        {
          a[i]=j;
          count++;
          n=n/j;
          break;
        }

      }
    }
    else
      break;
  }
    return count;
}
