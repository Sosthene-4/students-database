#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;
    string course;

    Student(string n, int a, string c) {
        name = n;
        age = a;
        course = c;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Student* students = new Student[n];

    for (int i = 0; i < n; i++) {
        string name;
        int age;
        string course;

        cout << "Enter details for student " << i + 1 << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Course: ";
        cin >> course;

        students[i] = Student(name, age, course);
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].display();
    }
