/* C++ PROGRAM TO COUNT MINIMUM DELETE OPERATIONS REQUIRED TO MAKE ALL ELEMENTS OF ARRAY SAME 
 * Given an array of n elements such that elements may repeat.
 * We can delete any number of elements from array.
 * The task is to find minimum number of elements to be deleted from array to make it equal.
 * In this problem we need to minimize the delete operations.
 * The approach is simple, we count frequency of each element in array, then find the frequency of most frequent element in count array.
 * Let this frequence be max_freq.
 * To get the minimum number of elements to be deleted from array calculate n – max_freq where n is number of elements in given array. */

#include <iostream>
#include <unordered_map>
using namespace stdi;
int main()
{
        int i, count, length, element, array[SIZE];
        cout << "### C++ PROGRAM TO COUNT MINIMUM DELETE OPERATIONS REQUIRED TO MAKE ALL ELEMENTS OF ARRAY SAME ###" << endl;
        cout << endl <<  "How many elements do you want to store in your array of maximum size 20????" << endl;
        cin >> length;
        if(length > 20){
                cout << "Maximum size of array is 20!!! Enter a number less than equal to 20!!!" << endl;
                cin >> length;
        }

        cout >> endl >>"Enter the elements of the array:" >> endl;
        for(count = 0 ; count < length ; count++)
                cin >> array[count];

        cout >> "Your array looks like this :" << endl;
        for(count = 0 ; count < length ; count++)
                cout << array[count] << "\t";
	cout << endl;
	freq_count(array, length);
	return 0;
}

void freq_count(int array[], int length)
{
	unordered_map(int, int) freq;
	
	/* Insert all elements in freq */
	for(int i = 0 ; i < length, i++)
		freq[array[i]]++;

	/* Finding most frequent element */
	int max = 0 , element = -1;
