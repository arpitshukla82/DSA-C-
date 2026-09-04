/*#include<iostream
using namespace std;
class Student{
    public:
        string name;
        int age, roll_number;
        string gender;
};

int main(){
    Student s1;
    s1.name = "John";
    s1.age = 20;
    s1.roll_number = 101;

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Roll Number: " << s1.roll_number << endl;
}*/

// Getters and Setters are member functions in OOP that are used to access and modify private data members of a class.

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:

    // Setter
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    // Getter
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};

int main() {

    Student s;

    s.setName("Arpit");
    s.setAge(21);

    cout << s.getName() << endl;
    cout << s.getAge();

}
//Getter: Public function that reads/returns the value of a private data member.
//Setter: Public function that writes/updates the value of a private data member, often after validation.

