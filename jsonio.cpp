#include <iostream>
#include <string>
#include <cstddef>

#include "jsonio.hpp"

class TestData {
    public:
    std::string name;
    size_t age;
};

std::any jsonio::serdes::from_str(std::string str) {
    return TestData{.name = "hendrix", .age = 28};
}

int main() {
    auto j = jsonio::serdes();
    auto a = j.from_str("{\"name\": \"hendrix\", \"age\": 28}");
    
    std::cout << "Output: " << std::any_cast<TestData>(a).name << std::endl;

    return 0;
}
