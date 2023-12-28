#include <iostream>
#include <string>
#include <unordered_map>

int main ()
{
  std::unordered_map<int ,int> mymap;

  //mymap.at(4) = 3396;
  mymap.insert({6,5});

  //for (auto& x: mymap) {
  //  std::cout << x.first << ": " << x.second << std::endl;
  //}
  
  std::cout << mymap[1000] << std::endl;

  return 0;
}