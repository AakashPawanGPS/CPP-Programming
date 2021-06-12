#include<bits/stdc++.h>
using namespace std;

void fun1(){
    cout<<"Fun1!"<<endl;
}

void fun2(){
    cout<<"before fun1\n";
    fun1();
    cout<<"After fun1\n";
}

int main(){
    cout<<"before fun2\n";
    fun2();
    cout<<"After fun2\n";
    return 0;
}
