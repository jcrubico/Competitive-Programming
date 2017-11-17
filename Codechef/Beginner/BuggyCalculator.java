import java.util.Scanner;

public class BuggyCalculator {
    public static boolean isZero(String sRev) {
        boolean bCondition = false;
        for (int i = 0; i < sRev.length(); i++) {
            if (sRev.charAt(i) == '0') {
                bCondition = true;
            } else {
                bCondition = false;
                return bCondition;
            }
        }
        return bCondition;
    }
    public static void main(String[] args) {
        Scanner objBuff = new Scanner(System.in);
        int T = objBuff.nextInt();
        long modA = 0, modB = 0;
        long temp = 0;
        String sNumber = "";
        for (int counter = 1; counter <= T; counter++) {
            long a = objBuff.nextLong();
            long b = objBuff.nextLong();
            while (a > 0 || b > 0) {
                modA = a % 10;
                modB = b % 10;
                temp = (modA + modB) % 10;
                sNumber += String.valueOf(temp);
                a /= 10;
                b /= 10;
            }
            String sRev = new StringBuffer(sNumber).reverse().toString();
            boolean bZero = isZero(sRev);
            if (bZero) {
                System.out.println("0");
            } else {
                System.out.println(sRev);
            }
            sNumber = "";
        }
    }
}
