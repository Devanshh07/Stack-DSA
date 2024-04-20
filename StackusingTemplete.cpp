#include<iostream>
#include<bits/stdc++.h>

using namespace std;

template <typename t>
class StackTempelete{
    t *data;
    int index;
    int capacity;
    public:
    StackTempelete(t size){
        data = new t[size];
        capacity  = size;
    }
    bool isempty(){
        return index==0;
    }
    int size(){
        return index;
    }
    void push(t val){
        if(capacity==index){
            t *newdata = new t [capacity*2];
            for(int i=0;i<capacity;i++){
                newdata[i] = data[i];
            }
            capacity = capacity*2;
            data = newdata;
        }
        data[index] = val;
        index++;
    }
    t top(){
        if(isempty()){
            return INT_MIN;
        }
        return data[index-1];
    }
    t pop(){
        if(isempty){
            return INT_MIN;
        }
    index--;
    return data[index];
    }
  
};


int main(){

 StackTempelete <int> s1(4);
s1.push(10);
s1.push(20);
s1.push(30);
s1.push(40);
s1.push(50);

cout<<s1.top();



    return 0;
}