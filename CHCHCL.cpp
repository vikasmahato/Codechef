#include<iostream>
using namespace std;
int main(){
    long long int t,n,m;
    cin>>t;
    while (t--){
        cin>>n>>m;
        ((n*m)%2==0)?cout<<"Yes\n":cout<<"No\n";
    }
    return 0;
}