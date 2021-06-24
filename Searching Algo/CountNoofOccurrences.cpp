#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int firstOccurrence(int arr[] , int n , int x){
	    int low=0;
	    int high=n-1;
	    while(low<=high){
	        int mid=(low+high)/2;
	        if(x>arr[mid]){
	            low=mid+1;    
	        }
	        else if(x<arr[mid]){
	            high=mid-1;
	        }
	        else{
	            if(mid==0 || arr[mid-1]!=arr[mid]){
	                return mid;
	            }
	            else{
	                high=mid-1;
	            }
	        }
	    }
	    return -1;
	}
	int lastOccurrence(int arr[] , int n , int x){
	    int low=0;
	    int high=n-1;
	    while(low<=high){
	        int mid=(low+high)/2;
	        if(x<arr[mid]){
	            high=mid-1;
	        }
	        else if(x>arr[mid]){
	            low=mid+1;
	        }
	        else{
	            if(mid==n-1 || arr[mid+1]!=arr[mid]){
	                return mid;
	            }
	            else{
	                low=mid+1;
	            }
	        }
	    }
	    return -1;
	}
	
	int count(int arr[], int n, int x) {
	    
	    int last = lastOccurrence(arr,n,x);
	    int first = firstOccurrence(arr,n,x);
	    
	    if(first== -1 || last== -1){
	        return 0;
	    }
	    return (last-first+1);
	    
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}