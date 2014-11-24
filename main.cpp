/*
 * Student ID: 4903077
 * Name: Matthew McAlpine
 * CS2010 Fall 2014
 * Lab Assignment 5
 */

/*
 * This program will take a textfile and count how many times a word shows up.
 * It is not case sensitive.  And counts apostrophies as a valid letter.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;
using std::string;

#define MAX 100

typedef int BOOL;
typedef string WORD;
typedef WORD DICT[MAX];

/*
  you will have to write code for these 5 functions. 
*/

int LocateWord(DICT, WORD);
BOOL FullDictionary(DICT);
BOOL InsertWord(DICT,WORD);
WORD GetNextWord(void);
void DumpDictionary(DICT ,int[]);

/*
  note that these are global variables so that they are already initialized to 0
*/

DICT dictionary;  //your dictionary 
WORD word;        // 
int count[MAX];   //tracks word frequencies



int main (void) {
    int pos;

    while (1) {
       word = GetNextWord();
       if ( word.compare("0") == 0 )  {
           DumpDictionary(dictionary,count);
           break;
       }
       if ((pos = LocateWord(dictionary,word)) >=  0 ) 
           count[pos]++;
       else
           if (!InsertWord(dictionary,word)) cout << "dictionary full " << word << " cannot be added\n";
           else count[LocateWord(dictionary, word)] = 1;
    }
    return 0;
}
