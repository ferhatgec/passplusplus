# Pass++
## Single header Password Quality and Security Library.

```cpp
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
```
##### Pass++ licensed under the terms of MIT License.
