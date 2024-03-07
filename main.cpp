#include "perfectnumber.h"
#include <iostream>

int main() {
    
    std::vector<int> numbers = {6, 28, 2, 3};

    std::vector<bool> arePerfect = displayPerfectNumbers(numbers);

    for (size_t i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " is " << (arePerfect[i] ? "a perfect number." : "not a perfect number.") << std::endl;
    }

    return 0;
}



