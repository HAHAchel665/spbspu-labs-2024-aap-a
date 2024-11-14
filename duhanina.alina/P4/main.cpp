#include "functionStr.h"
#include <iostream>
#include <cstddef>

int main()
{
  size_t size = 20;
  char* str = new char[size + 1];
  if (str == nullptr)
  {
    delete[] str;
    std::cerr << "Error memory\n";
    return 1;
  }
  str[size] = '\0';
  char c = '\0';
  size_t index = 0;
  while (std::cin >> c && c != '\n')
  {
    if (index >= (size - 1))
    {
      size *= 2;
      char* newStr = new char[size + 1];
      if (str_new == nullptr)
      {
        delete[] str;
        delete[] str_new;
        std::cerr << "Error memory\n";
        return 1;
      }
      newStr = duhanina::createNewArray(str, newStr);
      str = newStr;
    }
    str[index++] = c;
  }
  str[index] = '\0';
  if(str[0] == '\0')
  {
    delete[] str;
    std::cerr << "Empty string\n";
    return 1;
  }
  char* missing = new char[27];
  duhanina::shrSym(str, missing);
  std::cout << missing << "\n";
  delete[] str;
  delete[] missing;
  return 0;
}
