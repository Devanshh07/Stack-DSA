#include<bits/stdc++.h>

using namespace std;

class stackArr{
   
    int *data;
    int index = 0;
    int capacity;
     public:
    stackArr(int size){
        capacity = size;
        data = new int[size];
    };
    bool isEmpty(){
        return index == 0;
    }
    int size(){
        return index;
    }
    void push(int value){
        if(capacity==index){
            cout<<"full stack";
            return;   
        } else{
        data[index] = value;
        index++;
        }
    }
    int pop(){
        if(isEmpty()){
            return INT_MIN;
            }
        index--;
        return data[index];
        
    }
    int top(){
        if(isEmpty()){
            return INT_MIN;
        }
        return data[index-1];
    }
};
int main(){

stackArr s(4);
s.push(100);
s.push(200);
s.push(300);
s.push(400);
cout<<s.top();










    return 0;
}