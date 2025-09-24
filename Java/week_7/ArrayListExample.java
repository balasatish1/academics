
import java.util.ArrayList;

/*
 * add 1.object 1.index , object
 * get 1.index
 * remove 1.index 2.object
 * size()
 */
public class ArrayListExample {

  public static void main(String args[]) {

    ArrayList <Integer> arrayList = new ArrayList<>();

    for (int i = 1; i <= 10; i++) {
      arrayList.add(i);
    }

    System.out.println("list after adding some elements: " + arrayList);
    
    arrayList.add(5, 20);

    System.out.println("list after adding 20 at index 5: " + arrayList);

    arrayList.remove(7);

    System.out.println("list after deleting 7: " + arrayList);

    arrayList.remove(0);

    System.out.println("list after deleting element at index 0: " + arrayList);

    System.out.println("length of the array list is: " + arrayList.size());

  }
}
