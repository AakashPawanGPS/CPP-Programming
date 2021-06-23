#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    long long int floorSqrt(long long int x) 
    { 
        if(x==0 || x==1){
            return x;
        }
        long long int low = 1 , high = x , ans;
        while(low<=high){
            long long int mid = (low+high)/2;
            if(mid*mid == x){
                return mid;
            }
            else if(mid>x/mid){
                high=mid-1;
            }
            else{
                low=mid+1;
                ans=mid;
            }
        }
        return ans;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}