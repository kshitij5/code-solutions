import java.util.*;

class test {
    static int gcd(int a, int b) {
        if (a == 0)
            return b;
        return gcd(b % a, a);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        int gcd1 = 0, gcd2 = 0;
        for (int i = 0; i < n; i++) {
            int input1, input2;
            input1 = scanner.nextInt();
            input2 = scanner.nextInt();

            if (input1 > input2) {
                gcd1 = gcd(gcd1, input1);
                gcd2 = gcd(gcd2, input2);
            } else {
                gcd1 = gcd(gcd1, input2);
                gcd2 = gcd(gcd2, input1);
            }

        }
        System.out.println(((gcd1 * gcd2) / gcd(gcd1, gcd2)));
    }
}