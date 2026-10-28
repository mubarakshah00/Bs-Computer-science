#include <iostream>
using namespace std;
int main()
{
	int finalvelocity,initialvelocity,speed;
	cout<<"Enter Final Velocity= "<<endl;
	cin>>finalvelocity;
	cout<<"Enter Initial Velocity= "<<endl;
	cin>>initialvelocity;
	speed=(finalvelocity*finalvelocity-initialvelocity*initialvelocity)/2;
	cout<<"Result: "<<speed<<endl;
	return 0;
}
