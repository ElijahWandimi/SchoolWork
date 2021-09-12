#include <iostream>
#include <string>
using namespace std;

int main(){
int numberOfStudent;
string courseName;
string units[8];
cout<<("Enter course name: ")<<endl;
cin>>courseName;
cout<<("Enter number of students: ")<<endl;
cin>>numberOfStudent;

for(int i=0; i<=8;i++)
{
cout<<"Enter units"<<endl;
cin>>units[i];
}
return 0;

}




