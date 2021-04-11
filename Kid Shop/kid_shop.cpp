/*
Петя има магазин за детски играчки.
Тя получава голяма поръчка, която трябва да изпълни.
С парите, които ще спечели, иска да отиде на екскурзия.
Да се напише програма, която пресмята печалбата от поръчката.
*/
/* Цени на играчките:
•    Пъзел - 2.60 лв.
•    Говореща кукла - 3 лв.
•    Плюшено мече - 4.10 лв.
•    Миньон - 8.20 лв.
•    Камионче - 2 лв.
*/
/*
 * Ако поръчаните играчки са 50 или повече, магазинът прави отстъпка 25% от общата цена.
 * От спечелените пари Петя трябва да даде 10% за наема на магазина.
 * Да се пресметне дали парите ще ѝ стигнат да отиде на екскурзия.
 */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int puzzle_quantity, doll_quantity, teddy_bear_quantity, minion_quantity, truck_quantity;
	int toy_quantity;
	double puzzle_price=2.60, doll_price=3.00, teddy_bear_price=4.10, minion_price=8.20, truck_price=2.00;
	double toy_price;
	double rent_discount;
	double rent_no_discount;

	cout<<"Greetings!"<<endl;
	cout<<endl;
	cout<<"How many puzzle sets would you like to buy?"<<endl;
	cout<<"Enter the amount of puzzle sets you would like to purchase: ";	cin>>puzzle_quantity;
	cout<<"How many dolls would you like to buy?"<<endl;
	cout<<"Enter the amount of dolls you would like to purchase: ";	cin>>doll_quantity;
	cout<<"How many teddy bears would you like to buy?"<<endl;
	cout<<"Enter the amount of teddy bears you would like to purchase: ";	cin>>teddy_bear_quantity;
	cout<<"How many minions would you like to buy?"<<endl;
	cout<<"Enter the amount of minions you would like to purchase: ";	cin>>minion_quantity;
	cout<<"How many trucks would you like to buy?"<<endl;
	cout<<"Enter the amount of trucks you would like to purchase: ";	cin>>truck_quantity;
	cout<<endl;

	toy_quantity=puzzle_quantity+doll_quantity+teddy_bear_quantity+minion_quantity+truck_quantity;
	cout<<"You have purchased a total of "<<toy_quantity<<" products."<<endl;
	toy_price=(puzzle_quantity*puzzle_price)+(doll_quantity*doll_price)+(teddy_bear_quantity*teddy_bear_price)+(minion_quantity*minion_price)+(truck_quantity*truck_price);
	cout<<"Your purchase will cost: "<<fixed<<setprecision(2)<<toy_price<<" leva."<<endl;

	if(toy_quantity>=50)
	{
		double toy_price_discount;
		toy_price_discount=toy_price-(toy_price*0.25);
		cout<<"Your discounted price is: "<<fixed<<setprecision(2)<<toy_price_discount<<" leva."<<endl;
		cout<<endl;
		rent_discount=toy_price_discount-(toy_price_discount*0.1);
		cout<<"Finances I'd be left with after paying rent: "<<fixed<<setprecision(2)<<rent_discount<<" leva.";

	}
	else
	{
		cout<<"You weren't capitalistic enough and, as a result, you won't be receiving any discounts. Fuck you."<<endl;	// Clients might not totally be on-board with being told to "fuck off"
		rent_no_discount=toy_price-(toy_price*0.1);
		cout<<"Finances I'd be left with after paying rent: "<<fixed<<setprecision(2)<<rent_no_discount<<" leva.";
	}

	system("pause");
	return 0;
}
