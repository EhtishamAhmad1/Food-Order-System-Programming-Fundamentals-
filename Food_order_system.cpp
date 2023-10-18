// // // // // // // // // // // //                 PRESENTED BY                 \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ 
                 //  ASAD  MANZOOR  032                  &                   EHTISHAM AHMAD 031  \\
                 //                              GROUP   #    24                                  \\  
// // // // // // // // // // // //                 PRESENTED TO                  \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\
                  //                             *SIR IMRAN KHALID*                              \\

#include<iostream>
#include<string>

using namespace std;

int totalbill = 0; // assigned variable to get total bill of orders altogether.


					 /*Its a separate function, it contains loop which was to be
					 used in every selection part so we write it here and call it later*/

int GetOptionNo(int maxsize)
{
	int option;
	cin >> option;
	while (option > maxsize)
	{
		cout << " Please Choose Correct Option: " << endl;
		cin >> option;
	}
	return option;
}
void process()
{

	cout << "\n\t\t|-------------------------------------------------------|\n";
	cout << "\t\t|                   ONLINE FOOD ORDER                   |\n";
	cout << "\t\t|-------------------------------------------------------|\n";
	cout << "\n\t\t\t    |----------------------------|\n";
	cout << "\t\t\t    |            MENU            |\n";
	cout << "\t\t\t    |----------------------------|\n";

	cout << endl;

start:         ////start is used for goto statement

	string food[5] = { "Burger","Fries","Pizza","Soft drinks","Ice-Cream" };

	cout << "Items are: " << endl;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "-" << food[i] << endl;
	}
	cout << endl;



	char begin;
	int bill;
	int option_no;
	int select;
	int quantity;

	//We initialized these values to avoid run time error in program 

	int lengthOfBurgers = 4;
	int lengthOfFries = 3;
	int lengthOfPizza = 3;
	int lengthOfPizzaType = 3;
	int lengthOfSoft = 3;
	int lengthOfSoftType = 3;
	int lengthOfIce = 5;

	/*string price[5] = { "100","50","250","80","25" };*/

	string burgers[4] = { "-Chicken Burger","-Zinger Burger","-Ande Wala Burger","-Chicken Cheese Burger" };
	string fries[3] = { "-Small","-Medium","-Large" };
	string Pizza[3] = { "-Small","-Medium","-Large" };
	string Pizzatype[3] = { "-Chicken Supreme","-Chicken Fajita","-Chicken Tikka" };
	string soft[3] = { "-Half Litre","-Litre","-1.5 Litre" };
	string softtype[3] = { "-Coca-Cola","-7up","-Marinda" };
	string Ice[5] = { "-Chocolate","-Vanilla","-Caramel","-Mango","-Strawberry" };

	int priceb[4] = { 130,150,60,180 };
	int pricef[3] = { 30,60,100 };
	int pricep[3] = { 250,550,750 };
	int prices[3] = { 50,75,100 };
	int pricei[5] = { 80,80,80,80,80 };

	cout << "\"WELCOME DEAR CUSTOMER\"  " << endl;
	cout << "\t Please Select Your Order: ";
	cin >> select;
	///////////burger/////////////
	if (select == 1)
	{
		cout << "What Type Of Burger You Want" << endl;
		for (int i = 0; i < 4; i++)
		{
			cout << i + 1 << burgers[i] << "-Rs " << priceb[i] << endl;
		}

		option_no = GetOptionNo(lengthOfBurgers); /*we are calling the function on top which contains max
												   length of arrays to avoid run time error during output*/



		if (option_no == 1)
		{
			cout << "You have selected Chicken Burger" << endl;
			cout << "How Many Do You Want: ";
			cin >> quantity;

			bill = 130 * quantity;
			cout << "Your Bill is " << bill << " Rs:" << endl;
			totalbill += bill;   //total=total+bill
		}
		else if (option_no == 2)
		{
			cout << "You have selected Zinger Burger" << endl;
			cout << "How Many Do You Want: ";
			cin >> quantity;
			bill = 150 * quantity;
			cout << "Your Bill is " << bill << " Rs:" << endl;
			totalbill += bill;
		}
		else if (option_no == 3)
		{
			cout << "You have selected Ande Wala Burger" << endl;
			cout << "How Many Do You Want: ";
			cin >> quantity;
			bill = 60 * quantity;
			cout << "Your Bill is " << bill << " Rs:" << endl;
			totalbill += bill;
		}
		else if (option_no == 4)
		{
			cout << "You have selected Chicken Cheese Burger" << endl;
			cout << "How Many Do You Want: ";
			cin >> quantity;
			bill = 180 * quantity;
			cout << "Your Bill is " << bill << " Rs:" << endl;
			totalbill += bill;
		}
		cout << "Would you like to order anything else? Y / N:";
		cin >> begin;
		if (begin == 'Y' || begin == 'y')
		{
			cout << endl;
			goto start;
			//return 0;
		}


	}

	///////////burger/////////////


	//////////fries/////////////

	else if (select == 2)
	{
		cout << "You Have Selected Fries" << endl;
		for (int i = 0; i < 3; i++)
		{
			cout << i + 1 << fries[i] << "-Rs" << pricef[i] << endl;
		}
		cout << "What Fries do you want ? " << endl;

		option_no = GetOptionNo(lengthOfFries);           /////function called


		if (option_no == 1)
		{
			cout << "You Have Selected Small Fries" << endl;
			cout << "How Many Do You Want: ";
			cin >> quantity;
			bill = 30 * quantity;
			cout << "Your Bill is " << bill << " Rs:" << endl;
			totalbill += bill;
		}
		else if (option_no == 2)
		{
			cout << "You Have Selected Medium Fries" << endl;
			cout << "How Many Do You Want: ";
			cin >> quantity;
			bill = 60 * quantity;
			cout << "Your Bill is " << bill << " Rs:" << endl;
			totalbill += bill;
		}

		else if (option_no == 3)
		{
			cout << "You have selected Large" << endl;
			cout << "How Many Do You Want: ";
			cin >> quantity;
			bill = 100 * quantity;
			cout << "Your Bill is " << bill << " Rs:" << endl;
			totalbill += bill;
		}

		cout << "Would you like to order anything else? Y / N:";
		cin >> begin;
		if (begin == 'Y' || begin == 'y')
		{
			cout << endl;
			goto start;
			//return 0;
		}

	}

	//////////fries/////////////



	//////////Pizza/////////////

	else if (select == 3)
	{
		cout << "You have selected pizza" << endl;
		cout << "What flavour Do you Want: " << endl;

		for (int i = 0; i < 3; i++)
		{
			cout << i + 1 << Pizzatype[i] << endl;
		}
		cout << endl;

		option_no = GetOptionNo(lengthOfPizzaType);          /////function called

		if (option_no == 1 || option_no == 2 || option_no == 3)
		{
			cout << "What size pizza do you want ? " << endl;
			cout << "\t Pick your choice: " << endl;

			for (int i = 0; i < 3; i++)
			{
				cout << i + 1 << Pizza[i] << "-Rs" << pricep[i] << endl;
			}



			option_no = GetOptionNo(lengthOfPizza);         //////function called

			if (option_no == 1)
			{
				cout << "You have selected small" << endl;
				cout << "How Many Do You Want: ";
				cin >> quantity;
				bill = 250 * quantity;
				cout << "your bill is " << bill << " Rs" << endl;
				totalbill += bill;
			}
			else if (option_no == 2)
			{
				cout << "You have selected Medium" << endl;
				cout << "How Many Do You Want: ";
				cin >> quantity;
				bill = 550 * quantity;
				cout << "your bill is " << bill << " Rs" << endl;
				totalbill += bill;
			}

			else if (option_no == 3)
			{
				cout << "You have selected Large" << endl;
				cout << "How Many Do You Want: ";
				cin >> quantity;
				bill = 750 * quantity;
				cout << "your bill is " << bill << " Rs" << endl;
				totalbill += bill;
			}

			cout << "Would you like to order anything else? Y / N:";
			cin >> begin;
			if (begin == 'Y' || begin == 'y')
			{
				cout << endl;
				goto start;
				//return 0;
			}
		}
	}

	//////////Pizza/////////////


	//////////Soft drink/////////////

	else if (select == 4)
	{

		cout << "You have selected Soft drink" << endl;

		for (int i = 0; i < 3; i++)
		{
			cout << i + 1 << softtype[i] << endl;
		}
		cout << endl;


		cout << "What flavour Do you Want: ";

		option_no = GetOptionNo(lengthOfSoftType);       //////function called

		if (option_no == 1 || option_no == 2 || option_no == 3)
		{

			cout << "What drink do you want ? " << endl;
			cout << "\t Pick your choice: " << endl;

			for (int i = 0; i < 3; i++)
			{
				cout << i + 1 << soft[i] << "-Rs " << prices[i] << endl;
			}


			option_no = GetOptionNo(lengthOfSoft);         /////function called


			if (option_no == 1)
			{
				cout << "You have selected Half Litre" << endl;
				cout << "How Many Do You Want: ";
				cin >> quantity;
				bill = 50 * quantity;
				cout << "your bill is " << bill << " Rs" << endl;
				totalbill += bill;
			}
			else if (option_no == 2)
			{
				cout << "You have selected Litre" << endl;
				cout << "How Many Do You Want: ";
				cin >> quantity;
				bill = 75 * quantity;
				cout << "your bill is " << bill << " Rs" << endl;
				totalbill += bill;
			}

			else if (option_no == 3)
			{
				cout << "You have selected 1.5 Litre" << endl;
				cout << "How Many Do You Want: ";
				cin >> quantity;
				bill = 100 * quantity;
				cout << "your bill is " << bill << " Rs" << endl;
				totalbill += bill;
			}

			cout << "Would you like to order anything else? Y / N:";
			cin >> begin;
			if (begin == 'Y' || begin == 'y')
			{
				cout << endl;
				goto start;
				//return 0;
			}
		}
	}


	//////////Soft drink/////////////


	//////////Ice Cream/////////////

	else if (select == 5)
	{
		cout << "You Have Selected Ice-Cream" << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << i + 1 << Ice[i] << "-Rs" << pricei[i] << endl;
		}
		cout << "What do you want ? " << endl;
		cout << "\t Pick your choice: ";

		option_no = GetOptionNo(lengthOfIce);           //////function called


		if (option_no == 1)
		{
			cout << "You have selected Chocolate" << endl;
			cout << "How Many Do You Want: ";
			cin >> quantity;
			bill = 80 * quantity;
			cout << "your bill is " << bill << " Rs" << endl;
			totalbill += bill;
		}
		else if (option_no == 2)
		{
			cout << "You have selected Vanilla" << endl;
			cout << "How Many Do You Want: ";
			cin >> quantity;
			bill = 80 * quantity;
			cout << "your bill is " << bill << " Rs" << endl;
			totalbill += bill;
		}

		else if (option_no == 3)
		{
			cout << "You have selected Caramel" << endl;
			cout << "How Many Do You Want: ";
			cin >> quantity;
			bill = 80 * quantity;
			cout << "your bill is " << bill << " Rs" << endl;
			totalbill += bill;
		}

		else if (option_no == 4)
		{
			cout << "You have selected Mango" << endl;
			cout << "How Many Do You Want: ";
			cin >> quantity;
			bill = 80 * quantity;
			cout << "your bill is " << bill << " Rs" << endl;
			totalbill += bill;
		}

		else if (option_no == 5)
		{
			cout << "You have selected Strawberry" << endl;
			cout << "How Many Do You Want: ";
			cin >> quantity;
			bill = 80 * quantity;
			cout << "your bill is " << bill << " Rs" << endl;
			totalbill += bill;
		}

		cout << "Would you like to order anything else? Y / N:";
		cin >> begin;
		if (begin == 'Y' || begin == 'y')
		{
			cout << endl;
			goto start;
			//return 0;
		}
	}


	//////////Ice Cream/////////////



	//////////Invalid/////////////

	else {
		cout << "invalid" << endl;
		cout << "Please Enter correct order:";
		
			cout << endl;
			goto start;
			//return 0;
		
	}

	//////////Invalid/////////////

	cout << endl;
	cout << "\t\t\"THANK YOU FOR YOUR ORDER\"";
	cout << "\n\n\t\tYour Total bill is : " << totalbill << " Ruppes" << endl;
}



int main() {
	system("Color 03");
	process();
}
