#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int mean(int a[],int n){
        int s=0;
        for(int i=0;i<n;i++){s+=a[i];}
        return s/n;
}
int median(int a[],int n){
        int res=0;
        if(n&1){res=a[n/2];}
        else{res=((a[n/2]+a[n/2+1])/2);}
        return res;
}
int mx(int a,int b){
        int i,z,r;
        z=a-b;i=(z>>31)&1;
        r=a-(i*z);
        return r;
}
int max(int a[],int n){
        int max=a[0];
        for(int i=1;i<n;i++){
                if(max<a[i]){max=a[i];}
        }
        return max;
}
int min(int a[],int n){
        int min=a[0];
        for(int i=1;i<n;i++){
                if(min>a[i]){min=a[i];}
        }
        return min;
}
int mid(int a[],int n){
        int c=min(a,n);
        int d=a[0];
        for(int i=1;i<n;i++){d=mx(d,a[i]);}
        return d-c;
}
int fq(int a[],int n){
        int t[n/2];
        for(int i=0;i<n/2;i++){t[i]=a[i];}
        return median(t,n/2);
}
int tq(int a[],int n){
        int t[n/2];
        for(int i=0;i<n/2;i++){t[i]=a[n/2+i];}
        return median(t,n/2);
}
int mode(int a[],int n){
        int r=0,s=0;int v[n];
        for(int i=0;i<n;i++){v[i]=0;}
        for(int i=0;i<n;i++){
                int c=0;
                for(int j=i+1;j<n;j++){
                        if(a[i]==a[j]){
                                c++;
                                v[i]=c;
                        }
                }
        }
        r=v[0];
        for(int i=1;i<n;i++){
                if(r<v[i]){r=v[i];s=i;}
        }
        if(r==2){printf("Bimodal..\n");}
        if(r==3){printf("Trimodal...\n");}
        return a[s];
}
int main(){
        int a[]={13,15,16,16,19,20,20,21,22,22,25,25,25,25,30,33,33,35,35,35,36,40,45,52,70};
        int n=sizeof(a)/sizeof(a[0]);
        printf("Mean of array is: %d\n",mean(a,n));
        printf("Median of array is: %d\n",median(a,n));
        printf("Mode of array is: %d\n",mode(a,n));
        printf("Mid range of array is: %d\n",mid(a,n));
        printf("First quartile of array is: %d\n",fq(a,n));
        printf("Third quartile of array is: %d\n",tq(a,n));
        printf("Five summary of array is: %d,%d,%d,%d,%d\n",min(a,n),fq(a,n),median(a,n),tq(a,n),max(a,n));
        return 0;
}

Output:

Mean of array is: 29
Median of array is: 25
Trimodal...
Mode of array is: 25
Mid range of array is: 57
First quartile of array is: 20
Third quartile of array is: 35
Five summary of array is: 13,20,25,35,70
