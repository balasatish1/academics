

class Vehicle {
  private String vehicleType = "";

  public Vehicle(String vehicleType) {
    this.vehicleType = vehicleType;
  }

  public String getVehicleType() {
    return this.vehicleType;
  }
}

class Brand extends Vehicle {

  private String brand = "";

  public Brand(String vehicleType, String brand) {
    super(vehicleType);
    this.brand = brand;
  }

  public String getBrand() {
    return this.brand;
  }
}

class Cost extends Brand {

  public double cost = 0;

  public Cost(String vehicleType, String brand, double cost) {
    super(vehicleType, brand);
    this.cost = cost;
  }

  public double getCost() {
    return this.cost;
  }

}



public class Tester {

  public static void main(String[] args) {
    Cost cost = new Cost("car", "audi", 5500000);
    System.out.println("Vehicle Type : " + cost.getVehicleType());
    System.out.println("Brand : " + cost.getBrand());
    System.out.println("Cost : " + cost.getCost());
  }
}
