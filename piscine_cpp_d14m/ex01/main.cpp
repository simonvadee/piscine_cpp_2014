#include "FruitBox.h"
#include "Banana.h"
#include "Lemon.h"
#include "Lime.h"
#include "LittleHand.h"

int main(void)
{
  FruitBox	test(5);
  FruitBox	test1(5);
  FruitBox	test2(5);
  FruitBox	test3(5);
  Fruit*	lol = new Banana(); 
  Fruit*	mdr = new Lemon(); 
  Fruit*	vtff = new Lime(); 
  LittleHand	tri;
  
  test.putFruit(lol);
  test.putFruit(mdr);
  test.putFruit(vtff);
  std::cout << test.nbFruits() << std::endl;
  // std::cout << test.pickFruit()->getName() << std::endl;
  // std::cout << test.pickFruit()->getName() << std::endl;
  // std::cout << test.pickFruit()->getName() << std::endl;
  test.putFruit(lol);
  test.putFruit(mdr);
  test.putFruit(vtff);
  tri.sortFruitBox(test, test1, test2, test3);
  std::cout << test1.pickFruit()->getName() << std::endl;
  std::cout << test2.pickFruit()->getName() << std::endl;
  std::cout << test3.pickFruit()->getName() << std::endl;
  delete lol;
  delete mdr;
  delete vtff;
  return 0;
}
