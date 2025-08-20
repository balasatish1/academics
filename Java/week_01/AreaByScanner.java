import java.util.*;

public class AreaByScanner {
  
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    
    System.out.print("Enter radius of the circle : ");
    double radius = sc.nextDouble();
    final double PI = 3.14;
    double area = PI * radius * radius;
    double perimeter = 2 * PI * radius;
    
    System.out.println("Area : " + area);
    System.out.println("Perimeter : " + perimeter);
    sc.close();
  }
}
