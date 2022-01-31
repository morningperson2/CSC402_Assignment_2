#include <iostream>
#include "Huffman_LongestLength.h"

int main()
{
  std::string temp = " ";
  bool check = true;

  std::vector<std::string> testStrings;
  std::vector<std::string> resultString;

  while (check)
  {
    std::cout << "Enter a string to add to a vector (Type STOP to end): ";
    std::getline(std::cin, temp);
    
    if (temp == "STOP" || temp == "stop")
    {
      check = false;
      continue;
    }

    testStrings.push_back(temp);
  }

 // resultString = longestLength(testStrings);

  std::cout << "The longest string(s) is: ";

  for (int i = 0; i < testStrings.size(); i++)
  {
    std::cout << testStrings[i] << ", ";
  }

  std::cout << std::endl;

  return 0;
}