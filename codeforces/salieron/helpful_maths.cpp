#include <iostream>
using namespace std;
int main(){
    string s;
    int a=0,b=0,c=0;
    cin>>s;
    for(int i=0;i<s.length();i+=2){
        switch(s[i]){
            case '1': a++;break;
            case '2': b++;break;
            case '3': c++;break;
        }
    }
    
    if(a>0){
        cout<<1;
        a--;
    }
    else{
        if(b>0){
            cout<<2;
            b--;
        }
        else{
            if(c>0){
                cout<<3;
                c--;
            }
        }
    }
    for(int i=0;i<a;i++){
        cout<<"+"<<1;
    }
    for(int i=0;i<b;i++){
        cout<<"+"<<2;
    }
    for(int i=0;i<c;i++){
        cout<<"+"<<3;
    }
}