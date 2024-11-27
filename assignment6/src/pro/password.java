//9
package pro;

import java.lang.*;
import java.util.Scanner;
class passwordCheck{
	public  boolean check(String pw) {
		char ch;
		if(pw.length()<5||pw.length()>12)
		{
			return false;
		}
		boolean hasLowerCase=false;
		boolean hasDigits=false;
		for (int i=0;i<pw.length();i++) {
			ch=pw.charAt(i);
			if(ch>'0'&&ch<='9')
				hasDigits=true;
			else if(ch>'a'&&ch<='z')
				hasLowerCase=true;
			else if (ch >= 'A' && ch <= 'Z' || (ch < '0' || ch > '9')) {
	                return false;
			
		}
	}
		 if (!hasLowerCase || !hasDigits) {
	            return false;
	        }
		 for (int i = 0; i < pw.length() - 1; i++) {
	            if (pw.charAt(i) == pw.charAt(i + 1)) {
	                return false; // Reject immediate duplicate characters
	            }
	        }
		return true;
}
}
public class password {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		passwordCheck obj=new passwordCheck();
		Scanner obj1=new Scanner(System.in);
		System.out.println("enter password:");
		String pw=obj1.nextLine();
		if(obj.check(pw))
			System.out.println("password accepted");
		else
			System.out.println("not accepted");
}

}
