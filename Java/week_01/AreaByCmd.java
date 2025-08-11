

public class AreaByCmd {

  public static void main(String args[]) {
    
    if (args.length < 1) {
      System.out.println("Please provide valid radius !!");
      return ;
    }
    
    final double PI = 3.14;
    double radius = Double.parseDouble(args[0]);
    double area = PI * radius * radius;
    double perimeter = 2 * PI * radius;
    
    System.out.println("Area : " + area);
    System.out.println("Perimeter : " + perimeter);
  }
}

