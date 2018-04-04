#include<iostream>  //for basic input output operations
#include<fstream>   //for operations related to file
using namespace std;

int main()
{   fstream myFile; //object to perform operations on file
    string myFileInput;
	cout<<" Enter Your text here: ";
    getline(cin,myFileInput);   //input for file
	myFile.open("MyTextFile.txt", ios::out);    //open file in write mode
	if(myFile)
	{
    	    myFile<<myFileInput<<endl;  //writing...
    	    cout<<" Data Stored Successful \n";
	}
	else
        cout<<" Error Occurred while Opening File in write mode\n";
    myFile.close(); // close file in write mode
    char ch;
    myFile.open("MyTextFile.txt", ios::in); //open file in read mode

    if(!myFile.is_open())   //if file is not opened
    {
        cout << "Error While Opening File in read mode " << endl;
    }
    else
    {
        cout<<"File Open Successfully: here is the result \n "<<endl;   //file opened
        while(!myFile.eof()) // until end of file is reached
        {   myFile.get(ch); //store character in ch
            cout<<ch;
        }
    }

    myFile.close();// close file in read mode

    return 0;
}