
import java.util.Arrays;
import java.util.Scanner;

public class Anagrams {

  public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);
    System.out.print("Enter two strings: ");
    
    String strOne = sc.next();
    String strTwo = sc.next();
    sc.close();

    char[] charsOne = strOne.toCharArray();
    char[] charsTwo = strTwo.toCharArray();

    Arrays.sort(charsOne);
    Arrays.sort(charsTwo);

    String newStrOne = new String(charsOne);
    String newStrTwo = new String(charsTwo);

    if (newStrOne.equals(newStrTwo))
      System.out.println(strOne + " and " + strTwo + " are Anagrams!!");
    else
      System.out.println(strOne + " and " + strTwo + " are not Anagrams!!");
  }
}
