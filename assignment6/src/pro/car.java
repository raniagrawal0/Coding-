//6
package pro;

import java.util.*;
class tataCar{
	public  String modelOfCategory(String category) {
        switch (category.toUpperCase()) {
            case "SUV":
                return "TATA SAFARI";
            case "SEDAN":
                return "TATA INDIGO";
            case "ECONOMY":
                return "TATA INDICA";
            case "MINI":
                return "TATA NANO";
            default:
                return "\nInvalid category. Please choose from: SUV, SEDAN, ECONOMY, MINI.";
        }
    }
}
public class car {

	    

	    public static void main(String[] args) {
	        // Example usage
	    	tataCar obj=new tataCar();
	    	Scanner pen=new Scanner(System.in);
	    	System.out.println("Enter category of car which customer is looking for:");
	        String category=pen.nextLine();
	        String model = obj.modelOfCategory(category);
	        System.out.println("The model for category " + category + " is: " + model);
	    }
	}

