import java.util.Formatter;
import java.util.Scanner;

/**
 * Created by harshvs on 11-11-2015.
 */
public class Main {
    public static void main(String[] args) {
        Scanner scanIn = new Scanner(System.in);
        Formatter formatOut = new Formatter(System.out);
        double val = scanIn.nextDouble();
        formatOut.format("%7.3f", val);
    }
}
