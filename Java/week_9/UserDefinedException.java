import java.lang.Exception;
import java.util.Scanner;

class VoteRistrictedException extends Exception {
  public VoteRistrictedException(String str) {
    super(str);
  }
}

public class UserDefinedException {

  public static void checkAgeEligibility(int age) throws VoteRistrictedException {
    if (age < 18) {
      throw new VoteRistrictedException("Can't vote people who are under 18!!");
    }
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter your age: ");
    int age = sc.nextInt();
    try {
      checkAgeEligibility(age);
      System.out.println("You are eligibile to vote!!");
    } catch (VoteRistrictedException vre) {
      System.out.println(vre.getMessage());
    }
    sc.close();
  }
}
