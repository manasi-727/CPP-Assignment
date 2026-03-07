//tatic function can access only static data.it will not access non static data(instance data).

#include<iostream>
using namespace std;
class MyDate
{
	int day,month,year;//instance variable

	static int count;//static variable
	public:
		
		MyDate()//no args constructor
		{
			cout<<"no arg constructor is called\n";
			day=27;
			month=2;
			year=2026;
			count++;
		}
		MyDate(int d,int m,int y)
		{
			cout<<"para constructor called\n";
			day=d;
			month=m;
			year=y;
			count++;
		}
		void display()
		{
			cout<<"date is "<<day<<"/"<<month<<"/"<<year<<endl;
			
		}
		static int getCount();
	
};
int MyDate::count;
int MyDate::getCount()
{
	return count;
	//return day;//error -->static function cannot access non static data
	
}
int main()
{
	MyDate d1;
	MyDate d2(1,2,2001);
	cout<<"no of object created is "<<MyDate::getCount();

}