#include <iostream>
#include "UserData.h"
int main()
{
    UserData person1("John", "1234");
    std::cout << person1.getEncodedPassword() << std::endl;
    UserData person2("John", "1234");
    std::cout<<UserData::comparePasswords(person1.getEncodedPassword(), person2.getEncodedPassword());
}