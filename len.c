#include <dos.h>


int strslen(s)
char *s;
{
	int pos=0;
	while(s[pos]!=0){
		pos++;
	}
	return pos;
}


void ccprints(c,color,page)
char *c;int color;int page;
{
	union REGS r1;
	union REGS r;
	int ii=strslen(c);
	int i=0;
	for(i=0;i<ii;i++){
		r.h.ah=0x9;
		r.h.bh=(char) 0;
		r.h.bl=(char) color;
		r.h.al=(char) c;
		r.x.cx=1;
		int86(0x10,&r,&r1);
		r.h.ah=0x0E;
		r.h.bh=(char) 0;
		r.h.bl=(char) color;
		r.h.al=(char) c[i];
		r.x.cx=1;
		int86(0x10,&r,&r1);
	}
}



void main(){
	char *c="hello world\r\n";
	int color=0X17;
	int page=0;
	int i=0;
	int iii=0;
	for(iii=0;iii<16;iii++){
		ccprints(c,color,page);
	}
}





