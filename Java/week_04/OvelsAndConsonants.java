public class OvelsAndConsonants {
  public static void main(String args[]) {

    String[] stringArr = { "Apple", "Ball", "code", "Java", "arun", "nithin", "bala"};

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

      System.out.println(
        stringArr[i] +
        " => Ovels: " +
        ovelCount +
        " Consonants: " +
        consonantCount
      );
    }
  }
}
