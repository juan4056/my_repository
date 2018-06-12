#include <iostream>
using namespace std;
int main()
{
    int n,k,p,j;
    cin>>n;
    cin>>k;
    int concursantes[n];
    for(int i=0;i<n;i++){
        cin>>concursantes[i];
    }
    p=0;
    if(concursantes[0]>k){
        j=1;
        p=1;
        while(concursantes[j]>k){
            p+=1;
            j+=1;
        }
    }
    cout<<p;
}