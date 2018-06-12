#include <iostream>
using namespace std;
int main()
{
    int n;
    string inp;
    cin>>n;
    string palabras[n];
    for(int i=0;i<n;i++)
    {
        cin>>palabras[i];
    }
    for(int i=0;i<n;i++)
    {
        if(palabras[i].length()>10){
            cout<<palabras[i][0];
            cout<<palabras[i].length()-2;
            cout<<palabras[i][palabras[i].length()-1]<<endl;}
        else{
                cout<<palabras[i]<<endl;   
            }
    }
}