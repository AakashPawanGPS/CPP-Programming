#include<iostream>
using namespace std;

int geekonacci(int A , int B , int C , int N){
    int arr[N];
    arr[0]=A;
    arr[1]=B;
    arr[2]=C;
    for(int i=3;i<N;i++){
        arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
    }
    return arr[N-1];
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int A,B,C,N;
	    cin>>A>>B>>C>>N;
	    int res=geekonacci(A,B,C,N);
	    cout<<res<<endl;
	}
	return 0;
}