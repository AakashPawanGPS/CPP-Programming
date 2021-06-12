// C++ program to print the given pattern
 
#include<bits/stdc++.h>
using namespace std;
 
// Function to print the given 
// string in respective pattern
void printPattern(string str, int len)
{   
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len; j++)
        {   
            // Print characters at corresponding
            // places satisfying the two conditions
            if((i == j) || (i + j == len-1))
                cout<<str[j];
            // Print blank space at rest of places
            else
                cout<<" ";
        }
         
        cout<<endl;
    }
}
 
// Driver Code
int main()
{
    string str = "geeksforgeeks";
     
    int len = str.length();
     
    printPattern(str, len);
     
    return 0;
}
 
// This code and Approach is contributed by 
// Aravind Kimonn