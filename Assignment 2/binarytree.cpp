#include<iostream>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
      long long sum=0;
        long long n;
        cin>>n;
        while(n>=1){
          sum+=n;
          n=n/2;
        }
        cout<<sum<<endl;
    }
    return 0;
}