#include<bits/stdc++.h>
using namespace std;

int* fun()
{
    // int ar[5];
    int n;
    cin >> n;
    int *ar = new int[n];
    for(int i = 0; i < n; i++){
        cin>>ar[i];
    }
    delete[] ar;

    cout << "from fun:" << endl;

    for(int i = 0; i < n; i++){
        cout << ar[i] << " ";
    }
    cout<< endl;

    // for(int i = 0; i < 5; i++){
    //     // cout << ar[i] << " ";
    //     cout << *(ar+i) << " ";
    // }
    return ar;
    // int x = 10;
    // return x;
}
int main()
{
    // int ar[5] = {1, 2, 3, 4, 5};
    int *p = fun();
    cout<<"from main: "<<endl;
    for(int i = 0; i < 5; i++){
        cout<<p[i] << " ";
    }
    return 0;
}