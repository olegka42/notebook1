#include <iostream>
#include <string>
#include <ctime> 

using namespace std;

class student {
public:

    student(string name, string surname) {
        this->name = name;
        this->surname = surname;
        this->age = 0;
        clog << "Constructor with name and surname called" << endl;
    }


    student(string name, int birth_year) {
        this->name = name;
        this->surname = ""; 

        this->age = 2025 - birth_year;
        clog << "Constructor with name and birth year called" << endl;
    }


    void print_info() {
        cout << "Name: " << name << endl;
        if (!surname.empty()) {
            cout << "Surname: " << surname << endl;
        }
        if (age > 0) {
            cout << "Age: " << age << " years" << endl;
        } else {
            cout << "Age: unknown" << endl;
        }
    }

private:
    string name;
    string surname;
    int age;
};

int main() {

    student student1("Ivan", "Ivanov");
    student student2("ivan", 2000);


    cout << "Student 1:" << endl;
    student1.print_info();
    cout << "\nStudent 2:" << endl;
    student2.print_info();

    cin.get();
    return 0;
}