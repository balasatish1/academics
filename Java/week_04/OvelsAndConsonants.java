
public class OvelsAndConsonants {
  public static void main(String args[]) {

    String[] stringArr = { "Apple", "Ball", "code", "Java" };
    int[][] ovelsAndConsonents = new int[stringArr.length][2];

    for (int i = 0; i < stringArr.length; i++) {
      int ovelCount = 0;
      int consonantCount = 0;

      for (int j = 0; j < stringArr[i].length(); j++) {
        char ch = stringArr[i].toUpperCase().charAt(j);
        if (
          ch == 'A' ||
          ch == 'E' ||
          ch == 'I' ||
          ch == 'O' ||
          ch == 'U'
        )
          ovelCount++;
        else
          consonantCount++;
      }

      ovelsAndConsonents[i][0] = ovelCount;
      ovelsAndConsonents[i][1] = consonantCount;
    }

    for (int i = 0; i < stringArr.length; i++) {
      System.out.println(
        stringArr[i] + " => Ovels: " +
        ovelsAndConsonents[i][0] +
        " Consonants: " +
        ovelsAndConsonents[i][1]
      );
    }

  }
}
