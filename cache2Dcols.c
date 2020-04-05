
////////////////////////////////////////////////////////////////////////////////
// Main File:        cache2Dcols.c
// This File:        cache2Dcols.c
// Other Files:      cache2Drows.c, cache1D.c, cache2Dclash.c
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


int data[3000][500]; //2d array global variable 
 
int main(int argc, char *argv[]){
  // iterate col
  for(int i = 0; i < 500; i++){
        // iterate row
        for(int  j = 0 ; j < 3000 ; j++){
                data[j][i] = i + j;
           }
     }
  return 0;
}

