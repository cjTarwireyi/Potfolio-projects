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
		 ~Agency();
		void getSalesData(emp salesPerson []);
		void produceSalesProjectionsTable(emp salesPerson [] );
		void displaySalesProjections( emp salesPerson []);
		bool displaySuccessfullSalesPerson( emp salesPerson []);

};