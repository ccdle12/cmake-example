#include <iostream>
#include "hello/hello.h"
#include "blah/blah.h"

int main() {
  PrintHello();
  int res = Sum(3, 4);

  std::cout << "Result: " << res << std::endl;
  return 0;
}
