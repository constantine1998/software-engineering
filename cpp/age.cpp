#include<iostream>
using namespace std;
int main(){
  int ddb=0,ddt=0,mmb=0,mmt=0,yyb=0,yyt=0,dda=0,mma=0,yya=0;
  cout<<"Enter your birth date in 'dd mm yyyy' format."<<endl;
  cin>>ddb>>mmb>>yyb;
  //Verificatio Of Date
  if(mmb>12||mmb<1||ddb<0){
    cout<<"You entered an invalid date."<<endl;
    exit(1);
  }
  if(ddb==31){
    if(mmb==2||mmb==4||mmb==6||mmb==9||mmb==11){
      cout<<"You entered an invalid date."<<endl;
      exit(1);
    }
  }
  if(mmb==2){
    if(ddb==30||ddb==31){
      cout<<"You entered an invalid date."<<endl;
      exit(1);
    }
  }
  if(yyb%4==0&&yyb%100==0&&yyb%400!=0&&ddb==29){
    cout<<"You entered an invalid date."<<endl;
    exit(1);
  }
  cout<<"Enter today's date in the same format."<<endl;

  cin>>ddt>>mmt>>yyt;
  //Verification Of Date
   if(mmt>12||mmt<1||ddt<0){
    cout<<"You entered an invalid date."<<endl;
    exit(1);
  }
   if(ddt==31){
    if(mmt==2||mmt==4||mmt==6||mmt==9||mmt==11){
      cout<<"You entered an invalid date."<<endl;
      exit(1);
    }
  }
  if(mmt==2){
    if(ddt==30||ddt==31){
      cout<<"You entered an invalid date."<<endl;
      exit(1);
    }
  }
  if(yyt%4==0&&yyt%100==0&&yyt%400!=0&&ddt==29){
    cout<<"You entered an invalid date."<<endl;
    exit(1);
  }
  if(yyb>yyt){//Verification Of Year
    cout<<"You can't time travel!! Invalid dates!"<<endl;
    exit(1);
  }

  //Calculation of age
  if(ddb<=ddt){
    if(mmb<=mmt){
      dda=ddt-ddb;
      mma=mmt-mmb;
      yya=yyt-yyb;
    }
    if(mmb>mmt){
      dda=ddb-ddt;
      mma = 12 + (mmb-mmt);
      yya = yyb - yyt -1;
    }
  }
  if(ddb>ddt){
    if(mmb<mmt){
      yya = yyt-yyb;
      mma = mmt - mmb -1;
      if(mmb==4||mmb==6||mmb==9||mmb==11){
      dda = (30 - ddb) + ddt;
      }
      else if(mmb==2&&yyb%4==0&&yyb%100!=0){
	dda = (29 - ddb) + ddt;
      }
      else if(mmb==2&&yyb%100==0&&yyb%400==0){
	dda = (29 - ddb) + ddt;
      }
      else if(mmb==2&&yyb%4!=0){
	dda = (28 - ddb) + ddt;
      }
      else{
	dda = (31 - ddb) + ddt;
      }
    }

    if(mmb>mmt){
      yya = yyt - yyb - 1;
      mma = 11 + mmt - mmb;
      if(mmb==4||mmb==6||mmb==9||mmb==11){
      dda = (30 - ddb) + ddt;
      }
      else if(mmb==2&&yyb%4==0&&yyb%100!=0){
	dda = (29 - ddb) + ddt;
      }
      else if(mmb==2&&yyb%100==0&&yyb%400==0){
	dda = (29 - ddb) + ddt;
      }
      else if(mmb==2&&yyb%4!=0){
	dda = (28 - ddb) + ddt;
      }
      else{
	dda = (31 - ddb) + ddt;
      }
    }
  }
	
    
  cout<<"You are "<<yya<<" Years, "<<mma<<" Months and "<<dda<<" days old!"<<endl;
}
      
