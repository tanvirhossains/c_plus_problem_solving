/* File Handling with C++ using ifstream & ofstream class object*/
/* To write the Content in File*/
/* Then to read the content of file*/
#include <iostream>

/* fstream header file for ifstream, ofstream,
fstream classes */
#include <fstream>

using namespace std;

// Driver Code
int main()
{
	// Creation of ofstream class object
	ofstream writeText;

	string text;

	// by default ios::out mode, automatically deletes
	// the content of file. To append the content, open in ios:app
	// writeText.open("sample.txt", ios::app)
	writeText.open("sample.txt",  ios::app);

	// Execute a loop If file successfully opened
	while (writeText) {

		// Read a Line from standard input
		getline(cin, text);

		// Press -1 to exit
		if (text == "done"){
            cout<< "enter your number code : ";
			getline(cin, text);

            writeText << text << endl;
            cout<< "do you want to write more y/n : ";
            getline(cin, text);
            if(text == "n"){
			break;

            }
			cout<< " ok wirte :" << endl ;

			getline(cin, text);
			 if(text == "-1"){
                break;
			}
            writeText << text << endl ;
		}

		// Write text in file
		writeText << text << endl ;
	}

	writeText << " so do i !!!! " << endl ; //
	// Close the File
	writeText.close();

	// Creation of if stream class object to read the file
	ifstream readText;

	// by default open mode = ios::in mode
	readText.open("sample.txt");

	// Execute a loop until EOF (End of File)
	while (getline(readText, text)) {

		// Print text (read from file) in Console
		cout << text << endl;
	}

	// Close the file
	readText.close();

	return 0;
}

