package pro;

 import java.util.Random;
import java.util.Scanner;

public class CrapsGame {

    // Enum to represent the status of the game
    enum GameStatus {
        WON, LOST, CONTINUE
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();

        // Roll the dice for the first time
        int diceSum = rollDice(random);

        // Determine the game status based on the first roll
        GameStatus gameStatus;
        int points = 0;

        switch (diceSum) {
            case 7:
            case 11:
                gameStatus = GameStatus.WON;
                break;
            case 2:
            case 3:
            case 12:
                gameStatus = GameStatus.LOST;
                break;
            default:
                gameStatus = GameStatus.CONTINUE;
                points = diceSum; // Set points to the value of the first roll
                System.out.println("Your point is " + points);
                break;
        }

        // Continue the game until the player wins or loses
        while (gameStatus == GameStatus.CONTINUE) {
            System.out.print("Press Enter to roll the dice...");
            scanner.nextLine();  // Wait for user to press Enter
            diceSum = rollDice(random);

            if (diceSum == points) {
                gameStatus = GameStatus.WON;
            } else if (diceSum == 7) {
                gameStatus = GameStatus.LOST;
            }
        }

        // Display the final result
        if (gameStatus == GameStatus.WON) {
            System.out.println("You win!");
        } else {
            System.out.println("You lose!");
        }

        // Close the scanner object
        scanner.close();
    }

    // Method to simulate rolling two dice
    public static int rollDice(Random random) {
        int die1 = 1 + random.nextInt(6);  // Roll the first die
        int die2 = 1 + random.nextInt(6);  // Roll the second die

        int sum = die1 + die2;  // Calculate the sum of the dice
        System.out.printf("You rolled %d + %d = %d\n", die1, die2, sum);
        return sum;
    }

}