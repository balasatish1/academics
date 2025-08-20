
class Student {
  private String name;
  private String rollNo;
  private int age;
  
  public void setName(String name) {
    this.name = name;
  }
  
  public String getName() {
    return this.name; 
  }
  
  public void setRollNo(String rollNo) {
    this.rollNo = rollNo;
  }
  
  public String getRollNo() {
    return this.rollNo;
  }
  
  public void setAge(int age) {
    this.age = age;
  }
  
  public int getAge() {
    return this.age;
  }
  
}

public class Tester {
  
  public static void main(String args[]) {
    Student s = new Student();
    
    s.setName("Bala Satish Malladi");
    s.setRollNo("325103311L03");
    s.setAge(20);
    
    System.out.println("Name : " + s.getName());
    System.out.println("Roll No : " + s.getRollNo());
    System.out.println("Age : " + s.getAge());
  }
}



