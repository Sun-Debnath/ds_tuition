#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n;i++){
        cin >> ar[i];
    }

    int x;
    cin >> x;
    int flag = 0;
    for (int i = 0; i < n; i++){
        if(ar[i] == x){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

        return 0;
}