#include<iostream>
using namespace std;
int fun(int y)
{
	if(y>0){
		
		fun(y-1);
		cout<<y<<endl;
		
	}
}
int main()
{
	int x=3;
	fun(x);
	
}
