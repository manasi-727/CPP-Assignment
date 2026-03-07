#include <iostream>
using namespace std;
int main() {
  int arr[5];
  int largest;
  cout << "Enter 5 numbers: " << endl;
  //  store input from user to array
  for (int i = 0; i < 5; i++)
   {
    cin >> arr[i];
  }
  largest= arr[0];
  cout << "The numbers are: " << endl;
  //  print array elements
  for (int i = 0; i< 5; i++) 
  {
   if (arr[i]>largest)
   {
    largest=arr[i];
   }
  }
 cout<<"largest element="<< largest;

return 0;
  
}
