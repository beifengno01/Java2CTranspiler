#include<stdio.h>
#include<stdlib.h>

#include<stdbool.h>

#include "staticlib.h"
#include "my_alloc.h"
typedef struct For For;
void emptyFor ();
void initOnlyFor ();
void condOnlyFor ();
void incOrDecOnlyFor ();
void missingIncOrDecFor ();
void missingCondFor ();
void missingInitFor ();
void forFor ();
void multipleInitOnlyFor ();
void multipleIncOrDecOnlyFor ();
void multipleFor ();
	int main(int argc, char *argv[]){
		missingInitFor();
		forFor();
		multipleFor();


		collect();
		return 0;
	}
	void emptyFor (){
			for(;;){
			}


	}
	void initOnlyFor (){
		int i;
			for(i = 0;;){
			}


	}
	void condOnlyFor (){
		int i;
		i = 0;
			for(;i < 10;){
			}


	}
	void incOrDecOnlyFor (){
		int i;
		i = 0;
			for(;;i++){
			}


	}
	void missingIncOrDecFor (){
		int i;
			for(i = 0;i < 10;){
			}


	}
	void missingCondFor (){
		int i;
			for(i = 0;;i++){
			}


	}
	void missingInitFor (){
		int i;
		i = 0;
			for(;i < 10;i++){
			}
		assertTrue(i == 10);


	}
	void forFor (){
		int i;
			for(i = 0;i < 10;i++){
			}
		assertTrue(i == 10);


	}
	void multipleInitOnlyFor (){
		int i;
		int j;
		int k;
			for(i = 0,j = 0,k = 0;;){
			}


	}
	void multipleIncOrDecOnlyFor (){
		int i;
		int j;
		int k;
		i = 0;
		j = 0;
		k = 0;
			for(;;i++,j++,k++){
			}


	}
	void multipleFor (){
		int i;
		int j;
		int k;
			for(i = 0,j = 0,k = 0;i < 10;i++,j++,k++){
			}
		assertTrue(i == 10);
		assertTrue(j == 10);
		assertTrue(k == 10);


	}
