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

//Exercise 1
  int x  = 25;
  int y = 3;

  int add_xy;
  int sub_xy;

  std::cout << add_xy << std::endl << sub_xy << std::endl;

  int z = 10;
  bool x_greater_z = x > z;
  bool y_greater_x = y > x;
  
//Exercise 2: Boolean Variables

bool isSunny = true;
    bool hasUmbrella = false;

    std::cout << "Exercise 2:" << std::endl;
    std::cout << "isSunny && hasUmbrella: " << (isSunny && hasUmbrella) << std::endl;
    std::cout << "isSunny || hasUmbrella: " << (isSunny || hasUmbrella) << std::endl;
    std::cout << "!isSunny: " << (!isSunny) << std::endl;
    std::cout << "!isSunny && !hasUmbrella: " << (!isSunny && !hasUmbrella) << std::endl;

    std::cout << std::endl;

//Exercise 3: Mixing relational and Boolean Logic 
    int n = 7
    double m = 4.0
    bool hasLicense = false

    std::cout << "Exercise 3" << std::endl;
    std::cout << n > m << (n>m);
    std::cout << m_equal_4 = m = 4.0;
    std::cout << 
  return 0;
}
