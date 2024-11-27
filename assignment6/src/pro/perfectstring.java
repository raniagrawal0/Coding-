//11
package pro;

import java.util.Scanner;

class checkperfect{
	
	String s;
	public checkperfect(String s){
		this.s=s;
	}
	public boolean calcfrequency() {
		int[] count = new int[256];        
        // Count occurrences of each character
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            count[ch]++;
        }
        
        boolean perfectstring=true;
        for (int i = 0; i < 256; i++) {
            if (count[i] > 1) {
                return false;
            }
        }
        return true;
	}
	public void perfect(){
		if(calcfrequency()) {
			System.out.println("perfect string");
		}
		else 
			System.out.println("notperfect");
	}
}
public class perfectstring {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner obj1=new Scanner(System.in);
		System.out.println("Enter String:");
		String s=obj1.nextLine();
		checkperfect obj=new checkperfect(s);
		obj.perfect();
	}

}

