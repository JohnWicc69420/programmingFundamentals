#include <iostream>
using namespace std;
int main ()
{
int min,max;
int n = 10;
int a[n];
cout<<"Enter 10 values:";
for(int i=0;i<10;i++)
{
cout<< "\nEnter the value: ";
cin>> a[i];
}

min=a[0];

max=a[0];

for(int i=1;i<10;i++)
{
if(min>a[i])
{
min=a[i];
}
else if(max<a[i])
{
max = a[i];
}
}

cout<<"\nMaximum number is: "<< max << endl;
cout<<"\nMinimum number is: "<< min << endl;

return 0;

}
