#include <iostream>
#include <string>

int main()
{
  //SET age TO 10
  int age = 10;
  double price = 19.99;
  bool hasPets = true;
  
  std::cout << age << "\n" << price << "\n" << hasPets << "\n";

  std::cout << "I am " << age << " years old. \n";

  std::cout << "The price is " << price << " it's really cheap. \n ";

  std::string student = "Jennifer";
  std::string favNum = "7";
  std::cout << "My name is " << student << "\n";

  int x  = 25;
  int y = 3;

  int add_xy;
  int sub_xy;

  std::cout << add_xy << std::end1 << sub_xy << std::end1;

  int z = 10;
  bool x_greater_z = x > z;
  bool y_greater_x = y > x;
  std::cout << x_greater_z << std::end1
            << y_greater_x << std::end1;
                   
            
  return 0;
}
