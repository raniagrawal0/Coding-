package FigPackage;

import java.util.Scanner;

public class demo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner obj=new Scanner(System.in);
		
		cone obj1=new cone();
		System.out.println("Enter height of cone:");
		obj1.h=obj.nextDouble();
		System.out.println("Enter radius of cone:");
		obj1.r=obj.nextDouble();
		obj1.calcArea();
		obj1.calcVolume();
		obj1.dispArea();
		obj1.dispVolume();
		
		sphere obj2=new sphere();
		System.out.println("Enter radius of sphere:");
		obj2.r=obj.nextDouble();
		obj2.calcArea();
		obj2.calcVolume();
		obj2.dispArea();
		obj2.dispVolume();
	}

}
