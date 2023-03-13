#include<iostream>
#include<cmath>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cout<<"Enter 1 for fabico series program"<<endl;
	cout<<"Enter 2 for factorial program"<<endl;
	cout<<"Enter 3 for strik program"<<endl;
	cout<<"Enter 4 for average program"<<endl;
	cout<<"Enter 5 for returant bill program"<<endl;
	cout<<"Enter 6 for ocean level program"<<endl;
	cout<<"Enter 7 for triangle shape program"<<endl;
	cout<<"Enter 8 for dimond shape program"<<endl;
	cout<<"Enter 9 for land calculation program"<<endl;
	cout<<"Enter 10 for angle calcular program"<<endl;
	cout<<"Enter 11 for average rainfall program"<<endl;
	cout<<"Enter 12 for box office program"<<endl;
	cout<<"Enter 13 for celsius faherenheit program"<<endl;
	cout<<"Enter 14 for manage scale tex program"<<endl;
	cout<<"Enter 15 for world game program"<<endl;
	cout<<"Enter your choice number"<<endl;
	cin>>n;
 if(n==1)
{
	int a,b,count,next;
	a=1;
	b=1;
	cout<<a<<"\t"<<b;
	count=2;
	while(count<=8)
	{
		next=a+b;
		cout<<"\t"<<next;
		count++;
		a=b;
		b=next;
	
	}

}
else if(n==2)
{
	int n,i,f;
	f=1;
	cout<<"Enter any number\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
		cout<<"factorial of "<<n<<"is\n"<<f;
	
}
else if(n==3)
{
	cout<<endl<<endl;
	cout<<" *   "<<endl;
	cout<<"***  "<<endl;
	cout<<"**** "<<endl;
	cout<<"*****"<<endl;
	cout<<"***  "<<endl;
	cout<<" *   "<<endl;
}
else if(n==4)
{
	float n1,n2,n3,n4,n5,sum,average;
	cout<<"Enter five number:";
	cin>>n1>>n2>>n3>>n4>>n5;
	sum=n1+n2+n3+n4+n5;
	average=sum/5;
	cout<<"sum="<<sum<<endl;
	cout<<"average of five numbers="<<average<<endl;
	return 0;
}
else if(n==5)
{
	float meal,tax,tip,total;
	meal=44.50;
	tax=0.0675*meal;
	tip=(tax+meal)*0.15;
	total=meal+tax+tip;
	cout<<"The meal charges are:$"<<meal<<endl;
	cout<<"The tax amount are:$"<<tax<<endl;
	cout<<"The tip amount are:$"<<tip<<endl;
	cout<<"The total bill are:$"<<total<<endl;
	system("PAUSE");
	return 0;
}
else if(n==6)
{
	float milimiters;
	milimiters=1.5;
	cout<<"Ocean level of five years(1.5)*5="<<1.5*5<<endl;
	cout<<"Ocean level of seven years(1.5)*7="<<1.5*7<<endl;
	cout<<"Ocean level of ten years(1.5)*10="<<1.5*10<<endl;
	return 0;
}
else if(n==7)
{
	cout<<endl<<endl;
	cout<<"   *   "<<endl;
	cout<<"  ***  "<<endl;
	cout<<" ***** "<<endl;
	cout<<"*******"<<endl;
	return 0;
}
else if(n==8)
{
	cout<<endl<<endl;
	cout<<"    *    "<<endl;
	cout<<"   ***   "<<endl;
	cout<<"  *****  "<<endl;
	cout<<" ******* "<<endl;
	cout<<"*********"<<endl;
	cout<<" ******* "<<endl;
	cout<<"  *****  "<<endl;
	cout<<"   ***   "<<endl;
	cout<<"    *    "<<endl;
	return 0;
}
else if(n==9)
{
	int one_acre=43560,number_of_acre,total_acre;
	number_of_acre=389767;
	total_acre=number_of_acre/one_acre;
	cout<<"one acre of land is equilent to 43560 sqft."<<endl;
	cout<<"There are approximately="<<total_acre<<"acres"<<endl;
	cout<<"in a/ntract of land that has 391876 square feet"<<endl;
	return getch();
}
else if(n==10)
{
	float angle;
	cout<<"what is an angle in radiance";
	cin>>angle;
	cout<<"angle in radians="<<angle<<endl;
	cout<<"sin of angle="<<sin(angle)<<endl;
	cout<<"cosine of angle"<<cos(angle)<<endl;
	cout<<"tangent of angle"<<tan(angle)<<endl;
	return getch();
}
else if(n==11)
{
	int num_of_month=3;
	string month_1,month_2,month_3;
	float rainfall_month_1,rainfall_month_2,rainfall_month_3,total,average;
	cout<<"Enter the name of month_1=";
	cin>>month_1;
	cout<<"how many inches the rainfall for"<<month_1<<endl;
	cin>>rainfall_month_1;
	cout<<"Enter the name of month_2=";
	cin>>month_2;
	cout<<"how many inches the rainfall for"<<month_2<<endl;
	cin>>rainfall_month_2;
	cout<<"Enter the name of month_3=";
	cin>>month_3;
	cout<<"how many inches the rainfall for"<<month_3<<endl;
	cin>>rainfall_month_3;
	total=rainfall_month_1+rainfall_month_2+rainfall_month_3;
	cout<<"total of rainfall month"<<total<<endl;
	average=total/num_of_month;
	cout<<"average of rainfall month"<<average<<endl;
	return getch();
}
else if(n==12)
{
	float adult_price=6.00,child_price=3.00,profit=0.20,total,theater_per;
	string movie_name;
	int adult_tkt=382,child_tkt=127;
	cout<<"what was name of movie?";
	cin>>movie_name;
	cout<<"how many adult_tkt="<<adult_tkt<<endl;
	cout<<"how many child_tkt="<<child_tkt<<endl;
	total=(adult_tkt*adult_price)+(child_tkt*child_price);
	cout<<"total of tkt price="<<total<<endl;
	theater_per=total*profit;
	cout<<"total profit of theater_per="<<theater_per<<endl;
	return getch();
}
else if(n==13)
{
	float c,f;
	cout<<"enter yhe celsius temp."<<endl;
	cin>>c;
	f=((9/5)*c)+32;
	cout<<"celsius temp.="<<c<<endl;
	cout<<"faherenheit temp.="<<f<<endl;
	return 0;
}
}
