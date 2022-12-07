#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    int a[50][10],i,j;
    // printf("enter the elements");
    for(i=0;i<9;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int c,k,b[6];
    printf("The total count for each one is: ");
    for(i=1;i<=5;i++)
    {
        c=0;
        for(j=0;j<9;j++)
        {
            for(k=0;k<4;k++){
                if(a[j][k]==i){c+=1;}
            }
        }
        b[i]=c;
        printf("%d ",c);
    }
    return 0;
}

Input:

1 2 5 -1
2 4 -1 -1
2 3 -1 -1
1 2 4 -1
1 3 -1 -1
2 3 -1 -1
1 3 -1 -1
1 2 3 5
1 2 3 -1
  
Output:

The total count for each one is: 6 7 6 2 2 
