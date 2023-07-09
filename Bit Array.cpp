#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n,s,p,q;
    cin>>n>>s>>p>>q;
    long long m=pow(2,31);
    long long a0=s%m,a=s%m,a_prev=0,k,i;
    for(i=0;i<=n;i++){
        a=(a*p+q);
        a=a%m;
        if((a==a0 || a==a_prev)&& i!=0){
            k=i+1;
            break;
        }
        a_prev=a;
        if(i==n){
           k=i;
        }   
    }
    cout<<k<<endl;   
    return 0;
}
