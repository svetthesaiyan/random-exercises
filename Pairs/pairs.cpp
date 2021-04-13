/* Дадени са 2*n-на брой числа.
 * Първото и второто формират двойка, третото и четвъртото също и т.н.
 * Всяка двойка има стойност – сумата от съставящите я числа.
 * Напишете програма, която проверява дали всички двойки имат еднаква стойност или печата максималната разлика между две последователни двойки.
 * Ако всички двойки имат еднаква стойност, отпечатайте "Yes, value = {Value}" + стойността.
 * В противен случай отпечатайте "No, maxdiff = {Difference}" + максималната разлика
 */
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int pairs;
	cout<<"Enter number of pairs: ";	cin>>pairs;
	int previousSum=0;
	int currentSum=0;
	int maxDifference=0;

	for(int i=0; i<pairs; i++)
	{
		int firstNum, secondNum;
		cout<<"Enter 1st number of your pair: ";	cin>>firstNum;
		cout<<"Enter 2nd number of your pair: ";	cin>>secondNum;

		if(i==0)
			previousSum=firstNum+secondNum;
		else
		{
			currentSum=firstNum+secondNum;

			if(abs(currentSum-previousSum)>maxDifference)
				maxDifference=abs(currentSum-previousSum);

			previousSum=currentSum;
		}
	}
	if(maxDifference==0)
		cout<<"Yes, value="<<previousSum<<endl;
	else
		cout<<"No, max difference="<<maxDifference<<endl;

	system("pause");
	return 0;
}
