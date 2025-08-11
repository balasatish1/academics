
class Student {

    private String name;
    private String rollNo;
    private String branch;

    public Student() {
        System.out.println("Default Constructor Invoked");
    }

    public Student(String name) {
        this.name = name;
    }

    public Student(String name, String rollNo) {
        this.name = name;
        this.rollNo = rollNo;
    }

    public Student(String name,String rollNo, String branch) {
        this.name = name;
        this.rollNo = rollNo;
        this.branch = branch;
    }

    public static void showStudentDetails(Student student) {
        System.out.println("\nStudent Details : ");
        System.out.println("Name : " + student.getName());
        System.out.println("RollNo : " +  student.getRollNo());
        System.out.println("Branch : " +  student.getBranch());
    }

    public String getName() {
        return this.name;
    }

    public String getRollNo() {
        return this.rollNo;
    }

    public String getBranch() {
        return this.branch;
    }
}

public class Constructor {

    public static void main(String args[]) {

        Student s1 = new Student();
        Student s2 = new Student("Bala");
        Student s3 = new Student("Satish", "325103311L03");
        Student s4 = new Student("Bala Satish", "325103311L03", "IT");
        Student.showStudentDetails(s1);
        Student.showStudentDetails(s2);
        Student.showStudentDetails(s3);
        Student.showStudentDetails(s4);

    }
}

