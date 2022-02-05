/******************************************************************************/
/*!
\file   Huffman_LongestLength.cpp
\author Paul Huffman
\par    email: huffmanp4\@nku.edu
\par    Course: CSC402
\par    Section: 001
\par    Assignment: 2
\date   2/05/2022
\brief
  This file contains the implementation of the longestLength function for the
  2nd assignment.
  Hours spent on this assignment: 0.5
  Specific portions that gave you the most trouble: NONE
*/
/******************************************************************************/
#include "Huffman_LongestLength.h"

  /****************************************************************************/
  /*!
    \brief
      This function will take in a vector of strings, and it will find the 
      longest string. If more than one string is tied for the longest then the
      vector that will be returned will contain all strings that are tied for 
      the longest.

    \param stringList
      The vector that contains strings that will be checked for length.

    \return
      The vector that contains the longest string or strings.
  */
  /****************************************************************************/
std::vector<std::string> longestLength(std::vector<std::string> stringList)
{
  std::vector<std::string> temp; // This is the vector that will be returned.
  int longest = 0;               // This is used to tracked the longest string.

    // This will iterate through stringList.
  for (int i = 0; i < (int)stringList.size(); i++)
  {
      // This will check if the current string is longer than the longest.
    if ((int)stringList[i].size() > longest)
    {
      // This will clear temp, add the new longest string, and update longest.
      temp.clear();
      temp.push_back(stringList[i]);
      longest = stringList[i].size();
    }
      // This will check if the current string is the same length as longest.
    else if (stringList[i].size() == longest)
    {
        // This will add the current string to temp.
      temp.push_back(stringList[i]);
    }
  }
  
  return temp;
}