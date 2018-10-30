package Assignment6b;

import java.util.Scanner;
public class Assignment6b {
	public static void main(String []agrs)
	{
		/*Scanner in = new Scanner(System.in); 		
		System.out.println("Enter first name ");
		String firstName = in.nextLine();
		System.out.println("Enter last name ");
		String lastName = in.nextLine();
		System.out.println("Enter social security number ");
		String socialSecurityNumber = in.nextLine();
		System.out.println("Enter Salary ");
		double Salary = in.nextDouble();
		*/
		
		String firstName = "Bhumesh";
		String lastName = "Bhoyar";
		String socialSecurityNumber = "20033";
		double Salary = 500000;
		
		test_inheritance obj = new test_inheritance( firstName , lastName , socialSecurityNumber , Salary );
		obj.getReflection();
		
	}
}
