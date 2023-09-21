//BASIC DIGITAL CALCULATOR


#include<iostream>
#include<math.h>
using namespace std;
int main(){
cout<<"THE OPERATIONS IN THE CALCULATOR ARE::"<<endl<<endl<<endl;
cout<<"the arithmetic operations are:"<<endl<<endl;
cout<<"1.additon"<<endl<<"2.subtraction"<<endl<<"3.multilication"<<endl<<"4.division"<<endl<<"5.power"<<endl<<endl;
cout<<"the trignometric operations are"<<endl<<"6.sine"<<endl<<"8.cosine"<<endl<<"9.tane"<<endl;
cout<<"enter the operation you want to perform"<<endl;
int op;
cin>>op;

switch(op){
case 1:
double val1;
cout<<"enter the value of operatant1"<<endl;
cin>>val1;
double val2;
cout<<"enter the value of operatant2"<<endl;
cin>>val2;
cout<<val1+val2<<endl;
break;
case 2:
double val3;
cout<<"enter the value of operatant1"<<endl;
cin>>val3;
double val4;
cout<<"enter the value of operatant2"<<endl;
cin>>val4;
cout<<val3-val4<<endl;
break;
case 3:
double val5;
cout<<"enter the value of operatant1"<<endl;
cin>>val5;
double val6;
cout<<"enter the value of operatant2"<<endl;
cin>>val6;
cout<<val5*val6<<endl;
break;
case 4:
double val7;
cout<<"enter the value of operatant1"<<endl;
cin>>val7;
double val8;
cout<<"enter the value of operatant2"<<endl;
cin>>val8;
cout<<val7/val8<<endl;
break;
case 5:
double val9;
cout<<"enter the value of operatant1"<<endl;
cin>>val9;
double val10;
cout<<"enter the value of operatant2"<<endl;
cin>>val10;
cout<<pow(val9,val10)<<endl;
break;
case 6:
double val11;
cout<<"enter the value of angle"<<endl;
cin>>val11;
cout<<sin(val11)<<endl;
break;
case 8:
double val12;
cout<<"enter the value of angle"<<endl;
cin>>val12;
cout<<cos(val12)<<endl;
break;
case 9:
double val13;
cout<<"enter the value of angle"<<endl;
cin>>val13;
cout<<tan(val13)<<endl;
break;





}


return 0;





}