#include <iostream>
using namespace std;
int main(){
    int n,x;
    string op;
    cin>>n;
    x=0;
    for(int i;i<n;i++){
        cin>>op;
        if(op[0]=='+'){
            x++;
        }
        else{
            if(op[0]=='-'){
                x--;
            }
            else{
                if(op[1]=='+'){
                    x++;
                }
                else if(op[1]=='-'){
                    x--;
                }
            }
        }
    }
    cout<<x;
}