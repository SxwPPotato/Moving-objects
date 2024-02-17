#include <iostream>
#include <vector>

template<class T>
void move_vectors(T& lhs, T& rhs ) {
    T tmp = std::move(lhs);
    lhs = std::move(rhs);
    rhs = std::move(tmp);
}


int main()
{
    std::vector <std::string> one = { "test_string1", "test_string2" };
    std::vector <std::string> two;
    move_vectors<std::vector <std::string>>(one, two);


    for (std::string el : two) {
        std::cout << el << "\n";
    }
    return 0;
}