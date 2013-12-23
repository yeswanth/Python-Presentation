#include<iostream>
using namespace std;

int main()
{
	for(long long i=10000;i<100000000;i++)
	{
		for(long long j=i;j<100000000;j++)
		{
			if(i==j)
			cout<<i<<"\n"<<j<<"\n";
		}
	}
}


