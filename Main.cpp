#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;
#define Green SetConsoleTextAttribute(h, 2)
#define Blue SetConsoleTextAttribute(h, 1)
#define White SetConsoleTextAttribute(h, 7)
#define Red SetConsoleTextAttribute(h, 4)
#define Yellow SetConsoleTextAttribute(h, 6)
/*----------------------------------------------------------------------------------
     Programmer:  Khoa Nguyen
     Date:  10/13/2021
     Description of project: This progra will calculate a simple calculation 
     of an item's sales tax and a grand total. The program will print out 
     a receipt showing the item name, prie, sales tax, and grand total.
----------------------------------------------------------------------------------*/

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

//write a function to print title
void printTitle()
{
	
	Green;
	cout << "|" << "--------------------------------------------" << "|" << endl;
	cout << "|" << setw(45) << setfill(' ') << "|" << endl;
	cout << "|" << setw(45) << setfill(' ') << "|" << endl;
	cout << "|" << setw(45) << setfill(' ') << "|" << endl;
	cout << "|" << setw(36) << setfill(' ');

	Blue;
	cout << "Khoa Nguyen's Sales Tax Program" << setw(10) << setfill(' ');

	Green;
	cout << "|\n";
	cout << "|" << setw(27) << setfill(' ');

	Blue;
	cout << "10/22/2021" << setw(19) << setfill(' ');

	Green;
	cout << "|\n";
	cout << "|" << setw(45) << setfill(' ') << "|" << endl;
	cout << "|" << setw(45) << setfill(' ') << "|" << endl;
	cout << "|" << setw(45) << setfill(' ') << "|" << endl;
	cout << "|" << "--------------------------------------------" << "|" << endl;

	White;







    return;
}



  //Write a function to print the trademark

void printTrademark() {

	Red;
	cout << "     )                       )                                 \n";
	cout << "  ( /(     )              ( /(                                 \n";
	cout << "  )\\()) ( /(          )   )\\()) (  (     (   (       (         \n";

	Yellow;
	cout << "|((_)\\  )\())  (   ( /(  ((_)\\  )\\))(   ))\\  )\\ )   ))\\  (     \n";
	cout << "|_ ((_)((_)\\   )\\  )(_))  _((_)((_))\\  /((_)(()/(  /((_) )\\ )  \n";

	White;
	cout << "| |/ / | |";

	Yellow;
	cout << "(_) ((_)((_)_ ";

	White;
	cout << " | \\| |";

	Yellow;
	cout << "(()(_)(_))(  )(_))(_))  _(_/(  \n";
	White;
	cout << "  ' <  | ' \\ / _ \\/ _` | | .` |/ _` | | || || || |/ -_)| ' \\";
	Yellow;
	cout << ")) \n";
	White;
	cout << " _|\\_\\ |_||_|\\___/\\__,_| |_|\\_|\\__, |  \\_,_| \\_, |\\___||_||_|  \n";
	cout << "                               |___/         |__/              \n";




	cout << "\n" << "\n" << "\n" << "\n";









	return;
}


int main() {

	char firstName[15];
	char itemName[30];
	char itemName2[30];
	char itemName3[30];
	int quantity;
	int quantity2;
	int quantity3;
	float preTax=0, preTax2 = 0, preTax3 = 0,salesTax=0, salesTax2=0, totalCost=0,itemPrice=0, itemPrice2=0, itemPrice3=0;


	int x;
	int y;

	//Print the title

	 printTitle();

    //ask user for name and greet user
	 
		cout << "Please enter your name: ";
		cin >> firstName;
		cout << "\nHello, " << firstName << " what would you be be buying today?\n\n";

		
    //ask user for name of item and price and quantity
	// if statements decides to add another item or not

		cout << "Please enter the name of item (NO SPACES) and the item and price. (Limit of 3 items)\n\n";
			cout << "Item name: ";
			cin >> itemName;
			cout << "$: ";
			cin >> itemPrice;
			cout << "Please enter the quantity of this item: ";
			cin >> quantity;

			cout << endl <<"Another item? (1 = Yes   0 = No): ";
				cin >> x;

				if (x < 1) {

				}

				else {

					cout << endl << "Item name: ";
					cin >> itemName2;
					cout << "$: ";
					cin >> itemPrice2;
					cout << "Please enter the quantity of this item: ";
					cin >> quantity2;

					cout << endl << "Another item? (1 = Yes   0 = No): ";
					cin >> y;


					if (y < 1) {}

					else {

						cout << endl << "Item name: ";
						cin >> itemName3;
						cout << "$: ";
						cin >> itemPrice3;
						cout << "Please enter the quantity of this item: ";
						cin >> quantity3;

					}
				}



		

			system("pause");

	// calculate cost without tax

		
			preTax = itemPrice * quantity;

			if (x > 0) {

				preTax2 = itemPrice2 * quantity2;

				if (y > 0) {

					preTax3 = itemPrice3 * quantity3;

				}

			}

			

			
		

	//calculate sales tax


			if (x > 0) {

				salesTax = preTax + preTax2;

				if (y > 0) {

					salesTax = preTax + preTax2 + preTax3;

				}

			}

			

			else {

				salesTax = preTax;

			}




			salesTax2 = salesTax * 0.075;

	//total cost

			if (x > 0) {

				totalCost = salesTax2 + preTax + preTax2;

				if (y > 0) {

					totalCost = salesTax2 + preTax + preTax2 + preTax3;

				}

			}

			
			else {

				totalCost = salesTax2 + preTax;

			}


			Green;

			cout << endl << "--------------------------------------------------------------------------";

			cout << endl << endl << setprecision(2) << fixed <<  itemName << "(" << quantity << ")" << ": $" << preTax << endl;

			if (x > 0) {

				cout << itemName2 << setprecision(2)<< fixed << "(" << quantity2 << ")" << ": $" << preTax2 << endl;

				if (y > 0) {

					cout << itemName3 << setprecision(2) << fixed<< "(" << quantity3 << ")" << ": $" << preTax3 << endl;

				}

			}




			cout << "\nThe total before tax is: $" << setprecision(2) << fixed << salesTax << endl;
			cout << "\nThe total tax is: $" << setprecision(2)<< fixed << salesTax2 << endl;
			cout << "\nThe total cost is: $" << setprecision(2) << fixed << totalCost << endl;

			cout << endl << "--------------------------------------------------------------------------" << endl;

    //Print the trademark

			printTrademark();

			system("pause");

    return 0;
}