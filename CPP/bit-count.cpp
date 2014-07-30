// bitset::count
#include <iostream>       // std::cout
#include <string>         // std::string
#include <bitset>         // std::bitset

int main ()
{
	unsigned long long l=18446744073709551614;
  std::bitset<64> foo(l);
  
  
 // std::cout << (foo^=bar).count();
  std::cout << l << " has ";
  std::cout << foo.count() << " ones and ";
  std::cout << (foo.size()-foo.count()) << " zeros.\n";

  return 0;
}
