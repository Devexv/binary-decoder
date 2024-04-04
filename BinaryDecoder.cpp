#include <iostream>
#include <string>
#include <bitset>

int main() {
    std::string binaryString;
    
    std::cout << "Enter the binary string: ";
    std::cin >> binaryString;

    for (char c : binaryString) {
        if (c != '0' && c != '1') {
            std::cerr << "Invalid input. Please enter a binary string (containing only 0s and 1s)." << std::endl;
            return 1;
        }
    }

    std::bitset<32> bits(binaryString);
    unsigned int decimalValue = bits.to_ulong();
    std::cout << "Decimal value: " << decimalValue << std::endl;

    return 0;
}
