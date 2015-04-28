using namespace std;
#include <iostream>
#include <cmath>

//Matthew Scheeler
//CSC345-80
//Homework 0

//Prototype functions

//Declare twice
int twice (int);

//Delcare square
int square (int);

//Declare once
int once (int);

//Declare i
int i;

//Main function
main(){
    int x = 3;
    int y = square(x) + twice(x) + once(x);  //y == 45, not 18    9 + 18 + 18
    cout << y << endl;						 //prints 45, not 18
}

//Square function using x
int square(int x){
    i = i+(x*x);
    return i;
}

//Twice function using x
int twice(int x){
	i = (2*i);
	return i;
}

//Once function using x
int once(int x){
	return i;
}

