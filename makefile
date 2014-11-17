#Student ID: 4903077
#Name: Matthew McAlpine
#CS2010 Fall 2014
#Lab Assignment 5

dict: main.o dictonary.o
	g++ main.o  dictonary.o -o dict
	
main.o: dictonary.o
	g++ -c main.cpp

dictonary.o:
	g++ -c dictonary.cpp
	
clean:
	rm *.o dict
