#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    sort(ar, ar + n,greater<int>());

    int x;
    cin >> x;
    int flag = 0;
    int l = 0;
    int r = n - 1;

    while(l<=r){
        int mid = (l + r) / 2;
        if(ar[mid] == x){
            flag = 1;
            break;
        }
        if(ar[mid]<x){
            l = mid + 1;
        }
        if(ar[mid]>x){
            r = mid - 1;
        }
    }
    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}