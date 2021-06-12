<<<<<<< HEAD
#include <iostream>
using namespace std;

void reverse_array(int *b, int n)
{
    int temp;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = *(b + i);
        *(b + i) = *(b + j);
        *(b + j) = temp;
    }
}

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10,11};
    int k = 3, size = 0, j;
    while(a[size])
        size++;
        
    for(j = 0; j < (size / k); j++)
        reverse_array(a + (j * k), k);
    
    int r = size % k;
    reverse_array(a + size - r, r);
    for (j = 0; j < size; j++)
        cout << a[j] <<" ";
    return 0;
=======
#include <iostream>
using namespace std;

void reverse_array(int *b, int n)
{
    int temp;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = *(b + i);
        *(b + i) = *(b + j);
        *(b + j) = temp;
    }
}

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10,11};
    int k = 3, size = 0, j;
    while(a[size])
        size++;
        
    for(j = 0; j < (size / k); j++)
        reverse_array(a + (j * k), k);
    
    int r = size % k;
    reverse_array(a + size - r, r);
    for (j = 0; j < size; j++)
        cout << a[j] <<" ";
    return 0;
>>>>>>> 288c648f78d3c8f466a76177e620630812b5d4c1
}