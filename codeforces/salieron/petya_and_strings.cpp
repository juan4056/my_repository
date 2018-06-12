#include <iostream>
using namespace std;
char min(char may){
    if(may>='a'&&may<='z'){
        return may;
    }
    else{
        if(may>='A'&&may<='Z'){
            return char(may+32);
        }
    }
}
int main(){
    string str1,str2;
    cin>>str1;
    cin>>str2;
    for(int i=0;i<str1.length();i++){
        if(min(str1[i])>min(str2[i])){
            cout<<1;
            break;
        }
        else{
            if(min(str1[i])<min(str2[i])){
                cout<<-1;
                break;
            }
        }
        if(i==str1.length()-1){
            cout<<0;
        }
    }
}