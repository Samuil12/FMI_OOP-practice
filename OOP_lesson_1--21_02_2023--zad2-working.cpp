#include <iostream>
#include <cstring>

#pragma warning(disable:4996)

struct Student {
    char name[20] = { '\0' };
    char surname[20] = { '\0' };
    char EGN[11] = { '\0' }; // Need space for the null terminator
};

struct University {
    char UniName[20];
    Student students[1000] = {}; // we will assume that the university has no more than 1000 students

    bool hasStudent(Student student, bool print = true) {
        // check if the student is in the university
        for (int i = 0; i < 1000; i++) {
            if (strcmp(students[i].EGN, student.EGN) == 0) { // Use strcmp() to compare C-style strings
                if (print) { std::cout << "The student is in the university\n"; }
                return true;
            }
        }
        if (print) { std::cout << "The student is not in the university\n"; }
        return false;
    }

    void addStudent(Student student) {
        if (hasStudent(student, false) == true) {
            std::cout << "The student is ALREADY in the university\n";
            return;
        }
        else {
            // add the student to the university
            for (int i = 0; i < 1000; i++) {
                if (students[i].EGN[0] == '\0') { // check if the EGN is empty
                    students[i] = student;
                    std::cout << "The student is added to the university\n";
                    return;
                }
            }
            std::cout << "The university is full\n";
            return;
        }
    }
};

int main() {
    University FMI;
    strcpy(FMI.UniName, "FMI");
    Student student1;
    strcpy(student1.name, "Ivan");
    strcpy(student1.surname, "Ivanov");
    strcpy(student1.EGN, "1234567890");
    Student student2;
    strcpy(student2.name, "Pesho");
    strcpy(student2.surname, "Peshev");
    strcpy(student2.EGN, "0123456789");
    FMI.addStudent(student1);
    FMI.hasStudent(student1);
    FMI.hasStudent(student2);
    FMI.addStudent(student2);
    FMI.addStudent(student2);
    FMI.hasStudent(student2);
    return 0;
}