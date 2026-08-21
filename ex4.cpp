#include <iostream>
#include <string>
struct Student{
    // declare 3 member variables:
    // - a string for the student's name
    // - an int for the student's age
    // - a float for the student's GPA
    std::string name;
    int age;
    float gpa;

};

void printStudent(Student* s){
    // use the pointer (s) to print the student's info
    // Hint: use s->memberName to access each field
    // Expected output:
    // Name: Alice
    // Age:  20
    // GPA:  3.5    
    std::cout<< "Name: "<< s->name<< std::endl;
    std::cout << "Age: "<< s->age<< std::endl;
    std::cout<< "GPA: "<< s->gpa<< std::endl;

}

void updateGPA(Student*s, float newGPA){
    // use the pointer (s) to update the student's GPA
    // Hint: assign newGPA to the gpa field through the pointer
    s->gpa=newGPA;


}
int main (){
    // STEP 1: Create a Student variable and initialize it
    //         with a name, age, and GPA of your choice
    Student student={"Dara", 18, 0.5f};

    // STEP 2: Create a pointer (Student*) that points to your student
    //         Hint: use the & operator to get the address
    Student *ptr=&student;

    // STEP 3: Call printStudent() and pass your pointer to print the info
    printStudent(&student);

    // STEP 4: Call updateGPA() to change the GPA to a new value
    updateGPA(&student, 1.0f);

    // STEP 5: Call printStudent() again to confirm the GPA was updated
    printStudent(&student);

}