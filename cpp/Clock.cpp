#include<simplecpp>
main_program{
double t,y,r;
 cout<<"Input the present time, First enter hours, then minutes and then seconds."<<endl;
cin>>r>>y>>t;
r=270+(r*5*6)+(0.5*y)+(0.025*t/3);
y=270+(y*6)+(0.1*t);
t=270+(t*6);
cout<<r<<" "<<y<<" "<<t<<endl;
initCanvas("SB",1366,768);
Line s(500,300,125*cosine(t)+500,125*sine(t)+300),m(500,300,100*cosine(y)+500,100*sine(y)+300),h(500,300,60*cosine(r)+500,60*sine(r)+300);
{
beginFrame();
Text t1(135*cosine(300)+500,135*sine(300)+300,"1");
t1.imprint();
Text t2(135*cosine(330)+500,135*sine(330)+300,"2");
t2.imprint();
Text t3(135*cosine(360)+500,135*sine(360)+300,"3");
t3.imprint();
Text t4(135*cosine(390)+500,135*sine(390)+300,"4");
t4.imprint();
Text t5(135*cosine(420)+500,135*sine(420)+300,"5");
t5.imprint();
Text t6(135*cosine(450)+500,135*sine(450)+300,"6");
t6.imprint();
Text t7(135*cosine(480)+500,135*sine(480)+300,"7");
t7.imprint();
Text t8(135*cosine(510)+500,135*sine(510)+300,"8");
t8.imprint();
Text t9(135*cosine(540)+500,135*sine(540)+300,"9");
t9.imprint();
Text t10(135*cosine(570)+500,135*sine(570)+300,"10");
t10.imprint();
Text t11(135*cosine(600)+500,135*sine(600)+300,"11");
t11.imprint();
Text t12(135*cosine(630)+500,135*sine(630)+300,"12");
t12.imprint();
endFrame();
}
while(true){
wait(1);
t=t+6;
y=y+0.1;
r=r+(0.025/3);
s.reset(500,300,125*cosine(t)+500,125*sine(t)+300);
m.reset(500,300,100*cosine(y)+500,100*sine(y)+300);
h.reset(500,300,60*cosine(r)+500,60*sine(r)+300);
}
}
