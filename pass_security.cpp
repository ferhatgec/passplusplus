#include <iostream>
#include "PassQuality.hpp"

int main() {
	std::string str;
	std::cout << "Enter input string." << "\n";
    	std::cin >> str;
	int quality = PassQuality::PassSecurity(str);    	
     	if(quality == 1) { 
     		std::cout << "Found! You should change this password."; 
     	} else if(quality == 2) {
     		std::cout << "PassList not found.";
     	} else {
     		std::cout << "Not found, yey! Now, Running PassSecurity2.";
     		quality = PassQuality::PassSecurity2(str);
     		if(quality == 1) {
     			std::cout << "Found! You should change this password.";
     		} else if(quality == 2) {
     			std::cout << "PassList2 not found.";
     		} else {
     			std::cout << "\nNot found, yey! Your password not found from both of them.";
     		}
     	}
     	std::cout << "\n";
     	return 0;
}

