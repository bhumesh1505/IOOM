package Assignment6b;

public abstract class Employee {
	
	private String firstName;
	private String lastName;
	private String socialSecurityNumber;
	
	public Employee(String fn , String ln , String ssn)
	{
		setFirstName(fn);
		setLastName(ln);
		setSocialSecurityNumber(ssn);
	}
	public void setFirstName(String s)
	{
		this.firstName = s;
	}
	public String getFirstName()
	{
		return firstName;
	}
	public void setLastName(String s)
	{
		this.lastName = s;
	}
	public String getLastName()
	{
		return lastName;
	}
	public void setSocialSecurityNumber(String s)
	{
		this.socialSecurityNumber = s;
	}
	public String getSocialSecurityNumber()
	{
		return socialSecurityNumber;
	}
	public abstract double salary() ;
	
	public void print()
	{
		System.out.println("First Name          : " + firstName );
		System.out.println("Last Name           : " + lastName );
		System.out.println("social Security No. : " + socialSecurityNumber );
	}
}
