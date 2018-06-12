#include <iostream>
using namespace std;
int main(){
    string s;
    int n,x,a=0,b=0,c=0,d=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        switch(x){
            case 1: a++;break;
            case 2: b++;break;
            case 3: c++;break;
            case 4: d++;break;
        }
    }
    if(c>a){
        a=0;
    }
    else{
        a=a-c;
    }
    b=b+(a/2);
    a=a%2;
    d=d+(b/2);
    b=b%2;
    if(b==1&&a==1){
        a=0;
    }
    cout<<a+b+c+d;
}