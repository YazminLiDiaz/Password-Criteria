IPO CHART:

INPUT
    Allow the user to enter a password
    Allow the user to enter the password again to check if the password meets the criteria
PROCESSING
    -Calling the isLongEnough function to check if the password have a length of least six characters long.
    -Calling the upper case function and the lower case function to check if the password contains 
	 at least one uppercase letter and at least one lowercase letter.
    -Calling the isDigit function to check if the password have at least one digit number. 
OUTPUT
     Display a message telling the user why the password is sufficient or not sufficient.

*/

#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;


bool isLongEnough(string str);
bool containsUpperCase(string str);
bool containsLowerCase(string str);
bool containsDigit(string str);


int main()
{
	string password;
	
	//Asking the user to enter a password
	cout << "Enter the password to check (or Q to quit): ";
	cin >> password;
	
	while (password != "Q" && password != "q")
	{
	
	//Determine if the user meets the password criteria
    if(isLongEnough(password) == true && containsUpperCase(password) == true 
	&& containsLowerCase(password) == true && containsDigit(password) == true )

	    {
	     
	       cout << "The password entered " << password << " is OK." << endl;

	    }  	   
    
    //If the password does not meet the criteria, a message would tell the user 
	//why the password is sufficient or not sufficient.
	
	//If the password does not have the length criteria, then a message
	//would tell the user the password must be at least six characters long
	if(isLongEnough(password) == false)
	    {
		    cout << "Password must be at least six characters long." << endl;
	        
		}
	
	//A message display for user if the password does not have both lower case and upper case letters
	if(containsUpperCase(password) == false || containsLowerCase(password) == false)
	
	    {
		    cout << "Password must have both lower case and upper case letters." << endl;
	
		} 
	
	//A message display for user if the password does not have at least one digit
	if(containsDigit(password) == false)
	    {
	        cout << "Password must have at least one digit." << endl;
		
		}
    
	cout << "\n"; 
	cout << "Enter a password to check again (or Q to quit): ";
    cin >> password;
	cin.ignore();
	
   }

   return 0;
}


// A function for length to check if the password have
// a length of six characters long
bool isLongEnough(string password)
{	
	if(password.length() >= 6)
	    return true;
	return false;
	
}

// A function for upper case to check if the password has 
// at least one upper case letter
bool containsUpperCase(string password)
{
	for(int i = 0; i < password.length(); i++)
		if(isupper(password[i]))
			return true;
	return false;
	
}

// A function for lower case to check if the password have
// at least one upper case letter
bool containsLowerCase(string password)
{
	for(int k = 0; k < password.length(); k++)
		if(islower(password[k]))
			return true;
	return false;
	
}


//A function for digit to check if the password have 
// at least one digit number
bool containsDigit(string password)
{
	for(int i = 0; i < password.length(); i++)
		if(isdigit(password[i]))
			return true;
	return false;
}
