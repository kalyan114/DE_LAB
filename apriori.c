#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    int sup=2,con,n,m;
    printf("enter the minimum confidence(percentage)\n");
    scanf("%d",&con);
    printf("enter the size of combinations of item values\n");
    scanf("%d",&n);
    printf("enter the maximum size from all item sets\n");
    scanf("%d",&m);
    int arr[n][m],count1[m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=0;
            count1[j]=0;
        }
    }
    for(int i=0;i<n;i++){
        printf("enter the size of %d elements\n",i+1);
        int k;
        scanf("%d",&k);
        for(int j=0;j<k;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the item sets\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",arr[i][j]);
            count1[arr[i][j]-1]+=1;
        }
        printf("\n");
    }
    printf("count of each element\n");
    for(int i=0;i<m;i++){
        printf("count of item %d is %d\n",i+1,count1[i]);
    }
    for(int i=0;i<m;i++){
        if(count1[i]<sup){
            count1[i]=0;
        }
    }
    return 0;
}

Input:

80
9
5
3
1 2 5
2
2 3
2
2 4
3
1 2 4
2 
1 3
2
2 3
2
1 3
4
1 2 3 5
3
1 2 3
    
Output:

enter the minimum confidence(percentage)
enter the size of combinations of item values
enter the maximum size from all item sets
enter the size of 1 elements
enter the size of 2 elements
enter the size of 3 elements
enter the size of 4 elements
enter the size of 5 elements
enter the size of 6 elements
enter the size of 7 elements
enter the size of 8 elements
enter the size of 9 elements
the item sets
1	2	5	0	0	
2	3	0	0	0	
2	4	0	0	0	
1	2	4	0	0	
1	3	0	0	0	
2	3	0	0	0	
1	3	0	0	0	
1	2	3	5	0	
1	2	3	0	0	
count of each element
count of item 1 is 6
count of item 2 is 7
count of item 3 is 6
count of item 4 is 2
count of item 5 is 2
