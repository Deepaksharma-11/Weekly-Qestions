#include <iostream>
using namespace std;

class Student{
public :
int id;
char gender;
string name;
float fees;
void ReadInfo(){
cin >> id;
cin >> gender;
cin >> name;
cin >> fees;
}
void ShowInfo(){
cout << id << " " << gender << " " << name << " " << fees;
}
};


int main(){
//datatype name;
Student s1;
s1.ReadInfo();
s1.ShowInfo();
Student s2;
s2.ReadInfo();
s2.ShowInfo();
return 0;
}