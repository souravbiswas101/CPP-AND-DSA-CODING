#include<iostream>

using namespace std;

int main()
{
	int year;
	cin>>year;

	if((year % 400== 0) && (year % 100 != 0) ||(year % 4 == 0)){
		cout<<year<<" is a leap year"<<endl;
	}
	else{
		cout<<year<<" isn't a leap year"<<endl;
	}

	return 0;

}
