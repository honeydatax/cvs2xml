#include <stdio.h>
 
int neg(a)
int a;
{
	return (1024*32)-a ;
}
int main(){
	int i=0;
	for(i=0;i<15;i++){
		printf("%d<<%d\n",i,neg(i));
	}
	return 0;
}