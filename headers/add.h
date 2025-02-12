#ifndef ADD_H   
#define ADD_H   

#include <string>

void printMessage(const std::string& message);


class MyClass {
public:
    MyClass(int val);
    void display();
private:
    int value;
};

#endif 