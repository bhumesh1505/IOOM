package Assignment6b;

public class test_inheritance extends Employee {
	
	private double Salary;
	public test_inheritance(String fn , String ln , String ssn ,double s)
	{
		super(fn,ln,ssn);
		setSalary(s);
	}
	public double salary()
	{
		return Salary;
	}
	public void setSalary(double s)
	{
		this.Salary = s;
	}
	public void getReflection()
	{
		Class cls = super.getClass();
		System.out.println("The name of class is " + cls.getName()); 
		
		/*
		Method[] methods = cls.getMethods(); 
		  
        for (Method method:methods) 
            System.out.println(method.getName()); *//*
		Constructor constructor = cls.getConstructor(); 
        System.out.println("The name of constructor is " + constructor.getName());*/ 
	}
}
