#include<iostream>
#include<stdio.h>
#include<string>
#include<iomanip>
using namespace std; 

class Student {
  int idNum;
  string firstName;
  string lastName;
  float mathGrade, scienceGrade, englishGrade, peGrade, geoGrade, artGrade;
  float gpa;
  
  string l_grade;

void calculate() {
  gpa = (mathGrade + scienceGrade + englishGrade + peGrade + geoGrade + artGrade) / 6;
  if(gpa >= 100) {
    l_grade= "A+";
  } else if (gpa >= 90) {
    l_grade = "A";
  } else if (gpa < 90 && gpa >= 80) {
    l_grade = "B";
  } else if (gpa < 80 && gpa >= 70) {
    l_grade = "C";
  } else if (gpa < 70 && gpa >= 60) {
    l_grade = "D";
  } else {
    l_grade = "E";
  }
}
public:
  void getData() {
    cout << "Enter student's ID number: ";
    cin >> idNum;
    cout << "Enter student's first name: ";
    cin >> firstName;
    cout << "Enter student's last name: ";
    cin >> lastName;
    cout << "Enter grade percentage for math: ";
    cin >> mathGrade;
    cout << "Enter grade percentage for science: ";
    cin >> scienceGrade;
     cout << "Enter grade percentage for English: ";
    cin >> englishGrade;
    cout << "Enter grade percentage for phys ed: ";
    cin >> peGrade;
    cout << "Enter grade percentage for geography: ";
    cin >> geoGrade;
    cout << "Enter grade percentage for art: ";
    cin >> artGrade;
    calculate();
  }

void showData() {
  cout << "\n\nName of student:\t\t\t" << firstName << " " << lastName << endl;
  cout << "Student ID number:\t\t\t" << idNum << endl;
  cout << "Grade in math:\t\t\t\t" << mathGrade << endl;
  cout << "Grade in science:\t\t\t" << scienceGrade << endl;
  cout << "Grade in English:\t\t\t" << englishGrade << endl;
  cout << "Grade in phys ed:\t\t\t" << peGrade << endl;
  cout << "Grade in geography:\t\t\t" << geoGrade << endl;
  cout << "Grade in art:\t\t\t\t" << artGrade << endl;
  cout << "\nStudent's overall gpa:\t\t" << setprecision(4) << gpa << "%, "<< l_grade << endl;
}
};