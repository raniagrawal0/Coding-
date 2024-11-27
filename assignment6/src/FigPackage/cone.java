package FigPackage;


import java.lang.Math;
class cone extends figure{
	 double h;
	 double s,area,volume;
	 cone(){
	 s=Math.sqrt(r*r+h*h);
	 }
	public  void calcArea() {
		 area=(pi*r*s)+(pi*r*r);
	}
	public void calcVolume() {
		volume=(pi*r*r*h)/3;
	}
	public void dispArea() {
		System.out.println("area of cone:"+area);
	}
	public void dispVolume() {
		System.out.println("Volume of cone:"+volume);
	
}
}

