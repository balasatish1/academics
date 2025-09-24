import java.util.HashMap;

class Employee {

  private int empId;
  private String empName;
  private double empSalary;
  private double experience;

  public Employee(int empId, String empName, double empSalary, double experience) {
    this.empId = empId;
    this.empName = empName;
    this.empSalary = empSalary;
    this.experience = experience;
  }

  public void setEmpId(int empId) {
    this.empId = empId;
  }

  public void setEmpName(String empName) {
    this.empName = empName;
  }

  public void setEmpSalary(double empSalary) {
    this.empSalary = empSalary;
  }

  public void setExperience(double experience) {
    this.experience = experience;
  }

  public int getEmpId() {
    return this.empId;
  }

  public String getEmpName() {
    return this.empName;
  }

  public double getEmpSalary() {
    return this.empSalary;
  }

  public double getExperience() {
    return this.experience;
  }

  public String toString() {
    return "Emp ID: " + this.empId+ "\nEmployee Name: " + this.empName+ "\nEmployee Salary: " + this.empSalary+ "\nExperience: " + this.experience;
  }

}

public class HashMapTester {
  public static void main (String args[]) {
    HashMap <Integer, Employee> map = new HashMap<>();

    String names[] = {"arun", "nithin", "bala", "satish"};
    double salary[] = {50000, 20000, 60000, 50000};
    double experience[] = {2.5, 1, 3, 4};

    for (int i = 0; i < names.length; i++) {
      int id = i + 1001;
      map.put(id, new Employee(id, names[i], salary[i], experience[i]));
    }

    System.out.println("Employees Data \n");
    
    for (Integer id : map.keySet()) {
      System.out.println(map.get(id) + "\n");
    }
    
  }
}
