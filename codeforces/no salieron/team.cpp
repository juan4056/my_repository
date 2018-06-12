#include <iostream>
using namespace std;
int main(){
    int n,a;
    int par[n];
    cin>>n;
    for(int i=0;i<n;i++){
        par[i]=0;
        cin>>a;
        par[i]+=a;
        cin>>a;
        par[i]+=a;
        cin>>a;
        par[i]+=a;
    }
    a=0;
    for(int i=0;i<n;i++){
        if(par[i]>=2){
            a+=1;
        }
    }
    cout<<a;
}