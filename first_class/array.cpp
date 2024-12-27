#include<bits/stdc++.h>
using namespace std;

void fun(int ar[],int sz){

    // cout<<sizeof(ar)<<endl;
    // cout<<*ar<<endl;
    // ar[2] = 30;
    *(ar + 2) = 30;
    cout << "in fun :" << endl;
    for(int i=0;i<sz;i++){
        cout<<ar[i]<<endl;
        // cout<<*(ar+i)<<endl;
    }
    // return ar;
    
}
int main()
{
    int ar[5] = {1,2,3,4,5};
    // cout << sizeof(ar) << endl;
    // cout << ar[0]<<endl;
    // cout << &ar[0]<<endl;
    // cout << *(ar+1)<<endl;
    // cout << ar[1]<<endl;
    fun(ar,5);
    cout << "in main:" << endl;
    for(int i=0;i<5;i++){
        cout<<ar[i]<<endl;
    }

    return 0;
}