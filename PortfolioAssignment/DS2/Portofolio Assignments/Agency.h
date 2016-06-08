#include <string>
#include<iostream>
using namespace std;
 struct emp{
	string name;
	double sales[4];
} ; 

  

class Agency
{
private:
		emp salesPerson [4];
		double initSales[4];
		 
public:
		Agency();
		Agency(string salesMan,double sales);
		void displayInstructions();
		void getSalesData(emp salesPerson []);
		void produceSalesProjectionsTable(emp salesPerson [] );
		void displaySalesProjections( emp salesPerson []);
		void displaySuccessfullSalesPerson( emp salesPerson []);

};