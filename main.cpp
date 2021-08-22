#include <iostream>
using namespace std;



int main()
{
    int a=3,b=5;
    int c=(a+b-abs(a-b))/2;
    int d=6,e=9;
    int f=(d<e) ? d:e;
    cout<<c<<" "<<f;
}