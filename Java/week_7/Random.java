/*
Write a program to generate a set of random numbers between two numbers x1 and x2,
and x1>0.
*/

import java.util.Set;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Scanner;

public class Random {

  public static void main(String args[]) {

    Set <Integer> set = new HashSet<Integer>();

    Scanner sc = new Scanner(System.in);
    System.out.print("Enter the starting range: ");
    int min = sc.nextInt();
    System.out.print("Enter the ending range: ");
    int max = sc.nextInt();

    if (!(min > 0)) {
      System.out.println("The starting range should be greater than 0 !!");
      sc.close();
      return ;
    }

    System.out.print("Enter number of random number you want: ");
    int n = sc.nextInt();

    while (set.size() < n) {
      int randomNum = (int)(Math.random() * (max - min + 1)) + min;
      set.add(randomNum);
    }

    System.out.print("random numbers :");


    Iterator<Integer> itr = set.iterator();
    while (itr.hasNext()) {
      System.out.print(" " + itr.next());
    }

    System.out.println();

    sc.close();
  }
}
