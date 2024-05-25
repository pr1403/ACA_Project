#include<iostream>
#include<cmath>
using namespace std;
int NthRoot(int n, int m) {
    cin>>n>>m;
    int x=round(pow(m,(1/double(n))));
    if(pow(x,n)==m){
      return x;
    }
    else {
      return -1;
    };
}