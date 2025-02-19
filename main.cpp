#include <iostream>

#define DISCOUNT_01 20.0
#define DISCOUNT_02 30.0
#define DISCOUNT_03 40.0
#define DISCOUNT_04 50.0

float getDiscount(int quantity)
{
  float discount = 0.0;
  if (quantity >= 11 && quantity <= 20)
  {
    discount = DISCOUNT_01;
  }
  else if (quantity >= 21 && quantity <= 50)
  {
    discount = DISCOUNT_02;
  }
  else if (quantity >= 51 && quantity <= 100)
  {
    discount = DISCOUNT_03;
  }
  else if (quantity > 100) 
  {
    discount = DISCOUNT_04;
  }
  else
  {
    discount = 0.0;  
  }
  return discount;
}

int main() {
  int quantity  = 0;
  std::cout << "Quantity: ";
  std::cin >> quantity;
  std::cout << quantity << std::endl;
  float discount = getDiscount(quantity);
  std::cout << "Discount = " << discount << std::endl;

  std::cout.precision(0); //sets the num of decimal places
  std::cout << "Discount = " <<std::fixed << discount << "%" << std::endl;
  
  // printf("Discount = %.0f%%\n",discount);
  // you can use c code in c++
  
  return 0;
}

/*
  FLOATING POINT NOTATION (C++)

  manipulators
    fixed floating point (std::fixed)
    scientific floating point (std::scientific)
    hex floating points (std::hexfloat)
    default floating point (std::defaultfloat)
  
*/