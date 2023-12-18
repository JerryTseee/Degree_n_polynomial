#include<iostream>
using namespace std;
#include<string>
#include<iomanip>//use for setprecision()

int main()
{
	
	double value;
	double degree;
	double coe;//the coefficient for degree 0, always hold!!!
	cin>>value>>degree>>coe;//get the user input
	double result=coe;

	for ( int i=degree; i>0; i-- )
	{
		double coefficient;
    
		cin>>coefficient;//keep adding new coefficient for dgree 1 to ......
    
		result = coefficient+value*coe;
		coe=result;//become the new coefficient for the outside next one
	}
	
	cout<<fixed<<setprecision(6);
	cout<<result<<endl;
	

	return 0;
}
