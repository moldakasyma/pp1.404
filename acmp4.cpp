#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    if(s[1]=='x'){
         if(s[2]=='+'){
            cout<<s[5]-s[3];
        }
        else{
            cout<<s[5]+s[3];
        
    }
    }
    if(s[3]=='x'){
        if(s[2]=='+'){
            cout<<s[5]-s[1];
        }
        else{
            cout<<s[1]-s[5];
        
    }
    }
    if(s[5]=='x'){
        if(s[2]=='+'){
            cout<<s[1]+s[3];
        }
        else{
            cout<<s[1]-s[3];
        
    }
    }
    
    return 0;
}