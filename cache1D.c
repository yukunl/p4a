

////////////////////////////////////////////////////////////////////////////////
// Main File:        cache1D.c
// This File:        cache1D.c
// Other Files:      cache2Drows.c, cache2Dcols.c, cache2Dclash.c
// Semester:         CS 354 Fall 2019
//
// Author:           Yukun Li
// Email:            yli757@wisc.edu
// CS Login:         yukunl
//
/////////////////////////// OTHER SOURCES OF HELP //////////////////////////////
//                   fully acknowledge and credit all sources of help,
//                   other than Instructors and TAs.
//
// Persons:          NA
//              
//
// Online sources:   NA
//                  
//                   
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int data[100000]; // global variable array

int main( int argc, char *argv[]){
   // loop 1d array
  for(int i = 0; i < 100000; i++){
	data[i] = i; 
     }
  return 0; 
}
