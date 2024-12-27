#include<bits/stdc++.h>
using namespace std;

void fun(int *p)
{
    // x = 20;
    *p = 20;
    printf("%d\n", *p);
    // printf("%p\n", p);
    // printf("%p\n", &p);
    // cout<<x<<endl;
}
int main()
{
    int x = 10;
    fun(&x);
    // fun(x);
    printf("%d", x);
    return 0;
}