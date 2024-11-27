//2
package pro;

import java.util.*;
class A{
	String number;
	String description;
	int quantity;
	float price;
	double amount;
	A(){
		number=" ";
		description="";
		quantity=0;
		price=0.0f;
		
	}

	void set() {
		Scanner obj=new Scanner(System.in);
		System.out.println("Enter the invoice no. of product:");
		number=obj.nextLine();
		System.out.println("Enter the description of product:");
		description=obj.nextLine();
		System.out.println("Enter the quantity of product:");
		quantity=obj.nextInt();
		System.out.println("Enter the price of product:");
		price=obj.nextFloat();
	}
	void get(){
		System.out.println("Invoice  for an item:");
		System.out.println("invoice no.: "+number);
		System.out.println("Description: "+description);
		System.out.println("quantity: "+quantity);
		System.out.println("price: "+price);
		System.out.println("total amount: "+amount);
	}
	double getInvoiceAmount() {
		if (quantity<=0)
			quantity=0;
		if(price<0)
			price=0;
		
		amount=quantity*price;
		return amount;
	}
	
}

public class invoice {

	public static void main(String[] args) {
		
		A obj1=new A();
		obj1.set();
		obj1.getInvoiceAmount();
		obj1.get();
		

	}

}
