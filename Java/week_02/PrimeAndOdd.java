
public class PrimeAndOdd {
    
  public static boolean isOddAndPrime(int n) {

    if (n % 2 == 0)
      return false;

    int count = 0;

    for (int i = 1; i <= n; i++) {

      if (n % i == 0)
        count++;
    }

    return count == 2;
  }

  public static void main(String args[]) {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    System.out.println("The odd prime numbers in the array are : ");

    boolean isAnyNumFound = false;

    for (int i = 0; i < arr.length; i++) {
      if (isOddAndPrime(arr[i])) {
        System.out.print(arr[i] + "  ");
        isAnyNumFound = true;
      }
    }

    if (!isAnyNumFound)
      System.out.print("Not Found");

    System.out.println();
  }
}
