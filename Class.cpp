
#include<bits/stdc++.h>

using namespace std;

class stackarr{
    int *data;
    int index=0;
   
    public:
    int capacity;
    stackarr(int size){
        data = new int[size];
        capacity = size;
    }
    bool isempty(){
        return index==0;
    }
    int size(){
        return index;
    }
    void push(int val){
        if(capacity == index){
            int *newdata = new int[capacity*2];
            for(int i=0;i<capacity;i++){
                newdata[i] = data[i];
            }
            capacity *= 2;
            data = newdata;
        }
        data[index] = val;
        index++;
    }
    int top(){
        if(isempty()){
            cout<<"stack empty"<<endl;
            return INT_MIN;
        }
        return data[index-1];
    }
    int pop(){
        if(isempty()){
            return INT_MIN;
    }
    index--;
    return data[index-1];
    };

};
