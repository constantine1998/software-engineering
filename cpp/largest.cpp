#include<iostream>
#include<limits.h>
using namespace std;
int main(){
  long long int large= INT_MIN,n=0,i=0,largest= INT_MIN;
  while(cin>>n){
    large = max(large,n);
    if(largest<large){
      i=0;
    }
    largest = large;
     if(largest==n){
      i++;
    }

  }
  cout<<"Largest number is "<<largest<<" and its frequency is "<<i<<"."<<endl;
}
