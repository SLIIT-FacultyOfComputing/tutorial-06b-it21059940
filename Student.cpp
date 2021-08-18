#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int psId,char pname[]) {
  studentId=psId;
  strcpy(name,pname);
}

// Display StudentId and Name
void Student::display() {
  cout<<"Student ID :"<<studentId<<endl;
  cout<<"Name:"<<name<<endl;
}
