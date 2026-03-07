#include <iostream>
using namespace std;
int main() {
  int arr[5];
  int sum=0;
  cout << "Enter 5 numbers: " << endl;
  //  store input from user to array
  for (int i = 0; i < 5; i++)
   {
    cin >> arr[i];
    sum= sum+arr[i];
  }
  cout << "The numbers are: " << endl;
  //  print array elements
  for (int i = 0; i< 5; i++) 
  {
    cout << arr[i] << "  ";
  }
  cout<< endl;
   cout<< "sum=" << sum ;

return 0;
  
}