// Attached: HW_1a, 1b, 1c, 1d
// ====================================================
// File: HW_1a.cpp
// ====================================================
//
// Description: 
//	This program calculates the total amount of
//	pay a salesperson has made, including the
//	amount of commission based on their sale
//	amount.
// ====================================================

#include <iostream>
#include <iomanip>
using namespace std;

int getSalesAmt();
int calcCommission(int sales);
int calcPay(int commission);
void displayPay(int sales, int commission, int pay);
char runAgain();

// ==== main ===========================================
//
// =====================================================
int main()
{
	int sales;
	int commission;
	int pay;
	char answer;

	sales = getSalesAmt();
	commission = calcCommission(sales);
	pay = calcPay(commission);
	displayPay(sales, commission, pay);
	answer = runAgain();

	while (answer == 'Y' || answer == 'y')
	{
		sales = getSalesAmt();
		commission = calcCommission(sales);
		pay = calcPay(commission);
		displayPay(sales, commission, pay);
		answer = runAgain();
	}

	return 0;
}						// end of main()
// ===============================================================



// ======= getSalesAmt ============================================
// This function will get the amount of sales made by the user and
// return the value to main.
//
// Input: 
//		A number that will represent the total amount of sales.
//
// Output:
//		An int value, that will be returned and used to calculate
//		the commission and total pay.
// =================================================================

int getSalesAmt()
{
	int sales;
	cout << "Enter monthly sales amount: ";
	cin >> sales;
	return sales;

}					// end of getSalesAmt()
// =================================================================



// ======= calcCommission ===========================================
// This function will calculate the total amount of commission the 
// user has made based on the sales amount and will return that value 
// to main.
//
// Input:
//		A number that will be a representation of the sales amount wil
//		be mulitplied by different percentage amounts depending on the
//		amount entered by the user.
//
// Output: 
//		The commission will be calculated based on the sales amount
//		and returned to main.
// ==================================================================

int calcCommission(int sales)
{
	int commission;
	if (sales > 50000)
	{
		commission = sales * .02;
	}
	if (sales >= 25000 & sales <= 50000)
	{
		commission = sales * .015;
	}
	if (sales < 25000)
	{
		commission = 0;
	}
	return commission;
}					 // end of calcCommission
// =================================================================



// ============ calcPay =============================================
// This function will calculate the users total amount of pay and
// and return that value to main.
//
// Input:
//		A number that will represent the commission will be added to
//		the base pay amount.
//
// Output:
//		The pay will be calculated by adding the base pay amount of 
//		$2,500 to the commission amount that will be passed through.
//		Then this value will be returned to main as the total pay.
// =================================================================

int calcPay(int commission)
{
	int pay;
	pay = 2500 + commission;
	return pay;
}						// end of calcPay()
// =================================================================



// ============= displayPay =========================================
// This function will display the monthly sales amount entered by 
// the user and will display the calulated commission and final pay
// with the base pay amount.
// 
// Input:
//		The number entered by the user for the sales amount and the
//		commission and total pay calculated by the previous functions.
//
// Output:
//		The other values are passed in from the other functions and
//		displayed in a table format with proper spacing.
// =================================================================

void displayPay(int sales, int commission, int pay)
{
	cout << "\n";
	cout << "Monthly Sales: $" << setw(5) << sales << ".00" << "\n";
	cout << "Commission:    $" << setw(5) << commission <<".00" << "\n";
	cout << "Base Pay:      $" << setw(5) << 2500 << ".00" << "\n";
	cout << "Total Pay:     $" << setw(5) << pay << ".00" << "\n";
}				// end of displayPay()
// =================================================================



// =================== runAgain =====================================
// This function will as the user if they would like to repeat the
// program and calculate another total pay amount.
//
// Input:
//		A letter of 'y' or 'n' will be input by the user.
//
// Output:
//		The letter will be taken and returned to main where the
//		user will be able to enter another sales amount or exit
//		the program.
// =================================================================

char runAgain()
{
	char answer;
	cout << "Do it again? (Y/N) ";
	cin >> answer;
	cout << "\n";
	if (answer == 'Y' || answer == 'y')
	{
		return answer;
	}
	if (answer == 'N' || answer == 'n')
	{
		return answer;
	}
}				// end of runAgain()
// ===================================================================

/* ==== OUTPUT =======================================================
Enter monthly sales amount : 65000

Monthly Sales : $65000.00
Commission :    $ 1300.00
Base Pay :	    $ 2500.00
Total Pay :     $ 3800.00
Do it again ? (Y / N) n

	Press any key to continue . . .
=======================================================================*/
