//10
package pro;

import java.util.*;
class stringfrequency{
	String s;
	public stringfrequency(String s){
		this.s=s;
	}
	
	
	public void calcfrequency(int n) {
		int[] count = new int[256];        
        // Count occurrences of each character
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            count[ch]++;
        }
        System.out.println("Characters that exceed " + n + " occurrences:");
        for (int i = 0; i < 256; i++) {
            if (count[i] > n) {
                System.out.println((char) i + ": " + count[i]);
            }
        }
	}
}

public class frequency {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner obj1=new Scanner(System.in);
		System.out.println("Enter String:");
		String s=obj1.nextLine();
		System.out.println("Enter threhold number:");
		int n=obj1.nextInt();
		stringfrequency obj=new stringfrequency(s);
		obj.calcfrequency(n);
		
		
		}

}
