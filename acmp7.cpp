#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    int k=0;
    string str;
    cin>>n;
    int max=-12345;
    int min=12345;
    int min2=12345;
    while(n>0){
        k=n%10;
        if(k<min){
            min=k;
        }
        if(k>min && min2>k){
            min2=k;
        }
        n/=10;
    }
    str.erase(min,min2);
    cout<<str;
    return 0;
    }
