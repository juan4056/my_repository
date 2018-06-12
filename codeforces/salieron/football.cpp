#include <iostream>
using namespace std;
int main(){
    string players;
    int n=1;
    cin>>players;
    for(int i=1;i<players.length();i++){
        if(players[i]==players[i-1]){
            n++;
        }
        else{
            n=1;
        }
        if(n==7){
            break;
        }
    }
    if(n==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}