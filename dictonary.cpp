#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;
using std::string;

BOOL InsertWord(DICT dict, WORD word)
{
/* 
  adds word to dictionary , if word can't be added returns 0 else returns 1
*/
}

void DumpDictionary(DICT dict, int count[]) {
/* 
  will sort the dictionary, and display the contents
*/
}

WORD GetNextWord(void){
/* 
   will retrieve next word in input stream. Word is defined just as in assignment #1 
   returns WORD or 0 if no more words in input stream
*/
}

BOOL FullDictionary(DICT dict) {
/* 
   if dictionary is full, return 1 else 0 
 */
}

int LocateWord(DICT dict, WORD word) {
/*
   will determine if dictionary contains word. if found, returns position else returns value < 0
*/
	int count = 0;
	int size = 0; //will store the size of the array.
	int compared = 0;  //will store the result of comparison.
	
	size = sizeof(dict)/sizeof(*dict);
	while (count < size){
		compared = word.compare(dict[count]);
		if (compared == 0){
			return count;
		}
		count++;
	}
	return -1;
	
	
}

void sortDictonary(DICT dict,){
	
	
}
