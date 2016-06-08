#include"Agency.h"
#include<iostream>
using namespace std;
void  displayInstructions();
int main()
{
emp info [4];

int option; 
emp salesP;
displayInstructions();
cin >>option;
while (option!=0)
{
	Agency a;
	switch(option)
	{
		case 1: 	 
			a.getSalesData(info);		 
			break;
		case 2:a.displaySalesProjections( info);
			break;
	 
		default : if(a.displaySuccessfullSalesPerson(info)==true)
				 {
				 
					 cout<<"The following Sales persons will be Hired:\n";
					 a.displaySuccessfullSalesPerson(info);
				 }
				 else
				 {
					cout<<"No Sales person was hired\n";
				 }
				  
		 

 


		 
	}
	system("pause");
	system("cls");
	displayInstructions();
	cin >>option;
 }
system("pause");
return 0;
}
void  displayInstructions()
{
	cout<<"********************Temporary Job Placement*********************************\n";
	cout<<"1) Get Sales Data\n";
	cout<<"2) Display Sales Projections\n";
	cout <<"3) Display Hired Salespersons\n";
	cout<<"0) Exit\n";
	cout<<"**************************************************************************\n\n";
}