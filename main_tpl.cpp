#include <iostream>
#include "TemplateStack.hpp"

int main(){
    Stack<int> si(5);
    si.push(489);
    si.push(23);
    std::cout<<si<<std::endl;

    Stack<char> sc(4);
    sc.push('e');
    sc.push('a');
    sc.push('@');
    std::cout<<sc<<std::endl;

    return 0;


}