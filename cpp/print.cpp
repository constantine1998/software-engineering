
#include<iostream>
#include<string>
using namespace std;
int main(){
  string  print1;
  print1 = "ABCDEFGFEDCBA";
  int j=0;
  for(int i=6;i>=0;i--){
    cout<<print1<<endl;
    print1.at(i) = ' ';
    print1.at(i+j) = ' ';
    j = j + 2;
  }

  cout<<"\n"<<"\n"<<"\n"<<endl;
  
  string print2,p0,p1,p2;
  print2 = "C";
  p0 = print2;
  p1 = "programming";
  p2 = ':';
  
  for(int i = 0;i<3;i++){
    cout<<p0<<endl;
    if(i<2) p0 = p0 + "+";
  }
 
  cout<<p2<<endl;
  cout<<p2<<endl;
  cout<<p0 + p1<<endl;
  cout<<p2<<endl;
  cout<<p2<<endl;

   for(int i = 2;i>=0;i--){
    cout<<p0<<endl;
    p0.at(i) = ' ';
  }
}
