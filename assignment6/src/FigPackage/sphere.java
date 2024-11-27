package FigPackage;


class sphere extends figure{
	double area,volume;
	
	sphere(){
		
	}
	public  void calcArea() {
		 area=(4*pi*r*r);
	}
	public void calcVolume() {
		volume=(4*pi*r*r*r)/3;
	}
	public void dispArea() {
		System.out.println("area of sphere:"+area);
	}
	public void dispVolume() {
		System.out.println("Volume of sphere:"+volume);
	
}
}

