import java.util.*;
class t1 {
	static Scanner sc = new Scanner(System.in);
	static public void main(String[] args){
		//System.out.println("Hello, World");
		int n = sc.nextInt();
		for (double i = 0 ; i <= n ; i += 0.1) {
			System.out.println(Math.sqrt(i));
		}
	}
}
