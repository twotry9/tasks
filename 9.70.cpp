#include <iostream>
#include <string>

int main() {
    std::string sentence;
    std::cout << "Write sentence: ";
    std::getline(std::cin, sentence);

    int vowelCount = 0;
    for (char c : sentence) {
        char lowerChar = tolower(c);
        if (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' ||
            lowerChar == 'o' || lowerChar == 'u' || lowerChar == 'y') {
            vowelCount++;
        }
    }

    std::cout << "Number of vowel: " << vowelCount << std::endl;
    return 0;
}
