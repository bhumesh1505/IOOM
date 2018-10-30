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
}
