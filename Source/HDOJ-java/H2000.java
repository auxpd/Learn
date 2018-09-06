import java.util.Scanner;
import java.util.Arrays;

public class H2000 {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		while(scan.hasNext()){
			String sc = scan.nextLine();
			char[] c = new char[sc.length()];
			for (int i = 0; i < c.length; i++ ) {
				c[i] = sc.charAt(i);
			}
			Arrays.sort(c);
			for (int i = 0; i < c.length - 1; i++) {
				System.out.print(c[i] + " ");
			}
			System.out.println(c[c.length - 1]);
		}
	}
}
