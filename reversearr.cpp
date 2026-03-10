#include <iostream>
using namespace std;
int main()
{
    int arr[5], i;
    cout <<"Enter Array:";
    for(i=0;i<5;i++)
    {
    cin>>arr[i];
    }
for(i=4;i>=0;i--)
    {
    cout<<arr[i]<<" ";
    }
}
