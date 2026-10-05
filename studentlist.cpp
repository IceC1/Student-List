/*
Elijah Chan 10/5/2026
Stores the data of multiple students (First name, Last name, Student ID, gpa).
Allows the user to add to, remove from, and print a list of these students.
*/
#include<iostream>
#include<cstring>
#include <vector>

using namespace std;

struct Student {
  char* first;
  char* last;
  int id;
  float gpa;
};

//Adds the user's inputted values to a student variable and adds the variable to the students vector.
void Add(vector<Student*> &students) {
  char* first = new char[20];
  char* last = new char[20];
  int id = 0;
  float gpa = 0.0;
  Student* student = new Student;
  
  cout << "What is the students first name?: ";
  cin.getline(first, 20);
  (student)->first = first;
  
  cout << "What is the students last name?: ";
  cin.getline(last, 20);
  (student)->last = last;

  cout << "What is the students id?: ";
  cin >> id;
  (student)->id = id;
  
  cout << "What is the students gpa?: ";
  cin >> gpa;
  (student)->gpa = gpa;
  
  students.push_back(student);
}

//Iterates through each student in the vector and prints out their information.
void Print(vector<Student*> students) {
  for (vector<Student*>::iterator it = students.begin(); it != students.end(); it++)  {
    cout << (*it)->first << ", " << (*it)->last << ", " << (*it)->id << ", " << (*it)->gpa << endl;
  }
}

//Deletes the students information and then removes that student from the vector.
void Delete(vector<Student*> &students, int id) {
  // https://www.geeksforgeeks.org/cpp/new-and-delete-operators-in-cpp-for-dynamic-memory/
  for (vector<Student*>::iterator it = students.begin(); it != students.end(); it++)  {
    if((*it)->id == id) {
      delete[] (*it)->first;
      (*it)->first = nullptr;

      delete[] (*it)->last;
      (*it)->last = nullptr;

      delete *it;
      *it = nullptr;
     
      students.erase(it);
     
      break;
	}
  }
  
}


int main() {
  vector<Student*> students;
  char input[7];
  bool running = true;
  int id = 0;
  cout.precision(3);
  cout.setf(ios::showpoint);

  //Runs the execution loop.
  while (running) {
    cout << "Enter a command: ";
    cin.getline(input, 7);

    if (!strcmp(input, "ADD")) {
      Add(students);
      cin.ignore();
    }
    else if (!strcmp(input, "PRINT")) {
      Print(students);
    }
    else if (!strcmp(input, "DELETE")) {
      cout << "Enter the id of the student you would like to delete: ";
      cin >> id;
      Delete(students, id);
      cin.ignore();
    }
    else if (!strcmp(input, "QUIT")) {
      running = false;
    }
    else {
      cout << "Invalid command." << endl;
    } 
  }
}
