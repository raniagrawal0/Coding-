//5
package pro;
import java.util.Scanner;

public class gallon {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double totalMiles = 0.0;
        double totalGallons = 0.0;
        double miles, gallons;
        int tripCount = 0;

        while (true) {
            System.out.print("Enter miles driven for the trip (or -1 to quit): ");
            miles = scanner.nextDouble();
            if (miles == -1) {
                break; // Exit the loop if the user inputs -1
            }

            System.out.print("Enter gallons used for the trip: ");
            gallons = scanner.nextDouble();

            // Calculate miles per gallon for the trip
            double mpg = miles / gallons;
            System.out.printf("Miles per gallon for this trip: %.2f%n", mpg);

            // Update total miles and gallons
            totalMiles += miles;
            totalGallons += gallons;
            tripCount++;
        }

        // Calculate and display combined miles per gallon for all trips
        if (tripCount > 0) {
            double combinedMPG = totalMiles / totalGallons;
            System.out.printf("Combined miles per gallon for all trips: %.2f%n", combinedMPG);
        } else {
            System.out.println("No trips were entered.");
        }

        scanner.close();
    }
}
