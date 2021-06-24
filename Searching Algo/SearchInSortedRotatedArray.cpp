#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> ,int );

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i =0;i<n;i++) 
            cin >> vec[i];
        
        int target;
        cin >> target;
        
        cout << Search(vec,target) << "\n";
         
    }
}

int Search(vector<int> vec, int K) {
    int low=0;
    int high=vec.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(vec[mid]==K){
            return mid;
        }
        if(vec[low]<vec[mid]){
            if(K>=vec[low] && K<vec[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(K>vec[mid] && K<=vec[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}