#include"Agency.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

Agency::Agency()
{
	for (int i=0;i<5;i++)
	{
		 initSales[i]= 100*(1+i);
	}	 
}
Agency::Agency(string salesMan,double sales)
{
	for(int i=0;i<5;i++)
	{
		 	 
	}
}

void Agency::getSalesData(emp salesPerson [] )
{ 
	for (int i=0;i<4;i++)
	{
		cout<<"\n\nEnter name:  ";
		cin>>salesPerson [i].name;
		cout<<"\n\n";
		for (int j=0;j<4;j++)
		{
			cout<<"enter sales data:  ";
			cin>>salesPerson[i].sales[j];
		} 
	}
}
void Agency::produceSalesProjectionsTable(emp salesPerson [] )
{
	for (int i=0;i<4;i++)
	{
		cout<<salesPerson[i].name<<"\t";
		cout<<initSales[i]<<"\t";
		for (int j=0;j<4;j++)
		{
			cout<<"\t"<<initSales[i]*(1+(0.05*(j+1)));
		}
		cout<<"\n";
	} 
}

void Agency::displaySalesProjections(emp salesPerson [] )
{
	int width=10;
	cout<<"SalesMan"<<setw(width)<<"Initial"<<setw(width)<<"Month1"<<setw(width)<<"Month2"<<setw(width)<<"Month3"<<setw(width)<<"Month4\n";
	cout<<"Name"<<setw(width)<<"    Sales"<<setw(width)<<"5%"<<setw(width)<<"10%"<<setw(width)<<"15%"<<setw(width)<<"20%\n";
	produceSalesProjectionsTable(salesPerson);
	
}

bool Agency::displaySuccessfullSalesPerson( emp salesPerson [])
{
	bool hiredp=false;
	
	for (int i=0;i<4;i++)
	{
		if ((salesPerson [i].sales[0]>=initSales[i]) &&(salesPerson [i].sales[1]>=initSales[i]*(1+(0.05*(0+1))))&&(salesPerson [i].sales[2]>=initSales[i]*(1+(0.05*(0+2))))&&(salesPerson [i].sales[3]>=initSales[i]*(1+(0.05*(0+3)))))
		{
			cout<<salesPerson[i].name<<"\n";
			hiredp=true;
		}
	}
	if(hiredp==true)
	{
		return true;
	}
	else
		{
			return false;
		}
}
Agency::~Agency()
{

}

