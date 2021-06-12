
#include <iostream>
using namespace std;

void reverse_array(char *b, int n)
{
    char temp;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = *(b + i);
        *(b + i) = *(b + j);
        *(b + j) = temp;
    }
}

int main()
{
    int n, size = 0;
    string s;
    cin >> s;
    while (s[size])
        size++;
    n = size / 2;
    reverse_array(&s[0], size);
    reverse_array(&s[0], size - n);
    reverse_array(&s[size - n], n);
    for(int i = 0; i < size; i++){
        for(int j = 1;j < size - i; j++){
            cout<<" ";
        }
        for (int j = 0; j <= i; j++){
            cout<<s[j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
