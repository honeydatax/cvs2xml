#include <stdio.h>

int mods(i, ii)
int i;
int ii;
{
	return i % ii;
}


int main(){
	printf("%d\n",mods(16,5));
	return 0;
}