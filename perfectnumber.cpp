#include <iostream>
#include <algorithm>
#include <vector>

std::vector<bool> displayPerfectNumbers(const std::vector<int> & vect) {
    std::vector<bool> results;
    std::for_each(vect.begin(), vect.end(),
        [&results](int number) {
            int sum = 1;
            for (int divisor = 2; divisor <= number / 2; ++divisor) {
                if (number % divisor == 0) {
                    sum += divisor;
                }
            }
            results.push_back(sum == number && number != 1);
        }
    );
    return results;
}
