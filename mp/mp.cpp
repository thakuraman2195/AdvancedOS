#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> &CpuBurst){
    for(int i=0;i<CpuBurst.size();i++){
        if(CpuBurst[i]!=0){
            return false;
        }
    }
    return true;
}
bool isalone(vector<int> &CpuBurst){
    int c=0;
    for(int i=0;i<CpuBurst.size();i++){
        if(CpuBurst[i]!=0){
            c++;
        }
    }
    return c==1;
}
void compute(vector<int> &waiting, int ct, vector<int> &CpuBurst, int index){
    for(int i=0; i<waiting.size() ; i++){
        if(i!=index){
            if(CpuBurst[i]!=0){
                if(CpuBurst[index]<ct){
                    waiting[i]+=CpuBurst[index];
                } else{
                    waiting[i]+=ct;
                }
            }
        }
    }
}
void Calculatewait(vector<int> &waiting){
    int totalwait=0;
    double averagewait=0.0;
    for(int i=0;i<waiting.size();i++){
        totalwait+=waiting[i];
        cout<<"Process P["<<i+1<<"]\thas wait time =\t"<<waiting[i]<<endl;
    }
    cout<<"Total wait : "<<totalwait<<endl;
    averagewait=((double) totalwait)/waiting.size();
    cout<<"Average wait : "<<averagewait<<endl;
}
int main(){
    int N;
    cout<<"Number of process : ";
    cin>>N;
    vector<int> CpuBurst;
    vector<int> IOBurst;
    vector<int> waiting(N,0),tat(N,0);
    for(int i=0;i<N;i++){
        int cpu,io;
        cout<<"Enter Cpu Time for P["<<i+1<<"] : ";
        cin>>cpu;
        cout<<"Enter I/O time for P["<<i+1<<"] : ";
        cin>>io;
        CpuBurst.push_back(cpu);
        IOBurst.push_back(io);
    }
    int ct;
    cout<<"Enter Context time : ";
    cin>>ct;
    while(1){
        if(check(CpuBurst)){
            break;
        }
        for(int i=0;i<N;i++){
            if(!isalone(CpuBurst))
                if(CpuBurst[i]!=0)
                    compute(waiting, ct, CpuBurst, i);

            if(CpuBurst[i]>ct){
                CpuBurst[i] = CpuBurst[i] - ct;
                cout<<"P["<<i+1<<"]"<<"\t=\t"<<ct<<"\tCPU\t\n";
            }else{
                if(CpuBurst[i]!=0){
                    cout<<"P["<<i+1<<"]"<<"\t=\t"<<CpuBurst[i]<<"\tCPU\t\n";
                    CpuBurst[i]=0;
                    cout<<"P["<<i+1<<"]"<<"\tis going to IOBurst for "<<IOBurst[i]<<endl;
                }
            }
        }
    }
    double tatime=0.0;
    for(int i=0;i<n;i++){
        tat[i]=waiting[i]+IOBurst[i]+CpuBurst[i];
        tattime+=(double)tat[i];
    }
    cout<<"Average Turn Around time : "<<(tat/n)<<endl;
    Calculatewait(waiting);
    waiting.clear();
    CpuBurst.clear();
    IOBurst.clear();
    return 0;
}