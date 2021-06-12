#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    int sum=0;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Sum: "<<sum<<endl;
    int avg = sum / size;

    int far = arr[0];
    for(int i=0;i<size;i++){
        if(abs(avg-arr[i])>abs(avg-far)){
            far=arr[i];
        }
    }
    cout<<"Farthest : "<<far<<endl;

    return 0;
}