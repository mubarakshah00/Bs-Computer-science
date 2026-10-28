#include <iostream>
using namespace std;
int main()
{int initialvelocity,time,acceleration,s;
cout<<"Enter initial speed: "<<endl;
cin>>initialvelocity;
cout<<"Enter time: "<<endl;
cin>>time;
cout<<"Enter acceleration: "<<endl;
cin>>acceleration;
s = initialvelocity*time+(1/2)*acceleration*time*time;
cout<<"Answer is = "<<s<<endl;
return 0;
}
