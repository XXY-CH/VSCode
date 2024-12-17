package Java.pi;
import java.util.Scanner;
import java.math.*;

public class pi {
    static Scanner sc = new Scanner(System.in);
    //求圆周率
    public static void main(String[] args) {
        double pi = 0;
        long n = sc.nextInt();
        for (long i = 1; i <= n; i++) {
            pi += Math.pow(-1, i + 1) / (2 * i - 1);
        }
        pi *= 4;
        System.out.println(pi);
    }
}
