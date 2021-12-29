#include <stdio.h>

int subs(i,ii)
int i;
int ii;
{
	return i - ii;
}


int main(){
	printf("%d\n",subs(10,2));
	return 0;
}