//1
package pro;

import java.util.*;
class B{
	float totalmiles;
	float gasolinecost;
	float avgfees;
	float tolls;
	final int milespergallon=30;
	float totalcost;
	
	void set() {
		Scanner obj=new Scanner(System.in);
		System.out.println("Enter total miles driven per day:");
		totalmiles=obj.nextFloat();
		System.out.println("Enter cost  per gallon of gasoline :");
		gasolinecost=obj.nextFloat();
		System.out.println("Enter average fees per day: ");
		avgfees=obj.nextFloat();
		System.out.println("Enter tolls per day:");
		tolls=obj.nextFloat();
		
	}
	void get() {
		System.out.println("driving cost details:");
		System.out.println("total miles driven per day:"+totalmiles);
		System.out.println("cost  per gallon of gasoline :"+gasolinecost);
		System.out.println("average fees per day: "+avgfees);
		System.out.println("tolls per day:"+tolls);
		System.out.println("Daily driving cost:"+totalcost);
		
	}
	void calcdailycost() {
		totalcost=(totalmiles/milespergallon)*gasolinecost + avgfees + tolls;
	}
}
public class drive {

	public static void main(String[] args) {
		B obj1=new B();
		obj1.set();
		obj1.calcdailycost();
		obj1.get();

	}

}
