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
  
  cout << "What is the students first name?: ";
  cin.get(first, 10);
  cin.get();
  
  cout << "What is the students last name?: ";
  cin.get(last, 10);
  cin.get();

  cout << "What is the students id?: ";
  cin >> id;

  cout << "What is the students gpa?: ";
  cin >> gpa;

  //Student* student = Student{first, last, id, gpa};
  
  
  
}

void Print() {

}

void Delete() {

}


int main() {
  vector<Student*> students;
  char input[7];
  
  while (true) {
    cout << "Enter a command: ";
    cin.get(input, 7);
    cin.get();
    

    if (!strcmp(input, "ADD")) {
      Add(students);
    }
    else if (!strcmp(input, "PRINT")) {
      
    }
    else if (!strcmp(input, "DELETE")) {

    }
    else {
      cout << "Invalid command." << endl;
    }
  }
  
}
