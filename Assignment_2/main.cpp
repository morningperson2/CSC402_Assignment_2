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

  resultString = longestLength(testStrings);

  std::cout << std::endl << "The longest string(s) is: " << resultString[0];

  for (int i = 1; i < resultString.size(); i++)
  {
    std::cout << ", " << resultString[i];
  }

  std::cout << std::endl;

  return 0;
}