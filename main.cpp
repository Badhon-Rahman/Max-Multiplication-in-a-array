#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void MaxMultiplication(int maxArr[], int n){
     sort(maxArr, maxArr + n);
     int maxMul = max(maxArr[0] * maxArr[1], maxArr[n-1] * maxArr[n - 2]);
     cout << maxMul;
}

int main()
{
    int n;

    cout << "Enter the size of the array:";
    cin >> n;

    int maxArr[n];

    for(int i = 0; i < n; i++){
        cin >> maxArr[i];
    }

    MaxMultiplication(maxArr, n);
    return 0;
}
