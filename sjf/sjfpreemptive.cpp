#include<bits/stdc++.h>
using namespace std;
int isdone(int *A, int n){
    for(int i=0; i<n; i++)
        if(A[i]!=0)
            return 0;
    return 1;
}
int isalone(int *A, int n){
    int c=0;
    for(int i=0; i<n; i++)
        if(A[i]!=0)
            c++;
    return c==1;
}
int main(){

    int bt[20],p[20],wt[20],tat[20],i,j,n,total=0,pos,temp, at[20];
    double avg_wt,avg_tat;
    printf("Enter number of process:");
    scanf("%d",&n);
 
   
    for(i=0;i<n;i++)
    {
        printf("p%d : ",i+1);
        cout<<"Burst time : ";
        scanf("%d",&bt[i]);

        cout<<"Arrival time : ";
        scanf("%d",&at[i]);
        p[i]=i+1;           //contains process number
    }
 
    //sorting burst time in ascending order using selection sort
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(bt[j]<bt[pos])
                pos=j;
        }
 
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
 
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;

        temp=at[i];
        at[i]=at[pos];
        at[pos]=temp;
    }

    while(1){
        if(isdone(bt, n)){
            break;
        }
        if(isalone(bt, n)){
            
        }
    }

    return 0;
}