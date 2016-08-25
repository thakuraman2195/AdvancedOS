#include <stdio.h>  
 int wt[10],bt[10],at[10],tat[10],n;  
 double awt,atat;  
 int main(){  
       printf("FCFS CPU Scheduling Algorithm\n");  
       printf("Enter Number of processes : ");  
        scanf("%d",&n);  
        int i;  
        for(i=0;i<n;i++)  
        {  
          printf("Enter Burst Time of process %d : ",i+1);  
          scanf("%d",&bt[i]);         
          printf("Enter Arrival Time of process %d : ",i+1);  
          scanf("%d",&at[i]);         
        }  
         wt[0]=0;  
    atat=tat[0]=bt[0];  
    int btt=bt[0];//to store total burst time sum  

    for(i=1;i<n;i++){  
      wt[i]=btt-at[i];  
      btt+=bt[i];        
      awt+=wt[i];     
      tat[i]= wt[i]+bt[i];   
      atat+=tat[i];    
    }  
    atat/=n;  
    awt/=n;      

    printf("SR.\tA.T.\tB.T.\tW.T.\tT.A.T.\n");  
    for(i=0;i<n;i++)  
    {  
    printf("%3d\t%3d\t%3d\t%3d\t%4d\n",i+1,at[i],bt[i],wt[i],tat[i]);          
    }    
    printf("Average Waiting Time: %f\nAverage Turn Around Time : %lf\n",awt,atat);   
    
    return 0;
 }  