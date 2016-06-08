#include"Agency.h"
#include<iostream>
using namespace std;
int main()
{
emp info [4];
Agency a;
int option;
a.displayInstructions();
cin >>option;
 
while (option!=5)
{
	switch(option)
	{
		case 1: 	 
			a.getSalesData(info);		 
			break;
		case 2:a.displaySalesProjections( info);
			break;
	 
		case 3:a.displaySuccessfullSalesPerson(info);
		//default:a.produceSalesProjectionsTable();
			break;
		


	
	}
	system("pause");
	system("cls");
	a.displayInstructions();
	cin >>option;
 
	}
system("pause");

}