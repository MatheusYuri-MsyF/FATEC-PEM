import java.util.Scanner;

public class TesteLeitura{
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);

        int a, b;
        double x, y;
        String s1, s2;

        System.out.print("Digite um interio: ");
        a = sc.nextInt();

        System.out.print("Digite outro interio: ");
        b = sc.nextInt();

        System.out.print("a = " + a + ", b = " + b);
        
        System.out.print ("Digite uma palavra ");
        s1 = sc.next();
        System.out.println("s1 = " + s1);

        System.out.print("Digete outra palavra: ");
        s2 = sc.next();
        System.out.println("s2 = " + s2);

        sc.close();
    }
}