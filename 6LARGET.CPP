#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x,y,z;
cout<<"Enter any three nmbers for comperision"<<endl;
cin>>x>>y>>z;
if(x-y>0 && x-z>0)
cout<<"The largest number out of three is"<<endl<<x;
else
{
if(y-x>0 && y-z>0)
cout<<"The largest number out of three is"<<endl<<y;
else
cout<<"The largest number out of three is"<<endl<<z;
}
getch();
}