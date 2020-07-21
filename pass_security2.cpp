/*# MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#*/

#include <iostream>
#include "PassQuality.hpp"

int main() {
	std::string str;
	std::cout << "Enter input string." << "\n";
 	std::cin >> str;
	int quality = PassQuality::TestSecurity(str);
 	if(quality == 0) {
		std::cout << "Your password not found in PassLists!\n";
	} else {
		std::cout << "Your password found!\n";
	}
  	return 0;
}
