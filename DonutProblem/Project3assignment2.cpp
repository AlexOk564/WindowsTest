/* ----------------------------------------------------
 Programmer : Alex Tran
 Date due : Sept 13, 2020
 Description : This program will calculate how many donuts everyone will get 
 and how many will be leftover.
 ---------------------------------------------------- */

#include <iostream>
using namespace std;

int main()
{
    int people, donuts, eachGet, leftOver;

    cout << "How many donuts will you buy?";
    cin >> donuts;

    cout << "How many people are there?";
    cin >> people;

    eachGet = donuts / people;

    leftOver = donuts % people;

    cout << "Number of donuts = " << donuts << endl
         << "Number of people = " << people << endl
         << "Each person gets " << eachGet << " donuts" << endl
         << "There will be " << leftOver <<" donuts left";
  
    return 0;
}


