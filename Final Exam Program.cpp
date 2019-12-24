/*
Christian Fitzgerald
Final Exam Program
5/17/2017
Description:
Write a program that makes an array of 25 random integers each from 3 to 7
(use your function randint() to generate these numbers).
Your program
A) declares the array in the main (you are not allowed to use global variables!),
B) initializes the above array to random values 3 to 7 using your randint() function
C) and then calls the functions with the provided prototypes to do the following:
show the original array, 
show the array in reverse, 
shows the lowest value in the array,
shows the highest value in the array, 
shows the sum of all numbers in the array, 
shows the average of all number in the array
shows how many times the number 5 appears in the array
shows the difference between the First and Last elements of the array
shows the elements of the array before a specified index
shows the message "I am now done with CSS1! :)"
*/

#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;

void showArray (int a[ ],int size); // shows the array in the format "int a [ ] = { 3, 7, 4, ... ,5, 6, 3, 4, 7 } "
void showReverse (int a[ ],int size); // shows the array in reverse using the format "int a [ ] = { 7, 4, 3, 6, 5, ... , 4, 7, 3 } "
int lowest(int a[ ],int size); // finds and returns the lowest value in the array (should be 7)
int highest(int a[ ],int size); // finds and returns the highest value in the array (should be 3)
int sumArray(int a[ ],int size); // calculates and returns the sum of all values in the array
float averageVal(int a[ ],int size); // calculates and returns the average of all values in the array
int count5(int a[ ],int size); // returns how many times the number 5 appears in the array
int firstMinusLast (int a[ ], int size); // returns the difference between the First Array Element - Last Array Element
void showBeforeIndex(int a[ ], int size,int index); // shows all array values before a specified index
void done ( ); // a function that shows the message "I am now done with CSS1! :) 
int randint(int min,int max); // a function that returns a random integer between min and max

int main()
{
    int index, x;
    int a[25];
    for(int i=0; i < 25; i++)
    {
        a[i] = randint(3,7);
    }
    showArray(a,25);
    showReverse(a,25);
    lowest(a,25);
    highest(a,25);
    sumArray(a,25);
    averageVal(a,25);
    count5(a,25);
    firstMinusLast(a,25);
    showBeforeIndex(a,25,3);
    done();
}

void showArray (int a[], int size)
{
    int i;
    cout << "Original Array = {";
    for (i=0; i < size - 1; i++)
    {
        cout << a[i] << ",";
    }
    cout << a[i] << "}" << endl;
}

void showReverse (int a[], int size)
{
    int i;
    cout << "Reversed Array = {";
    for (i=size-1; i > 0; i--)
    {
        cout << a[i] << ",";
    }
    cout << a[i] << "}" << endl;
}

int lowest (int a[],int size)
{
    int smallest = a[0];
    for (int i=0; i < 25; i++)
    {
        if(a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    cout << "Lowest value is: " << smallest << endl;
}

int highest(int a[],int size)
{
    int greatest = a[0];
    for (int i=0; i < 25; i++)
    {
        if(a[i] > greatest)
        {
            greatest = a[i];
        }
    }
    cout << "Highest value is: " << greatest << endl;
}

int sumArray(int a[],int size)
{
    int sum = 0;
    for(int i=0; i < 25; i++)
    {
        sum += i;
    }
    cout << "The sum of all array elements is: " << sum << endl;
}

float averageVal(int a[],int size)
{
    int count = 0;
    int sum = 0;
    for(int i =0; i < 25; i++)
    {
        count++;
        sum += i;
    }
    double ave = (sum / count);
    cout << "The average of all array elements is: " << ave << endl;
}

int count5(int a[],int size)
{
    int count5 = 0;
    for(int i=0; i < 25; i++)
    {
        if (i == 5)
        {
            count5++;
        }
    }
    cout << "The number five appears" << count5 << "times" << endl;
}

int firstMinusLast(int a[],int size)
{
    int difference = (a[0] - a[24]);
    cout << "The difference between the first and last array elements is: ";
    cout << difference << endl;
}

void showBeforeIndex(int a[],int size,int index)
{
    cout << "The array values before index " << index << " are: ";
    for(int i=0; i < index; i++)
    {
        cout << i;
        if(i<index - 1)
        {
            cout << ",";
        }
    }
    cout << endl;
}

void done ()
{
    cout << "I am now done with CSS1! :)";
}

int randint(int min, int max)
{
    int iseed=time(NULL);
    srand(iseed);
    int randint = min + rand() % (max-min+1);
}

/* === OUTPUT ===

*/
