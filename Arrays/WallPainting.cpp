#include <bits/stdc++.h>
using namespace std;

int main()
{
    int intWalls;
    int extWalls;
    int intPaint = 18;
    int extPaint = 12;
    float res = 0;
    cin >> intWalls >> extWalls;
    if (intWalls < 0 || extWalls < 0)
    {
        cout << "Invalid Input";
        return 0;
    }
    else if (intWalls == 0 && extWalls == 0)
    {
        cout << res;
        return 0;
    }
    float arrInt[intWalls];
    float arrExt[extWalls];
    float sumInt = 0;
    float sumExt = 0;
    for (int i = 0; i < intWalls; i++)
    {
        cin >> arrInt[i];
        sumInt += arrInt[i];
    }
    for (int i = 0; i < extWalls; i++)
    {
        cin >> arrExt[i];
        sumExt += arrExt[i];
    }
    res = (sumInt * intPaint) + (sumExt * extPaint);
    cout << "Total Estimated Cost : " << res << " INR";
    return 0;
}