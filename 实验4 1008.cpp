#include<iostream>
#include<cstdio>
using namespace std;
int t;
double a,b,c;
int main(){
  while(cin>>a>>b>>c){
    double s;
    for(t=0,s=a;s<c;t++){
      s=s+s*b/100.0;
    }
    cout<<t<<endl;
  }
  return 0;
}
