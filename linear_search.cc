//This program performs a linear search on an integer array

//Beatrix House

#include<iostream>
#include<fstream>
using namespace std;

int searchList( int[], int, int); // function prototype
const int SIZE = 8;

int main()
{
    ifstream inputFile;
    inputFile.open("gradfile.txt");
    int numArr[SIZE];
	int found;
	int number;
	int pos =0;
	
	inputFile >> numArr[pos];
	cout << "The grades read in from the file are: " << numArr[pos] << "." << endl;
	
	while (inputFile.good())
	{
	    pos++;
	    inputFile >> numArr[pos];
	    cout << "The grades read in from the file are: " << numArr[pos] << "." << endl;
	}
	    
    cout << "Enter a number to search for. Enter -99999 to exit." << endl;
    cin >> number;
	    
	    while (number != -99999)
    	{
            
            found = searchList(numArr, SIZE, number);
            if (found == -1)
            {
            	cout << "The number " << number 
                     << " was not found in the list" << endl;
            }
            
            else
            {
            	cout << "The number " << number <<" is in the " << found + 1
            	     << " position of the list" << "." << endl;
            }
            
            cout << "Enter a number to search for. Enter -99999 to exit." << endl;
            cin >> number;
    
    	}
    
    inputFile.close();
	return 0;

}

//*******************************************************************
//                      searchList
//
// task:	      This searches an array for a particular value
// data in:       List of values in an array, the number of 
//                elements in the array, and the value searched for
//                in the array
// data returned: Position in the array of the value or -1 if value
//                not found
//
//*******************************************************************
int searchList( int List[], int numElems, int value)
{
	for (int count = 0;count <= numElems; count++)  
	{
		if (List[count] == value)
                      // each array entry is checked to see if it contains
                      // the desired value.
		 return count; 
                      // if the desired value is found, the array subscript
	               // count is returned to indicate the location in the array
	}
	return -1;	     // if the value is not found, -1 is returned
}
