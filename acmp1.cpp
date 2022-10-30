#include <iostream>
#include <string>
using namespace std;
int main(){
    string s="ABCEHKMOPTXY";
    cin>>s;
    bool flag=true;
    if(s.size()!=6)
    flag=false;
    if((s[1]<0) || (s[1]>9))
    flag=false;
    if((s[2]<0) || (s[2]>9))
    flag=false;
    if((s[3]<0) || (s[3]>9))
    flag=false;
    if((s[0])!=s)
    flag=false;
    
    if((s[4])!=s)
    flag=false;
    
    if((s[5])!=s)
    flag=false;
    for(int i=0; i<)
    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}

    