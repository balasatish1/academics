import java.util.Scanner;

class Box {

  private double width;
  private double height;
  private double depth;

  public Box(double width, double height, double depth) {
    this.width = width;
    this.height = height;
    this.depth = depth;
  }

  public double getVolume() {
    return this.width * this.height * this.depth;
  }

}

public class TesterOne {

  public static void main(String args[]) {

    Scanner sc = new Scanner(System.in);
    System.out.print("Enter the width: ");
    double width = sc.nextDouble();

    System.out.print("Enter the height: ");
    double height = sc.nextDouble();
    
    System.out.print("Enter the depth: ");
    double depth = sc.nextDouble();


    Box box = new Box(width, height, depth);
    System.out.println("Volume: " + box.getVolume());

    sc.close();
  }
}
