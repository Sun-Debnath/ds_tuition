// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int x;
    x = 10;
    x = 2;
    // cin >> x;
    int *ptr;

    ptr = &x;
    *ptr = 20;  // dereference 

    // cout << &x << endl;
    // cout << ptr << endl;

    printf("%d \n", x);
    printf("%p \n", &x);
    printf("%p\n", ptr);
    // printf("%p\n", &ptr);
    printf("%d\n", *ptr); 


    // cout << "hello";
    return 0;
}