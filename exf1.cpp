#include <iostream>

bool is_number (char a) {
    return (int(a) >=int('0')) and (int(a)<=int('9'));
}

int main () {
    std::cout << is_number('5')<< std::endl;
    std::cout << is_number('a')<< std::endl;

}