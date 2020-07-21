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
     		std::cout << "Not found, yey!.\nNow, Running PassSecurity2.";
     		quality = PassQuality::PassSecurity2(str);
     		if(quality == 1) {
     			std::cout << "Found! You should change this password.";
     		} else if(quality == 2) {
     			std::cout << "PassList2 not found.";
     		} else {
     			std::cout << "\nNow, Running PassSecurity2.\n";
     			quality = PassQuality::PassSecurity3(str);
     			if(quality == 1) {
     				std::cout << "Found! You should change this password.";
     			} else if(quality == 2) {
     				std::cout << "PassList3 not found.";
     			} else {
     				std::cout << "Not found, yey!\nYour password not found from all three passlist.";
     			}
     		}
     	}
     	std::cout << "\n";
     	return 0;
}
