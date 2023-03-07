#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
//------------------------
struct Box
{
	int id;
	float width;
	float height;
	float length;
	Box *next;
};

typedef Box *ptrType;

bool insertBox(ptrType & head);
void displayBox(const ptrType head);
//-----------------------------------------
int main()
{
	char answer;
	
	do
	{
		system("cls");

		ptrType head = nullptr;

		cout << "Enter the specifications of different types of boxes." << "\n";
		cout << "Include the number of boxes presently in inventory." << "\n";
		cout << "Enter boxes - (-1 to quit): \n\n";

		bool doAgain = true;

		do
		{
			doAgain = insertBox(head);
		}
		while (doAgain == true);

		cout << "Would you like to see the list of boxes (Y/N)? ";
		cin >> answer;

		if (toupper(answer) == 'Y')
		{
			displayBox(head);
		}
		cout << "Would you like to enter some new records (Y/N)? ";
		cin >> answer;
		} 
		while (toupper(answer) == 'Y');

		cout << "Have a nice day!" << "\n";
		return 0;
}
//---------------------------------------------------
bool insertBox(ptrType &head)
{
	ptrType temp = new Box;
	bool doAgain = true; 
	int idNum = 0;

	cout << "ID Number: ";
	cin >> idNum;

	if (idNum == -1)
	{
		doAgain = false;
	}
	else
	{
		temp->id = idNum;
		cout << "Width: ";
		cin >> temp->width;

		cout << "Height: ";
		cin >> temp->height;

		cout << "Length: ";
		cin >> temp->length;

		cout << "\n";

		doAgain = true;

		temp->next = head;

		head = temp;
	}
	return doAgain;
}
//---------------------------------------------
void displayBox(const ptrType head)
{
	system("cls");
	
	cout << "Types of boxes: \n\n";

	if (head == NULL)
	{
		cout << "List is empty. \n";
		return;
	}
	ptrType temp = head;

	cout << fixed << showpoint << setprecision(2);
	cout << "ID#" << setw(10) << "Width" << setw(10) << "Height" << setw(10) << "Length" << "\n";
	cout << "---------------------------------------------------" << "\n";
	while (temp != NULL)
	{
		cout << temp->id << setw(10) << temp->width << setw(10) << temp->height << setw(10) << temp->length;
		cout << "\n";

		temp = temp->next;
	}
}
/* --------------------- OUTPUT --------------------
Enter the specifications of different types of boxes.
Include the number of boxes presently in inventory.
Enter boxes - (-1 to quit):

ID Number: 53
Width: 3.5
Height: 2.1
Length: 9.63

ID Number: 74
Width: 1.95
Height: 6.74
Length: 8.52

ID Number: 41
Width: 5.5
Height: 4.3
Length: 7.2

ID Number: 82
Width: 7.26
Height: 4.68
Length: 6.98

ID Number: -1
Would you like to see the list of boxes (Y/N)? y

 --------------- (Screen Clears) -------------------------------

 Types of boxes:

 ID#     Width    Height    Length
 ---------------------------------------------------
 82      7.26      4.68      6.98
 41      5.50      4.30      7.20
 74      1.95      6.74      8.52
 53      3.50      2.10      9.63
 Would you like to enter some new records (Y/N)? n
 Have a nice day!
 Press any key to continue . . .
*/