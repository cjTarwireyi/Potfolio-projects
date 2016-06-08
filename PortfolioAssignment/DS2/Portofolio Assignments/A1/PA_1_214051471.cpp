/*CORNELIOUS TARWIREYI 
 STUDENT NUMBER:214051471
 DS200A
PORTFOLIO ASSIGNMENT 1*/

#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
void displayInstructions();
void GetSalesData(string salespersons[],double startSales[]);
void  ProduceSalesProjectedTable(double startSales[],double project4Sales[5][4]);
void DisplaySalesProjections(string salesperson[],double startSales[], double project4Sales[5][4]);

int main()
{
	int option=0;
	string salespersons[5];
	double startSales[5];
	double project4Sales[5][4];

	displayInstructions();
	cin>>option;
	while (option <0||option>2)
	{
		cout<<"wrong option enter only enter between 0,1,2 to proceed: ";
		cin>>option;
	}
	while (option !=0)
	{
		switch (option)
		{
			case 1:GetSalesData(salespersons ,startSales );
			break;
			default:DisplaySalesProjections(salespersons ,startSales,project4Sales );
		}
		system("pause");
		system("cls");
		displayInstructions();
		cin>>option;
		while (option <0||option>2)
		{
			cout<<"wrong option enter only enter between 0,1,2 to proceed: ";
			cin>>option;
		}
	}
	system("pause");
return 0;
}
void displayInstructions()
{
		cout<<"\t**************JOB PLACEMENT OFFICE*******************\n\n";
		cout<<"\t\t\t1)Get SalesData\n"	; 
		cout<<"\t\t\t2) Sales Projections\n" ;	
		cout<<"\t\t\t0) Quit\n" ;
		cout<<"\t*****************************************************\n\n\n";
}
void GetSalesData(string salespersons[],double startSales[])
{

for(int i=0;i<5;i++)
{
cout<<"Enter sales person name and surname: ";
cin>>salespersons[i];
cout<<"Enter start sales: ";
cin>>startSales[i];
system("cls");
displayInstructions();
}
}
void  ProduceSalesProjectedTable(double startSales[],double project4Sales[][4])
{
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<4;j++)
		{
			project4Sales[i][j]=startSales[i]*(1+(0.05*(j+1)));
		}
	}
}
void DisplaySalesProjections(string salesperson[],double startSales[], double project4Sales[][4])
{
	cout<<"\n\nSalesman\tInitial\tMonth1:\tMonth2:\tMonth3:\tMonth4:\n";
	cout<<"Name\t\tSales\t5%\t10%\t15%\t20%\n\n";
 
	ProduceSalesProjectedTable(startSales,project4Sales );
	for(int i=0;i<5;i++)
	{
		cout<<salesperson[i]<<"\t\t"<<startSales[i];
		for(int j=0;j<4;j++)
		{
			cout<<"\t"<<project4Sales[i][j];
		}
		cout<<endl;
	}
}