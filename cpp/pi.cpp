#include<iostream>
#include<iomanip>
#include<cmath>
#include<math.h>
using namespace std;
int main(){
  int n;
  cout<<"Input the 'N'."<<endl;
  cin>>n;
  long double pi=0;
  for(int i=0;i<=n;i++){
    pi = pi + ((pow(-1,i))/(2*i + 1));
  }
  pi = 4*pi;
  cout<<setprecision(4)<<pi<<endl;
  cout<<"Theoritcal value = "<<M_PI<<endl;
}
