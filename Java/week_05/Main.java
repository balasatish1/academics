
class Figure_3D {

  public final double PI = 3.14;

  public double getVolume() {
    System.out.println("volume of 3d figure");
    return 0;
  }

  public double getSurfaceArea() {
    System.out.println("surface area of 3d figure");
    return 0;
  }

}

class Cylinder extends Figure_3D {

  private double radius = 0;
  private double height = 0;

  public Cylinder(double radius, double height) {
    this.radius = radius;
    this.height = height;
  }

  @Override
  public double getVolume() {
    return this.PI * Math.pow(this.radius, 2) * this.height;
  }

  @Override
  public double getSurfaceArea() {
    return 2 * this.PI * this.radius * this.height + 2 * this.PI * Math.pow(this.radius, 2);
  }

}

class Cone extends Figure_3D {
  private double radius = 0;
  private double height = 0;

  public Cone(double radius, double height) {
    this.radius = radius;
    this.height = height;
  }

  @Override
  public double getVolume() {
    return this.PI * Math.pow(this.radius, 2) * this.height / 3;
  }

  @Override
  public double getSurfaceArea() {
    double slantHeight = Math.sqrt(Math.pow(this.radius, 2) + Math.pow(this.height, 2));
    return this.PI * this.radius * slantHeight + this.PI * Math.pow(this.radius, 2);
  }

}

class Sphere extends Figure_3D {

  private double radius = 0;

  public Sphere(double radius) {
    this.radius = radius;
  }

  @Override
  public double getVolume() {
    return 4 * this.PI * Math.pow(this.radius, 3) / 3;
  }

  @Override
  public double getSurfaceArea() {
    return 4 * this.PI * Math.pow(this.radius, 2);
  }

}

public class Main {
  public static void main(String args[]) {
    Figure_3D figure = new Figure_3D();
    figure.getVolume();
    figure.getSurfaceArea();

    Cone cone = new Cone(10, 9);
    Cylinder cylinder = new Cylinder(7, 8);
    Sphere sphere = new Sphere(8);

    System.out.println("cone :");
    System.out.println("Volume : " + cone.getVolume() + " | surface area : " + cone.getSurfaceArea());
    System.out.println("cylinder :");
    System.out.println("Volume : " + cylinder.getVolume() + " | surface area : " + cylinder.getSurfaceArea());
    System.out.println("sphere :");
    System.out.println("Volume : " + sphere.getVolume() + " | surface area : " + sphere.getSurfaceArea());

  }
}
