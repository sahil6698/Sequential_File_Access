#include<iostream>
#include<fstream>
using namespace std;

int main()
{   fstream myFile;
    string myFileInput;
	cout<<" Enter Your text here: ";
    getline(cin,myFileInput);
	myFile.open("MyTextFile.txt", ios::out);
	if(myFile)
	{
    	    myFile<<myFileInput<<endl;
    	    cout<<" Data Stored Successful \n";
	}
	else
        cout<<" Error Occurred while Opening File in write mode\n";
    myFile.close(); // close file in write mode
    char ch;
    myFile.open("MyTextFile.txt", ios::in); //open file in read mode

    if(!myFile.is_open())
    {
        cout << "Error While Opening File in read mode " << endl;
    }
    else
    {
        cout<<"File Open Successfully: here is the result \n "<<endl;
        while(!myFile.eof())
        {   myFile.get(ch);
            cout<<ch;
        }
    }

    myFile.close();

    return 0;
}