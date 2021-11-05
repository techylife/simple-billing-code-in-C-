#include <iostream>
#include <string>

using namespace std;

struct Item {
	string name;
	float price;
	int quantity;
};

void bill() {
	int n_items;
	cout << "-------------------------Welcome-------------------------" << endl;
	cout << "Please enter the number of items you want to purchase : " << endl;
	cin >> n_items;

	struct Item items[n_items];

	for (int i = 0; i < n_items; i++) {
		struct Item item;
		cout << "Item : " << i+1 << endl;
		cout << "Name of the item (Please don't give spaces) : ";
		cin >> item.name;		
		cout << "\nPrice of the item : Rs.";
		cin >> item.price;
		cout << "\nQuantity : ";
		cin >> item.quantity;
		items[i] = item;
		cout << "\nItem added successfully!" << endl;
	};

	cout << "Please wait................" << endl;
	float sum = 0.0;
	cout << "================Bill================" << endl;

	for (int i = 0; i < n_items; i++) {
		struct Item item = items[i];
		cout << "Item : " << i+1 << "\nName : " << item.name << "\nPrice : Rs." << item.price << "\nQuantity : " << item.quantity << "\nCost : Rs." << item.price*item.quantity << "\n=====================================" << endl;
		sum+=item.price*item.quantity;
	}

	cout << "----------Total----------" << endl;
	cout << "Items : " << n_items << "\nCost : Rs." << sum << endl;
	cout << "===============Thank You===============" << endl;
}