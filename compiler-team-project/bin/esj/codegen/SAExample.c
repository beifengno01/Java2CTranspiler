#include<stdio.h>
#include<stdlib.h>

#include<stdbool.h>

#include "staticlib.h"
#include "my_alloc.h"
typedef struct SAExample SAExample;
void ae (int, int);
void vbe (int, int);
void lv ();
	int main(int argc, char *argv[]){


		collect();
		return 0;
	}
	void ae (int a, int b){
		int x;
		int y;
		x = a + b;
		y = a * b;
			while(y > a + b){
				a = a + 1;
				x = a + b;

			}


	}
	void vbe (int a, int b){
		int x;
		int y;
			if(a > b){
				x = b - a;
				y = a - b;
		 
			}
			else{
				y = b - a;
				x = a - b;

			}


	}
	void lv (){
		int x;
		int y;
		int z;
		x = 2;
		y = 4;
		x = 1;
			if(y > x){
				z = y;
		 
			}
			else{
				z = y * y;

			}
		x = z;


	}
