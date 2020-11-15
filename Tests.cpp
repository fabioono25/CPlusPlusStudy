// pre-processor statement
#include <iostream>

void Log(const char* message);

int main() // entry point
{
    /*Log("hi");
    std::cout << "Hello World!" << std::endl;*/

    // variables:
    int variable = 8; // -2b ~ +2b - 4 bytes
    unsigned int variable2 = 8;
    

    char a = 'A';
    char b = 65;
    std::cout << a << b << std::endl;

    float f = 5.5;
    double f1 = 5.2;
    std::cout << f << f1 << std::endl;

    std::cout << sizeof(bool) << std::endl;    //1
    std::cout << sizeof(float) << std::endl;   //4
    std::cout << sizeof(double) << std::endl;  //8 
} 

