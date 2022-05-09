
#include<iostream>
#include<stdio.h>
#include<string>
#include"student.hpp"
using namespace std; 

int main() {
  cout << "\n\n====================================\n\n\n";
  cout << "Student Grade Calculator\n\n";
  cout << "\n====================================\n\n";
  Student student1;
  student1.getData();
  student1.showData();
  cout << "\n====================================\n\n";
}