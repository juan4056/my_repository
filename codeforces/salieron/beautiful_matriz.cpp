#include <iostream>
using namespace std;
int main(){
    int n,x,y;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>n;
            if(n==1){
                x=i;y=j;
            }
        }
    }
    cout<<abs(x-2)+abs(y-2);
}