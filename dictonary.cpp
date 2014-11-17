/*
 * Student ID: 4903077
 * Name: Matthew McAlpine
 * CS2010 Fall 2014
 * Lab Assignment 5
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

#define MAX 100

using namespace std;
using std::string;

typedef int BOOL;
typedef string WORD;
typedef WORD DICT[MAX];

BOOL InsertWord(DICT dict, WORD word){
/* 
  adds word to dictionary , if word can't be added returns 0 else returns 1
*/
	//Assumes the word has already been tested for existence.
	//Will return 0 if the dictonary is full.
	BOOL FullDictionary(DICT dict);
	int LocateWord(DICT dict, WORD word);
	
	int count = 0;
	int size = MAX;
	int compared = 0;
	int location = 0;  //Will store location of word to be entered.
	
	
	if(FullDictionary(dict)){
		return 0;
	}
	location = LocateWord(dict, "");
	dict[location] = word;
	return 1;
	
	
	//Well the following didn't work for some reason.  Trying something else.
	/*
	while(count < size){
		compared = dict[count].compare("");
		if (compared == 0){
			dict[count] = word;
			return 1;
		}
		count++;
	}
	
	return 0;
	*/

}

void DumpDictionary(DICT dict, int count[]) {
/* 
  will sort the dictionary, and display the contents
*/
	//TODO: touch up formating.
	
	int size = 0;
	int c = 0; //iterator for loop below.  Would've named it count, but that's used already.
	
	//TODO: Dictonary sort function goes here.
	
	size = MAX;
	cout << '\n'; //New line just to be clean and safe.
	cout << "Dictonary dump:" << '\n';
	while(c < size){
		cout << count[c];
		cout << ": ";
		cout << dict[c];
		cout << '\n';
		
		c++;
	}
	
	return;
}

WORD GetNextWord(void){
/* 
   will retrieve next word in input stream. Word is defined just as in assignment #1 
   returns WORD or 0 if no more words in input stream
*/
	char ch;
	string out;
	
	out = "";
	
	while(cin.good()){
		ch = cin.get();
		ch = tolower(ch);
		if (isalpha(ch)){
			out = out + string(1, ch);
			
			
		}else{
			if(out != ""){
				return out;
			}
		}
		
		
	}
	return "0";

}

BOOL FullDictionary(DICT dict) {
/* 
   if dictionary is full, return 1 else 0 
 */
	
	int size = MAX;
	int compared;
	int location = 0;
	
	int LocateWord(DICT dict, WORD word);
	
	location = LocateWord(dict, "");
	if(location == (size - 1)){
		return 1;
	}
	return 0;
	
	//This part didn't work for somereason, trying something else.
	/*
	compared = dict[size - 1].compare("");
	if (compared == 0){
		return 0;
	}
	return 1;
	*/
	
}

int LocateWord(DICT dict, WORD word) {
/*
   will determine if dictionary contains word. if found, returns position else returns value < 0
*/
	/*
	 * This function works by itterating through the dictionary.
	 * It is case sensitive.
	 */
	
	int count = 0;
	int size = 0; //will store the size of the array.
	int compared = 0;  //will store the result of comparison.
	
	size = MAX;
	while (count < size){
		compared = word.compare(dict[count]);
		if (compared == 0){
			return count;
		}
		count++;
	}
	return -1;
	
	
}

void sortDictonary(DICT dict){
	/*
	 * Sorts the dictonary.
	 */
	int pos1 = 0;
	int pos2 = 0;
	int size = 0;
	
	size = sizeof(dict)/sizeof(dict[0]);
	//TODO: write actual sort.
	
}
