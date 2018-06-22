#include"complexNo.h"
int main()
{
	
	complexNo z1(5,6);
	complexNo z2(2,2);
	complexNo z3(z2);

	z3=z1.add(z2);
	z3.display();
	z3=z1+z2;
	z3.display();
	
}
