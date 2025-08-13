
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

    Box box = new Box(10, 5, 7);
    System.out.println("Volume: " + box.getVolume());
  }
}
