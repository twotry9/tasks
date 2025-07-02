// Дано предложение.Определить, сколько в нем гласных букв.
#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char* argv[]) {
    
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " \"sentence in quotes\"" << std::endl;
        return 1;
    }

    std::string sentence = argv[1];
    int vowelCount = 0;

    
    for (char c : sentence) {
        char lowerChar = tolower(c);
        if (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' ||
            lowerChar == 'o' || lowerChar == 'u' || lowerChar == 'y') {
            vowelCount++;
        }
    }

    std::cout << "Number of vowels: " << vowelCount << std::endl;
    return 0;
}
