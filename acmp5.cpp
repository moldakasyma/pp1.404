#include <iostream>
using namespace std;
int main(){
    string n,m;
    cin>>n>>m;
    int b=0;
    int k=0;
    for(int i=0; i<n.size(); i++){
        if(n[i]==m[i]){
            k++;
        }
    }
    for(int i=1; i<n.size(); i++){
        if(n[i]!=m[i]){
            b++;
        }
    }
    cout<<k<<" "<<b;
    return 0;
}