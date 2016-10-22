#include<iostream>
#include<conio.h>
using namespace std;
void main()
{  
	float a[11],s;
	int n;
	cin>>n;
	s=0;
	for (int i=0;i<n;i++)
	{ 
		cin>>a[i];
	}
	for (int i=0;i<n;i++)
	{
     s=s+a[i];
	}
	float b;
	b=s/n;
	cout<<b;
	{
 
	int max=a[0];
	for (int i=0;i<n;i++)
    if(max<a[i])
	max=a[i];
	}
    cout<<max;
}
  cout<<s;
  system("pause");
}