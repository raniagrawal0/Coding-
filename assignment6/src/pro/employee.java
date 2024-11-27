//3
package pro;

import java.util.*;
class C{
	String name;
	String lastname;
	double monthlysalary;
	C(){
		name="";
		lastname="";
		monthlysalary=0.0;
		
	}
	void set() {
		Scanner obj=new Scanner(System.in);
		System.out.println("enter your first name:");
		name=obj.nextLine();
		System.out.println("enter your last name:");
		lastname=obj.nextLine();
		System.out.println("enter your monthly salary:");
		monthlysalary=obj.nextDouble();
	}
	void get() {
		System.out.println("First name:"+name);
		System.out.println("Last name:"+lastname);
		System.out.println("Monthly salary:"+monthlysalary);
		System.out.println("Yearly salary:"+calc());
		System.out.println("New Yearly salary after 10% hike:"+calc1());
	}
	double calc() {
		if(monthlysalary<0)
			return 0;
		else return monthlysalary*12;
	}
	double calc1() {
		monthlysalary=monthlysalary+monthlysalary*0.1;
		return monthlysalary*12;
	}
}

public class employee {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		C obj1=new C();
		C obj2=new C();
		System.out.println("Employee 1:");
		obj1.set();
		System.out.println("Employee 2:");
		obj2.set();
		
		System.out.println("Employee 1:");
		obj1.get();
		System.out.println("\nEmployee 2:");
		obj2.get();

	}

}
