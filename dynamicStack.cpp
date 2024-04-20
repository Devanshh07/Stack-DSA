#include<bits/stdc++.h>
using namespace std;
#include "Class.cpp"
int main(){
stackarr s(4);
s.push(10);
s.push(20);
s.push(30);
s.push(40);
cout<<s.top()<<endl;
cout<<s.isempty()<<endl;
cout<<s.size();
s.push(50);
s.push(60);
s.push(70);
cout<<"after inserting element"<<endl;
cout<<s.top()<<endl;
cout<<s.isempty()<<endl;
cout<<s.size()<<endl;
s.pop();
cout<<s.top();


return 0;

}