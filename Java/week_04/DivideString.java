
import java.util.Scanner;

public class DivideString {

  public static void main(String args[]) {


    Scanner sc = new Scanner(System.in);
    String str = sc.next().replaceAll(" ", "");
    sc.close();
  
    str.replaceAll(" ", "");
    final int N = 3;
    int size = (int)(Math.ceil((double)str.length() / N));

    String[] subStrings = new String[size];
    int start = 0;

    for(int i = 0; i < size; i++) {
      if ((start + N) <= str.length()) {
        subStrings[i] = str.substring(start, start + N);
        start += N;
      }
    }

    for(String string : subStrings) {
      System.out.println(string);
    }

  }
}
