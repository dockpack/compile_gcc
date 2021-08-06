#include <string>
#include <iostream>
#include <type_traits>

int main()
{
   std::cout << "std::is_base_of<std::__sso_string, std::string>::value: " << std::is_base_of<std::__sso_string, std::string>::value << std::endl;
   std::cout << "sizeof(std::string): " << sizeof(std::string) << std::endl;
   if (_GLIBCXX_USE_CXX11_ABI) {
       std::cout << "_GLIBCXX_USE_CXX11_ABI=" << _GLIBCXX_USE_CXX11_ABI << std::endl;
       return 0;
   }else{
       return -1;
   }
}
