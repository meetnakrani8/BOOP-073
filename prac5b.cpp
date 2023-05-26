#include<iostream>
using namespace std;
class vol
{
private:
int a;
public:
void getdata()
{
cout<<"enter the side of cube:-"<<endl;
cin>>a;
}
void putdata()
{
float c;
c=a*a*a;
cout<<"volume of cube is:"<<c;
}
};
int main()
{
class vol v;
v.getdata();
v.putdata();
return 0;
}

