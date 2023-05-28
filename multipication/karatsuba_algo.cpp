#include <iostream>
#include <vector>
#include <unistd.h>
#include <string>
#include<cmath>

using namespace std;

int multi(int x,int y)
{

if(x<10 || y<10)
{
return x*y;
}

int n=to_string(x).length();

int h=n/2;
int a=x/pow(10,h);
int b=x-(a*pow(10,h));
int c=y/pow(10,h);
int d=y-(c*pow(10,h));

cout<<"a: "<<a<<"b: "<<b;
cout<<endl;

int ac=multi(a,c);
int a_add_b=a+b;
int c_add_d=c+d;
int bd=multi(b,d);



return ac*pow(10,n)+pow(10,h)*((a_add_b*c_add_d)-ac-bd)+bd;

}


int main()
{
int x=2635;
int y=5676;

cout<<multi(x,y);

return 0;
}
