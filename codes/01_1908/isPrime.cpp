#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    ///if (n==1 || n==0){
    if (n<=1) {
        cout<<"NOTA";
        return 0;
    }
    int cnt=2;
    while (cnt<n){
        if (n%cnt==0) {
            cout<<"it is not prime";
            return 0;
        }
        cnt=cnt+1;
    }
    cout<<"It is a prime number";
}
