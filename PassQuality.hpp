#ifndef PASS_QUALITY_HPP
#define PASS_QUALITY_HPP

#include <iostream>
#include <fstream>
#include <cstring>

#ifdef WINDOWS
#include <direct.h>
#define GetCurrentDir _getcwd
#else
#include <unistd.h>
#define GetCurrentDir getcwd
#endif

namespace PassQuality {
	static std::string GetCurrentWorkingDir(void) { // From FileSystemPlusPlus Library https://github.com/FerhatGec/fsplusplus
  		char buff[FILENAME_MAX];
  		GetCurrentDir( buff, FILENAME_MAX );
  		std::string current_working_dir(buff);
  		return current_working_dir;
	}
	
	int Quality(std::string str) {
		int l_case=0, u_case=0, digit=0, special=0;
    		int l=str.length(),i;
    		for(i=0;i<l;i++) {
        		if(islower(str[i]))
          			l_case=1;
        		if(isupper(str[i]))
          			u_case=1;
        		if(isdigit(str[i]))
          			digit=1;
        		if(!isalpha(str[i]) && !isdigit(str[i]))
          			special=1;  
    		}
      
    		if(l_case && u_case && digit && special && l>=8)
    			return 1; // Strong Password
    		else if((l_case+u_case+digit+special>=3) && l>=6)
    			return 2; // Moderate Password
    		else
        		return 3; // Weak Password
        	
		return 0;
	}
	
	int PassSecurity(std::string str) {
		std::string line;
    		std::ifstream readfile("passlist.txt");
    		if(readfile.is_open()) {
        		while (std::getline(readfile, line)) {
        			if(line == str) {
        				return 1; // This password is unsecure!
        			}
        		}
        		readfile.close();
    		} else {
        		return 2; // PassList not found.
    		}
	}
	
	int PassSecurity2(std::string str) {
		std::string line;
    		std::ifstream readfile("passlist2.txt");
    		if(readfile.is_open()) {
        		while (std::getline(readfile, line)) {
        			if(line == str) {
        				return 1; // This password is unsecure!
        			}
        		}
        		readfile.close();
    		} else {
        		return 2; // PassList not found.
    		}
	}
}


#endif // PASS_QUALITY_HPP
