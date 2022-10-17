#include <stdlib.h>
#include <assert.h>
#include "Vour.h"
#include "verilated.h"

int main(int argc, char** argv, char** env) {
VerilatedContext* contextp = new VerilatedContext;
contextp->commandArgs(argc, argv);
Vour* top = new Vour{contextp};
uint64_t a = 64;
// while (!contextp->gotFinish()) { 
while (a--) { 
	int a = rand() & 1;
	int b = rand() & 1;
	top->a = a;
	top->b = b;
	top->eval(); 
	printf("a = %d, b = %d, f = %d\n", a, b, top->f);
	assert(top->f == (a ^ b));
}
delete top;
delete contextp;
return 0;
}
