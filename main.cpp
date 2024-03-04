#include <iostream>
#include "stack.h"

int main()
{
    Stack s1(3);
    std::cout << std::boolalpha << "s1 is empty " << s1.is_empty() << std::endl;
    std::cout << std::boolalpha << "s1 is full " << s1.is_full() << std::endl;
    s1.push('a');
    s1.push('b');
    s1.push('c');
    s1.print();
    std::cout << "s1.top() is " << s1.top() << std::endl;
    try
    {
        s1.push('d');
    }
    catch(std::overflow_error& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::boolalpha << s1.is_full() << std::endl;
    std::cout << s1.pop() << std::endl;
    std::cout << std::boolalpha << "s1 is empty " << s1.is_empty() << std::endl;
    std::cout << std::boolalpha << "s1 is full " << s1.is_full() << std::endl;

    std::cout << "Essais sur copie de stacks" << std::endl;
    Stack s2 = s1;
    std::cout << "s2.top() is " << s2.top() << std::endl;
    s2.print();
    s2.push('S');
    std::cout << "Le contenu de s1 est" << std::endl;
    s1.print();
    std::cout << "Le contenu de s2 est" << std::endl;
    s2.print();
    try
    {
        Stack s3(-15);
    }
    catch (std::invalid_argument& er)
    {
        std::cout << "Baka eondaro" << std::endl;
        std::cout<< er.what() << std::endl;
    }
}