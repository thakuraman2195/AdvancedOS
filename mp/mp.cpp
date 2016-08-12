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
int main(){
    int N;
    cout<<"Number of process : ";
    cin>>N;
    vector<int> CpuBurst;
    vector<int> IOBurst;
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
    CpuBurst.clear();
    IOBurst.clear();
    return 0;
}