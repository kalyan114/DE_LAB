#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float sd(float a[],int n,float mn){
    float res=0;
    for(int i=0;i<n;i++){
        res+=pow((a[i]-mn),2);
    }
    return sqrt(res/n);
}
float mean(float a[],int n){
        float s=0;
        for(int i=0;i<n;i++){s+=a[i];}
        return s/n;
}
float max(float a[],int n){
    float max=a[0];
    for(int i=1;i<n;i++){
            if(max<a[i]){max=a[i];}
    }
    return max;
}
float min(float a[],int n){
    float min=a[0];
    for(int i=1;i<n;i++){
            if(min>a[i]){min=a[i];}
    }
    return min;
}
int main()
{
    // float a=12000,b=98000,c=73000;
    float mn=0,st=0,s=1.0,v,u,c=73000;
    float a[]={12000,73000,98000},b[3];
    int m=max(a,3),n=min(a,3);
    for(int i=0;i<3;i++){b[i]=((a[i]-n)/(m-n));}
    printf("Min-Max Normalization of given data:");
    for(int i=0;i<3;i++){printf("%f ",b[i]);}
    printf("\n");mn=mean(a,3);st=sd(a,3,mn);
    for(int i=0;i<3;i++){b[i]=(a[i]-mn)/st;}
    printf("Z-Score Normalization of given data:");
    for(int i=0;i<3;i++){printf("%f ",b[i]);}
    int maxi=max(a,3),j;printf("\n");
    while(maxi>0){maxi/=10;j++;}
    for(int i=0;i<3;i++){b[i]=a[i]/(pow(10,j));}
    printf("Decimal Scaling Normalization of given data:");
    for(int i=0;i<3;i++){printf("%f ",b[i]);}
    return 0;
}

Output:

Min-Max Normalization of given data:0.000000 0.709302 1.000000 
Z-Score Normalization of given data:-1.356583 0.332224 1.024359 
Decimal Scaling Normalization of given data:0.120000 0.730000 0.980000 
