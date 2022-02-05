/******************************************************************************/
/*!
\file   main.cpp
\author Paul Huffman
\par    email: huffmanp4\@nku.edu
\par    Course: CSC402
\par    Section: 001
\par    Assignment: 2
\date   2/05/2022
\brief
  This file contains the implementation of the main function for the
  2nd assignment.
  Hours spent on this assignment: 1
  Specific portions that gave you the most trouble: NONE
*/
/******************************************************************************/
#include <iostream>
#include "Huffman_LongestLength.h"

  /****************************************************************************/
  /*!
    \brief 
      This is the main function it ask the user for some strings, then it will
      pass the vector of strings to longestLength and will then print the 
      longest string or strings.
    
    \return
      This function will always return 0.
  */
  /****************************************************************************/
int main()
{
    // String for text input of user.
  std::string temp = " ";                
    // Bool to check if user is still inputing strings.
  bool check = true;                
    // Vector of strings that contains user input strings.
  std::vector<std::string> testStrings;  
    // Vector of strings that contains the return from longestLength().
  std::vector<std::string> resultString; 

    // Loops while the user is still inputing strings.
  while (check)
  {
     // Prompts the user for a string, and puts that string in temp.
    std::cout << "Enter a string to add to a vector (Type STOP to end): ";
    std::getline(std::cin, temp);
    
      // Checks if the user wants to stop inputing strings.
    if (temp == "STOP" || temp == "stop")
    {
      check = false;
      continue;
    }
      // Adds temp to the end of the testStrings vector.
    testStrings.push_back(temp);
  }

    // Passes testStrings to longestLength() and puts return in resultString.
  resultString = longestLength(testStrings);

    // Checks if there are more than one node in resultString.
  if (resultString.size() > 1)
  {
      // Prints the longest strings.
    std::cout << std::endl << "The longest strings are: " << resultString[0];
    for (int i = 1; i < (int)resultString.size(); i++)
    {
      std::cout << ", " << resultString[i];
    }
  }
    // Prints the longest string.
  else
  {
    std::cout << std::endl << "The longest string is: " << resultString[0];
  }

  std::cout << std::endl;

  return 0;
}