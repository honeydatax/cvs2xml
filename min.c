#include <stdio.h>

int min(a,b)
int a;
int b;
  {
    return (a < b) ? a : b;
  }

int main(){
	printf("%d\n",min(50,210));
	return 0;
}