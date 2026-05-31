import java.util.Scanner;

public class Maths {
    public static void main(String[] args){

        Scanner scanner = new Scanner(System.in);

        int t,a,b,c,d,count=0;

        t = scanner.nextInt();




        while (t-- > 0){
            a = scanner.nextInt();
            b = scanner.nextInt();
            c = scanner.nextInt();
            d = scanner.nextInt();

            if(a>b){
                count++;
            }
            if(a>c){
                count++;
            }
            if(a>d){
                count++;
            }

            System.out.println(3-count);
            count = 0;
        }
    }
}
