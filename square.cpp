//
//  square.cpp
//  
//
//  Created by Anirudh Jayaraman on 21/01/23.
//

#include <iostream>

int main() {
  
  int i = 0;
  int square = 0;
  
  // Write a while loop here:
  
  while(i<10){
    square = i * i;
    std::cout << i << "  "<<  square << std::endl;
    i++;
  }
}
