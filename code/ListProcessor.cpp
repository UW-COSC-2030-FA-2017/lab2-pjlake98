// ListProcessor.cpp

// James Fantin COSC 2030

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

    cows.insertAsLast(3.69);
	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cows.insertAsLast(-2.34);
	cout << "cows list  :  " << cows << endl;
	cout << "cows size  :  " << cows.getSize() << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl;
	cout << "cows size  :  " << cows.getSize() << endl;
	cout << "cows sum   :  " << cows.sum() << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
    cout << "cows size  :  " << cows.getSize() << endl;
	cout << "horses size:  " << horses.getSize() << endl;
	cout << "cows sum   :  " << cows.sum() << endl;
	cout << "horses sum :  " << horses.sum() << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	horses.insertAsLast(.03);
	cows.insertAsFirst(6.78);
	cows.insertAsLast(-2.98);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "cows size  :  " << cows.getSize() << endl;
	cout << "horses size:  " << horses.getSize() << endl;
	cout << "cows sum   :  " << cows.sum() << endl;
	cout << "horses sum :  " << horses.sum() << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "cows size  :  " << cows.getSize() << endl;
	cout << "horses size:  " << horses.getSize() << endl;
	cout << "pigs size  :  " << pigs.getSize() << endl;
	cout << "cows sum   :  " << cows.sum() << endl;
	cout << "horses sum :  " << horses.sum() << endl;
	cout << "pigs sum   :  " << pigs.sum() << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "cows size  :  " << cows.getSize() << endl;
	cout << "horses size:  " << horses.getSize() << endl;
	cout << "pigs size  :  " << pigs.getSize() << endl;
	cout << "cows sum   :  " << cows.sum() << endl;
	cout << "horses sum :  " << horses.sum() << endl;
	cout << "pigs sum   :  " << pigs.sum() << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "cows size  :  " << cows.getSize() << endl;
	cout << "horses size:  " << horses.getSize() << endl;
	cout << "pigs size  :  " << pigs.getSize() << endl;
	cout << "cows sum   :  " << cows.sum() << endl;
	cout << "horses sum :  " << horses.sum() << endl;
	cout << "pigs sum   :  " << pigs.sum() << endl << endl;

	cout << "End of code" << endl;

	return 0;
}

