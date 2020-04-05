////////////////////////////////////////////////////////////////////////////////
// Main File:        cache2Dclash.c
// This File:        cache2Dclash.c
// Other Files:      cache2Drows.c, cache2Dcols.c, cache1D.c
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


int data[128][8];// global 2D array


int main(int argc, char *argv[]){
    // 100 times iteration
    for (int i = 0; i < 100 ; i ++){
	//iteration of row 
	for ( int  j = 0 ; j < 128 ; j = j + 64){
		//iteration of col
		for (int  k = 0; k < 8; k++){
                   data[j][k] = i + j + k; 
		}
	}
    }
}

