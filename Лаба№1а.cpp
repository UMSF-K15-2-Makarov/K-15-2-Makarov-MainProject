#include <iostream>
#include <conio.h>
#include <clocale>
using namespace std;
int main()
{ 
setlocale (LC_CTYPE,"rus");
unsigned long long int a,b;
cout<<"������� � � � : ";
cin>>a>>b;
do
{
	if(a>b) a=a%b;
	else b=b%a;
}
while(a!=0&&b!=0);
	cout<<"���������� ����� �������� : "<<a+b<<endl;
_getch();
}

