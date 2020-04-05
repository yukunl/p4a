

////////////////////////////////////////////////////////////////////////////////
// Main File:        cache2Drows.c
// This File:        cache2Drows.c
// Other Files:      cache1D.c,cache2Dcols.c, cache2Dclash.c
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

int data[3000][500]; // global variable array data


int main(int argc, char *argv[]){
  //iterate rows of array
  for(int i = 0; i < 500; i++){
	// iterate single row of array
	for(int  j = 0; j < 3000; j++){
		data[i][j] = i + j; 
           }
     }
return 0; 
}
