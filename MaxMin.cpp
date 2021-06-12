#include <iostream>
#include <vector>
using namespace std;

int get_max ( vector<int> a,int size){
    int temp = a[0];
    for( int i=1; i<size; ++i){
        if ( a[i] > temp){
            temp = a[i];
        }
    }

    return temp;
}

int get_min( vector<int> b, int size){
    int temp= b[0];
    for(int i=0; i<size; ++i){
        if ( b[i] < temp){
            temp = b[i];
        }
    }
    return temp;
}

int get_sum( vector<int> array, int size){
    int sum=0;
    for( int i=0; i<size; ++i){
        sum+=array[i];
    }

    return sum;
}

int main(){
    vector<int> arr;
    while(1){
        int x;
        cin >> x;
        if( x == -1){
            break;
        }
        else{
            arr.push_back(x);
        }
    }
    int size = arr.size();
    int max = get_max( arr, size);
    int min = get_min( arr, size);
    int total = get_sum( arr, size);

    float avg;
    avg = (float)total/(float)size;

    cout << "Min=" << min << endl;
    cout << "Max=" << max << endl;
    cout << "Sum=" << total << endl;
    printf("Avg=%f",avg);
}