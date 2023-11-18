#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int i=10;
	char c='a';
	
	int*iptr=&i;
	char*cptr=&c;
	int*iptr2=iptr;
	
	printf("i:%d,iptr:%p\n",i,(void*)iptr);
	printf("c:%d,cptr:%p\n",c,(void*)cptr);
	printf("iptr2:%p,value:%d\n",(void*)iptr,*iptr2);
	
	
	return 0;
}
