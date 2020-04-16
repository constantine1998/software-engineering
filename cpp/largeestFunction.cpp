#include<iostream>
#include<limits.h>
using namespace std;


int largest(long long int n[],long long int i,long long int &l,long long int &f){
  long long int large = INT_MIN;
  for(int j=0;j<i;j++){
    large = max(large,n[j]);
    if(l<large){
      f=0;
    }
    l = large;
    if(l==n[j]){
      f++;
    }
  }
  return l,f;
}


int main(){
  long long int i = 0, l = INT_MIN, f = 0, n[9999], temp;
  while(cin>>temp){
    n[i]=temp;
    i++;
  }

  cout<<"The numbers you gave are ";
  for(int j=0;j<i;j++){
    cout<<n[j]<<", ";
  }
  cout<<endl;
  
  largest(n,i,l,f);

  cout<<"Largest number is "<<l<<" and its frequency is "<<f<<"."<<endl;
}
