#include <iostream>
using namespace std;
int main()
{
int a,b;
char c;

cout<<"masukkan angka pertama :";
cin>>a;
cout<<"masukkan angka kedua :";
cin>>b;
cout<<"masukkan *,/,+ atau - :";
cin>>c;

if (c=='*') {
cout<<a*b<<endl;
} else if (c== '/')
{
cout<<a/b<<endl;
} else if (c== '+')
{
   cout<<a-b<<endl;
}
 return 0;
}
