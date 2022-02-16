#include <iostream>

using namespace std;

int hourglassSum(int arr[6][6]) {
    int n = 6;
    int res = 0;
    for(int i=0;i<n-2;i++){
        for(int j=0;j<n-2;j++){
            int temp = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            res = max(res,temp);
        }
    }
    return res;
}

int main()
{
    int a[6][6];
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    cout<<hourglassSum(a);

    return 0;
}