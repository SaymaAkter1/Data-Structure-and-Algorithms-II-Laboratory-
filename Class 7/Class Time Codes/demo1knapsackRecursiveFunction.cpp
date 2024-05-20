#include<iostream>
using namespace std;

int P[] = {-1,3,4,5,6};
int W[] = {-1,2,3,4,5};

int knapsack01(int C, int i){
    if (C==0||i==0){
        return 0;
    }
    int value1=0,value2=0;
    value1=0+knapsack01(C,i-1);
    if(C>=W[i]){
        value2=P[i]+knapsack01(C-W[i],i-1);
    }else{
        value2=0;
    }
    if(value1>=value2){
        return value1;
    }else{
        return value2;
    }
}


int main(){
    int profit=knapsack01(5,4);
    cout<<"Total profit "<<profit<<endl;
    return 0;
}
