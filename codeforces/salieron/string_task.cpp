#include <iostream>
using namespace std;
int main(){
    string text;
    cin>>text;
    for(int i=0;i<text.length();i++)
    {
        if(text[i]>='b'&&text[i]<='z'&&text[i]!='e'&&text[i]!='i'&&text[i]!='o'&&text[i]!='u'&&text[i]!='y'){
            cout<<"."<<text[i];
        }
        else if(text[i]>='B'&&text[i]<='Z'&&text[i]!='E'&&text[i]!='I'&&text[i]!='O'&&text[i]!='U'&&text[i]!='Y'){
            cout<<"."<<char(text[i]+32);
        }
    }
}