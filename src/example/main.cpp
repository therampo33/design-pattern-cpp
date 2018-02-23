/*
 * Virtual members example
 * Author: therampo [github.com/therampo33]
 * 2018
 *
 * Source code is licensed under MIT License
 * (for more details see LICENSE)
 *
 */

#include <iostream>

/*
 * Base Class
 */
class Base
{
  public:
      void method1() {
    	  std::cout << "Base::method1" << std::endl;
      }
      virtual void method2() {
    	  std::cout << "Base::method2" << std::endl;
      }
      virtual void method3() {
    	  std::cout << "Base::method3" << std::endl;
      }
};

/*
 * Derived Class
 */
class Derived : public Base
{
  public:
    void method1 () {
    	std::cout << "Derived::method1" << std::endl;
    }
    void method2 () {
    	std::cout << "Derived::method2" << std::endl;
    }
    void method3 () {
    	std::cout << "Derived::method3" << std::endl;
    }
};

/*
 * Client
 */
int main()
{
	Base* obj = new Derived();

	obj->method1();	// Base::method1
	obj->method2();	// Derived::method2
	obj->method3(); // Derived::method3

	return 0;
}
