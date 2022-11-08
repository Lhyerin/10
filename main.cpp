#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	FILE* fp=NULL;
	
	fp=fopen("simple2.txt","w");
	
	fputc('a',fp);
	fputc('b',fp);
	fputc('c',fp);
	
	fclose(fp);
	return 0;
}

