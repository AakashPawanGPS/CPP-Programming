#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    int NormalMax(int arr[] , int n){
        int res=arr[0];
        int maxEnd=arr[0];
        for(int i=1;i<n;i++){
            maxEnd=max(maxEnd+arr[i] , arr[i]);
            res=max(maxEnd , res);
        }
        return res;
    }
    
    int circularSubarraySum(int arr[], int n){
        int max_Normal = NormalMax(arr,n);
        if(max_Normal<0){
            return max_Normal;
        }
        int arr_sum = 0;
        for(int i=0;i<n;i++){
            arr_sum+=arr[i];
            arr[i]= -arr[i];
        }
        int maxCircle = arr_sum + NormalMax(arr,n);
        
        return max(max_Normal , maxCircle);
    }
};

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    cout << ob.circularSubarraySum(arr, n) << endl;	    
	}
	return 0;
} 