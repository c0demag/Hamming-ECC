#include <verilated.h>
#include <iostream>
#include <iomanip>
#include "Vtop_module.h"
#include "Vtop_module__Syms.h"
#include <memory>
#include <cstdlib>

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

int main()
{
  using namespace std;

  std::unique_ptr<Vtop_module> top(new Vtop_module());
  srand(time(NULL));

  top->data = (uint8_t) rand();
  top->eval();
  cout << "in	: " << hex << setw(3) << static_cast<int>(top->data) << endl;
  cout << "enc	: " << hex << setw(3) << static_cast<int>(top->enc)  << endl;
  cout << "dec	: " << hex << setw(3) << static_cast<int>(top->dec)  << endl;
  return 0;
}
