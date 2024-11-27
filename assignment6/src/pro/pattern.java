//12
package pro;

import java.util.Scanner;
import java.lang.*;

class countpattern{
	int s,f,p;
	countpattern(int start,int last,int pattern){
		s=start;
		f=last;
		p=pattern;
	}
	public  int countPatternOccurrences() {
        int count = 0;
        for (int i = s; i <= f; i++) {
            if (String.valueOf(i).contains(String.valueOf(p))) {
                count++;
            }
        
}
        return count;}}

public class pattern {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner obj1=new Scanner(System.in);
		System.out.println("enter range :");
		int start=obj1.nextInt();
		int last=obj1.nextInt();
		System.out.println("enter pattern:");
		int pattern=obj1.nextInt();
		countpattern obj=new countpattern(start,last,pattern);
		System.out.println(obj.countPatternOccurrences());
	}

}
