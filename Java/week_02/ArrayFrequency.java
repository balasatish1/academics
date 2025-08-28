
public class ArrayFrequency {

  public static void main(String args[]) {
    int arr[] = new int[]{1, 1, 2, 9, 2, 6, 1, 9, 6, 2};
    int uniqueArr[]= new int[arr.length];
    int frequencyArr[] = new int[arr.length];
    int index = -1;

    for (int i = 0; i < arr.length; i++) {
      int element = arr[i];
      boolean isEleFound = false;
      for (int j = 0; j <= index; j++) {
        if (uniqueArr[j] == element) {
          frequencyArr[j] += 1;
          isEleFound = true;
        }
      }

      if (!isEleFound) {
        uniqueArr[++index] = element;
        frequencyArr[index] += 1;
      }
    }

    for (int i = 0; i <= index; i++) {
      System.out.println(uniqueArr[i] + " -> " + frequencyArr[i]);
    }
  }
}
