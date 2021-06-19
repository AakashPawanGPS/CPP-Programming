#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int majorityElement(int arr[], int n)
    {
        int res=0;
        int count=1;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[res]){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                res=i;
                count=1;
            }
        }
        count=0;
        for(int i=0;i<n;i++){
            if(arr[res]==arr[i]){
                count++;
            }
        }
        if(count<=n/2){
            return -1;
        }
        return arr[res];
    }
};

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}