#include <stdio.h>

void main(){
	int num = 5;
	const int limit = 500;
	int *pi;
	const int *pci;

	pi = &num;
	pci = &limit;
	printf("%d\n", *pci);
	pci = &num;
	printf("%d\n", *pci);
}