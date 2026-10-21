
import java.util.Scanner;

// 4th Approach
class program65 {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int iValue = 0;

        Iteration iteration = new Iteration();

        System.out.println("Enter the Frequency:");
        iValue = scanner.nextInt();

        iteration.Displpay(iValue);

        scanner.close();
    }
}

class Iteration {

    public void Displpay(int iNo) {

        int iCnt = 0;

        for (iCnt = iNo; iCnt >= 1; iCnt--) {

            System.out.println("-------------------------");
            System.out.println(iCnt + " Jay Ganesh...");
            System.out.println("-------------------------");

        }
    }
}
