#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);

double res(vector<int>& array1 , vector<int>& array2){
    int n1=array1.size();
    int n2=array2.size();
    int begin=0;
    int end=n1;
    while(begin<=end){
        int i1=(begin+end)/2;
        int i2=(n1+n2+1)/2 - i1;
        
        int min1=(i1==n1)?INT_MAX:array1[i1];
        int max1=(i1==0)?INT_MIN : array1[i1-1];
        
        int min2=(i2==n2)?INT_MAX: array2[i2];
        int max2=(i2==0)?INT_MIN : array2[i2-1];
        
        if(max1<=min2 && max2<=min1){
            if((n1+n2)%2==0){
                return ((double)(max(max1,max2)+min(min1,min2))/2);
            }
            else{
                return (double)max(max1,max2);
            }
        }
        else if(max1>min2){
            end = i1-1;
        }
        else{
            begin = i1+1;
        }
    }
}

double MedianOfArrays(vector<int>& array1, vector<int>& array2)
{
    int n1=array1.size();
    int n2=array2.size();
    double result;
    if(n1<n2){
        result=res(array1,array2);
    }
    else{
        result=res(array2,array1);
    }
    
    return result;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i)
            cin>>array1[i];
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i)
            cin>>array2[i];
        cout<<MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}