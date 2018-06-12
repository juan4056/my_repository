#include <iostream>
using namespace std;
int main()
{
    int n,m,a,x,y;
    cin>>n;
    cin>>m;
    cin>>a;
    x=m/a;
    y=n/a;
    if(m%a!=0){
        x=x+1;
    }
    if(n%a!=0){
        y=y+1;
    }
    cout<<x*y;
}