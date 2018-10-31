package Assignment6b;
import java.lang.reflect.Method; 
import java.lang.reflect.Field; 
import java.lang.reflect.Constructor; 

import java.util.Scanner;

//import com.sun.java.util.jar.pack.Package.Class.Method;
public class Assignment6b {
	public static void main(String []agrs)
	{
		/*
		*/
		
		
		
		try {
			
			/*String firstName = "Aniket";
			String lastName = "Mali";
			String socialSecurityNumber = "20033";
			double Salary = 500000;*/
			Scanner in = new Scanner(System.in); 		
			System.out.println("Enter first name ");
			String firstName = in.nextLine();
			System.out.println("Enter last name ");
			String lastName = in.nextLine();
			System.out.println("Enter social security number ");
			String socialSecurityNumber = in.nextLine();
			System.out.println("Enter Salary ");
			double Salary = in.nextDouble();
			test_inheritance obj = new test_inheritance( firstName , lastName , socialSecurityNumber , Salary );
			
			Class cls = obj.getClass().getSuperclass();			
			System.out.println("Superclass = " + cls.getName());
		
			Constructor ctr = cls.getConstructor(String.class,String.class,String.class);
			
			System.out.println("The name of constructor is " + ctr.getName());
		
			Method[] methods = cls.getDeclaredMethods();
			for (Method method:methods) 
	            System.out.println(method.getName()); 	
		
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
		//obj.getReflection();
		
	}
}
