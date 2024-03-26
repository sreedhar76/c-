#include <iostream>

int main() {
    
    int integerVariable = 5;
    
    float floatVariable;
    
    floatVariable = integerVariable;

    std::cout << "Integer variable: " << integerVariable << std::endl;
    std::cout << "Float variable (assigned from integer): " << floatVariable << std::endl;

    return 0;
}

