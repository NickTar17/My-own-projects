import java.util.Scanner;
import java.util.Random;


public class people {
public static void main (String [] args){


    Scanner forPeople = new Scanner(System.in);
    System.out.println("Enter your name : ");
    String per = forPeople.nextLine();


    String[] wish = new String[10];

        wish[0] = " , smile!";
        wish[1] = " , your jokes are funny";
        wish[2] = " , be carefully!";
        wish[3] = " , you are smart!";
        wish[4] = " , study more";
        wish[5] = " , screw it , let`s do it (к черту все , берись и делай)";
        wish[6] = " , make world better";
        wish[7] = " , impove your skills";
        wish[8] = " , learn Java";
        wish[9] = " , clean your mind";

    int n = (int)Math.floor(Math.random() * wish.length);

    System.out.println( per + wish[n]);


    /*String[] sa = new String[]{"111", "222", "333", "444", "555"};
    int n = (int)Math.floor(Math.random() * sa.length);
    System.out.println(sa[n]);
   */


 }

}

