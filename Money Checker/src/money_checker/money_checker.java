package money_checker;

import java.util.Scanner;

public class money_checker 
{
	public static void main(String[] args) 
	{
		Scanner scanner=new Scanner(System.in);
		System.out.print("Enter your sum of money with a decimal point: ");
		double money=Double.parseDouble(scanner.nextLine());
		double moneyWhole=0;
		
		
		if(money>=0 && money<=9.99)	// 1ви подслучай 
		{
			moneyWhole=money%10;
			System.out.printf("You have %.0f pound(s) %n", Math.floor(moneyWhole));
		}
		else if(money>=10.00 && money<=99.99)	// 2ри подслучай
		{
			moneyWhole=money%100;
			System.out.printf("You have %.0f pounds %n", Math.floor(moneyWhole));
		}
		else if(money>=100.00 && money<=999.99)	// 3ти подслучай
		{
			moneyWhole=money%1000;
			System.out.printf("You have %.0f pounds %n", Math.floor(moneyWhole));
		}
		
		double moneyTenths=(money*10)%10;
		System.out.printf("You have %.0f tenth(s) of a pound %n", Math.floor(moneyTenths));
		
		double moneyHundredths=(money*100)%10;
		System.out.printf("You have %.0f hundredth(s) of a pound %n", Math.floor(moneyHundredths));
	}
}
