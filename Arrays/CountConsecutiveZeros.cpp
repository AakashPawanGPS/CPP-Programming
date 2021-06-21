#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:

    int firstZero(int arr[] , int l , int r){
        if(r>=l){
            int mid=l+(r-l)/2;
            if((mid == 0 || arr[mid-1]==1) && arr[mid]==0){
                return mid;
            }
            if(arr[mid]==1){
                return firstZero(arr,mid+1,r);
            }
            else{
                return firstZero(arr,l,mid-1);
            }
        }
        return -1;
    }

    int countZeroes(int arr[], int n) {
        int nonzeros = firstZero(arr , 0 , n-1);
        if(nonzeros == -1){
            return 0;
        }
        return (n-nonzeros);
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
