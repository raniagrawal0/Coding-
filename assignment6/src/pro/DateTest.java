//4
package pro;


class Date{
	int month;
	int day;
	int year;
	Date(int m,int d,int y){
		month=m;
		day=d;
		year=y;
	}
	
	
    public void setMonth(int month) {
        this.month = month;
    }   
    public void setDay(int day) {
        this.day = day;
    }
    public void setYear(int year) {
        this.year = year;
    }
    
    
    public int getMonth() {
        return month;
    }
    public int getDay() {
        return day;
    }
    public int getYear() {
        return year;
    }
    
	void displayDate() {
        System.out.printf("%d/%d/%d%n", month, day, year);
    }
}
public class DateTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Date date1 = new Date(9, 10, 2024);

        
        System.out.print("The date is: ");
        date1.displayDate();
        
        date1.setMonth(12);
        date1.setDay(25);
        date1.setYear(2025);

        System.out.print("The modified date is: ");
        date1.displayDate();

	}

}
