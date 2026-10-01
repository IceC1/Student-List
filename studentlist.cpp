#include<iostream>
#include<cstring>
#include <vector>

using namespace std;

struct Student {
  char first[10];
  char last[10];
  int id;
  float gpa;
};

void Add(vector<Student*> students) {
  char first[10];
  char last[10];
  int id = 0;
  float gpa = 0.0;
  Student student;
  
  cout << "What is the students first name?: ";
  cin.getline(student.first, 10);
   //  student.first = first;
  
  cout << "What is the students last name?: ";
  cin.getline(student.last, 10);
  //  student.last = last;

  cout << "What is the students id?: ";
  cin >> id;
  student.id = id;
  
  cout << "What is the students gpa?: ";
  cin >> gpa;
  student.gpa = gpa;

  cin.clear();
  students.push_back(&student);
  
}

void Print(vector<Student*> &students) {
  for (vector<Student*>::iterator it = students.begin(); it != students.end(); it++)  {
    cout << (*it)->first << endl;
    cout << (*it)->last << endl;
    cout << (*it)->id << endl;
    cout << (*it)->gpa << endl;
    
  }
}

void Delete() {

}


int main() {
  vector<Student*> students;
  char input[7];
  
  while (true) {
    cout << "Enter a command: ";
    cin.getline(input, 7);
    

    if (!strcmp(input, "ADD")) {
      Add(students);
    }
    else if (!strcmp(input, "PRINT")) {
      Print(students);
    }
    else if (!strcmp(input, "DELETE")) {

    }
    else {
      cout << "Invalid command." << endl;
    }
  }
  
}
