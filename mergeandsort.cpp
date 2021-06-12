#include <bits/stdc++.h>
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

int main()
{

    int n1, n2, i, j, k;
    cout << "Enter the size of array 1 : ";
    cin >> n1;
    printf("\n");
    cout << "Enter the size of array 2 : ";
    cin >> n2;
    printf("\n");
    int a[n1], b[n2], c[n1 + n2];

    cout<<"Enter elements of array 1 : "<<endl;
    for (i = 0; i < n1; i++)
        cin >> a[i];

    cout<<"Enter elements of array 2 : "<<endl;
    for (i = 0; i < n2; i++)
        cin >> b[i];

    if(a[0] > a[n1-1])
        reverse_array(a, n1);

    if (b[0] > b[n2 - 1])
        reverse_array(b, n2);

    i = 0;
    j = 0;
    k = 0;
    while (j < n1 && k < n2)
    {
        if (a[j] < b[k])
        {
            if (c[i - 1] != a[j])
                c[i++] = a[j];
            j++;
        }

        else if (a[j] > b[k])
        {
            if (c[i - 1] != b[k])
                c[i++] = b[k];
            k++;
        }
        else if (a[j] == b[k])
        {
            if (c[i - 1] != a[j])
                c[i++] = a[j];
            j++;
            k++;
        }
        cout << c[i - 1] << " ";
    }
    cout << "\n";

    cout << j << " " << k << "\n";

    while (j < n1 && c[i - 1] != a[j])
        c[i++] = a[j++];

    while (k < n2 && c[i - 1] != b[k])
        c[i++] = b[k++];

    cout << j << " " << k << "\n";

    for (j = 0; j < i; j++)
        cout << c[j] << " ";

    return 0;
}
