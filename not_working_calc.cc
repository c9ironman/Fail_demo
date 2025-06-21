#include <iostream>
// the problem is probably at [void core();]

std::string operation;
int a;

class common {
public:
    void print() {
        
        std::cin >> a;
        std::cout << "b: ";
        std::cin >> b;
    }
};

int plus() {
    
    plus1.print();
    int ans = a + b;
    std::cout << "ANS: " << ans << "\n";
    
}

int minus() {
    common minus1;
    minus1.print();
    int ans = a - b;
    std::cout << "ANS: " << ans << "\n";
    
}

int multiply() {
    common multiply1;
    multiply1.print();
    int ans = a * b;
    std::cout << "ANS: " << ans << "\n";
    
}

int divide() {
    common divide1;
    divide1.print();
    int ans = a / a;
    std::cout << "ANS: " << ans << "\n";
   
}

void core() {
    std::cout << "\nplus / minus / multiply / divide\n"
        << "operation: ";
    std::cin >> operation;
    if (operation == "plus" or "Plus") {
        plus();
    }
    else if (operation == "minus" or "Minus") {
        minus();
    }
    else if (operation == "multiply" or "Multiply") {
        multiply();
    }
    else if (operation == "divide" or "Divide") {
        divide();
    }
    else {
        std::cout << "Invalid Operation!\n";
    }

}

int main() {
    for (int i = 0; i < 99; i++) {
        core();
    }
}
