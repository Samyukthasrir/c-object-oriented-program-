#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string &str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right])
            return false;
        left++;
        right--;
    }

    return true;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;

    if (isPalindrome(str))
        std::cout << str << " is a palindrome." << std::endl;
    else
        std::cout << str << " is not a palindrome." << std::endl;

    return 0;
}

