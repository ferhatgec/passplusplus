#include <iostream>
#include "PassQuality.hpp"

int main() {
	std::string str;
	std::cout << "Enter input string." << "\n";
    	std::cin >> str;
	int quality = PassQuality::Quality(str);    	
     	if(quality == 1) { std::cout << "Strong password"; } else if(quality == 2) { std::cout << "Moderate password"; } else if(quality == 3) { std::cout << "Weak password"; }
     	std::cout << "\n";
     	return 0;
}

