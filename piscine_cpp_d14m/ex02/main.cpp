#include "FruitBox.h"
#include "Banana.h"
#include "Lemon.h"
#include "Lime.h"
#include "LittleHand.h"
#include "Coconut.h"

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
  Coconut*      one = new Coconut;
  Coconut*      two = new Coconut;
  
  FruitBox* const*	jojo;
  Coconut** coco = new Coconut*[12];

  coco[0] = one;
  coco[1] = two;
  coco[2] = one;
  coco[3] = one;
  coco[4] = one;
  coco[5] = one;
  coco[6] = one;
  coco[7] = one;
  coco[8] = one;
  coco[9] = one;
  coco[10] = one;
  coco[11] = NULL;
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
  std::cout << std::endl << std::endl << std::endl;
  jojo = tri.organizeCoconut(coco);
  std::cout << jojo[0]->nbFruits() << std::endl;
  std::cout << jojo[1]->nbFruits() << std::endl;
  delete lol;
  delete mdr;
  delete vtff;
  return 0;
}
