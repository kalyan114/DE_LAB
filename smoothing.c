#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
        int n=27,i=0,j=0,s=0,c=1,d=3,b[27];
        for(int t=0;t<27;t++){b[t]=0;}
        int a[27]={13,15,16,16,19,20,20,21,22,22,25,25,25,25,30,33,33,35,35,35,35,36,40,45,46,52,70};
        while(c<=d){
                for(i=j;i<j+(n/d);i++){s+=a[i];}
                s/=(n/d);
                for(i=j;i<j+(n/d);i++){b[i]=s;printf("%d ",b[i]);}
                j=i;s=0;c++;
        }
        printf("\n");
        return 0;
}


Output:

18 18 18 18 18 18 18 18 18 28 28 28 28 28 28 28 28 28 43 43 43 43 43 43 43 43 43 
