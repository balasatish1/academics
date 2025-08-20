
public class CommandLineArguments {

  public static void main(String args[]) {
    if (args.length < 2) {
      System.out.println("Please provide atleast two arguments !!");
      return ;
    }
    
    System.out.println("Arg1 : " + args[0]);
    System.out.println("Arg2 : " + args[1]);
  }
}

