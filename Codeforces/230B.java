import java.util.Scanner;

public class Main {
    static final int LIMIT = 1000000;
    static boolean[] isPrime = new boolean[LIMIT + 1];

    static void sieve() {
        for (int i = 2; i <= LIMIT; i++) {
            isPrime[i] = true;
        }

        for (int i = 2; i * i <= LIMIT; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= LIMIT; j += i) {
                    isPrime[j] = false;
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        sieve();

        int n = scanner.nextInt();
        long[] x = new long[n];

        for (int i = 0; i < n; i++) {
            x[i] = scanner.nextLong();
        }

        for (int i = 0; i < n; i++) {
            long root = (long) Math.sqrt(x[i]);

            if (root * root == x[i] && isPrime[(int) root]) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }

        scanner.close();
    }
}