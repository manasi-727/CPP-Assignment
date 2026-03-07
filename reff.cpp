//pass by reference

#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{
	int a,b;
	cout<<"enter value of a and b\n";
	cin>>a>>b;
	cout<<"before swapping value of a and b\n";
	cout<<"value of a = "<<a<<"  "<<"value of b = "<<b<<endl; 
	swap(a,b);//function calling
	
	cout<<"after calling swap () value of a and b\n";
	cout<<"value of a = "<<a<<"  "<<"value of b = "<<b<<endl;
}
void swap(int& p,int& q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
	cout<<"after swapping value of p and q\n";
	cout<<"value of p = "<<p<<"  "<<"value of q = "<<q<<endl;

}
