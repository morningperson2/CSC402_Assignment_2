#include "Huffman_LongestLength.h"

std::vector<std::string> longestLength(std::vector<std::string> stringList)
{
  std::vector<std::string> temp;
  int longest = 0;

  for (int i = 0; i < stringList.size(); i++)
  {
    if (stringList[i].size() > longest)
    {
      temp.clear();
      temp.push_back(stringList[i]);
      longest = stringList[i].size();
    }
    else if (stringList[i].size() == longest)
    {
      temp.push_back(stringList[i]);
    }
  }
  
  return temp;
}