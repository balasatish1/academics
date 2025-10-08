import java.util.Scanner;

public class ExceptionThrowExample {

  public static boolean areAllDigits(String str) {
    for (int i = 0; i < str.length(); i++) {
      if (!Character.isDigit(str.charAt(i))) {
        return false;
      }
    }
    return true;
  }

  public static int divide(String numStr1, String numStr2) throws ArithmeticException, NumberFormatException {
    if (!(areAllDigits(numStr1) && areAllDigits(numStr2))) {
      throw new NumberFormatException("Division will be perfomed on numbers only!!");
    }

    int num1 = Integer.parseInt(numStr1);
    int num2 = Integer.parseInt(numStr2);

    if (num2 == 0) {
      throw new ArithmeticException("Can't divide a number by zero (0)!!");
    }
    return num1 / num2;
  }
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter first number: ");
    String numStr1 = sc.next();
    System.out.print("Enter second number: ");
    String numStr2 = sc.next();
    System.out.println(divide(numStr1, numStr2));

    sc.close();
  }
}
