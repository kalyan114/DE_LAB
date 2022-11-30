#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n=27,d=3,i=0,j=0,c=1,s=0,b[n];
    int a[27]={13,15,16,16,19,20,20,21,22,22,25,25,25,25,30,33,33,35,35,35,35,36,40,45,46,52,70};
    while(c<=d){
        for(i=j;i<j+(n/d);i++){s+=a[i];}
        s/=(n/d);
        for(i=j;i<j+(n/d);i++){b[i]=s;}
        j=i;s=0;c++;
    }
    for(int i=0;i<n;i++){printf("%d ",b[i]);}
    return 0;
}


Output:

18 18 18 18 18 18 18 18 18 28 28 28 28 28 28 28 28 28 43 43 43 43 43 43 43 43 43 
