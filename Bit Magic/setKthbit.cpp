#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    if((n&(1<<(k-1)))!=0){
        printf("Yes");
    }
    else{
        printf("No");
    }

    cout<<endl;
    if((n>>(k-1)&1)==1){
        printf("Yes");
    }
    else{
        printf("No");
    }

        return 0;
}