package sec03.exam02;

public class CastingExample {

	public static void main(String[] args) {
		int intValue=161;
		char charValue=(char)intValue;
		System.out.println(charValue);
		
		
		long longValue=500;
		intValue=(int)longValue;
		System.out.println(intValue);
		
		double doubleValue=3;
		intValue=(int)doubleValue;
		System.out.println(intValue);
		
	}

}
