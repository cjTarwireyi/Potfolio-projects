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
	string salespersons[5];
	double startSales[5];
	double project4Sales[5][4];
	displayInstructions();
	GetSalesData(salespersons ,startSales );
	ProduceSalesProjectedTable(startSales,project4Sales );
	DisplaySalesProjections(salespersons ,startSales,project4Sales );
	cout<<salespersons[0];
	cout<<endl<<endl;
	system("pause");
return 0;
}
void displayInstructions()
{
cout<<"It is expected that each of the temporary salesmen :\n\n"
	<<"will increase their sales by at least 5% each month over the four month period.\n"
	<<"After the 2nd month, it is expected the sales will increase 10% from the previous month\n" 
	<<"the 3rd month sales should increase 15% from the previous month\n"
<<"and during the 4th month sales should increase by 20% over the previous month.\n"
<<"At the end of the trial period, salesmen who met all the projected sales are hired\n";
}
void GetSalesData(string salespersons[],double startSales[])
{

for(int i=0;i<5;i++)
{
cout<<"Enter sales person name and surname";
cin>>salespersons[i];
cout<<"Enter start sales";
cin>>startSales[i];
system("cls");
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