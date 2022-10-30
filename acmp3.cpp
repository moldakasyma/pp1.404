#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    string a=">>-->";
    string b="<--<<";
    cin>>s;
    int count=0;
    for(int i=0; i<s.size(); i++){
        string sub=s.substr(i,s.size());
        if((sub==a) || (sub==b)){
          count++;
        
    }
    }
    cout<<count;
    return 0;
}