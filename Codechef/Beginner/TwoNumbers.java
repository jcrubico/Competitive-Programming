import java.util.Scanner;

public class TwoNumbers {
    public static void main(String[] args) {
        Scanner oScanner = new Scanner(System.in);
        int iTestCase = oScanner.nextInt();
        for (int iTest = 1; iTest <= iTestCase; iTest++) {
            long iLongA = oScanner.nextLong();
            long iLongB = oScanner.nextLong();
            long iLongN = oScanner.nextLong();
            long iLongC = iLongA;
            long iLongD = iLongB;
            for (long iLongTurn = 1; iLongTurn <= iLongN; iLongTurn++) {
                long iLongPick = iLongTurn % 2;
                if (iLongPick == 1L) {
                    iLongA *= 2L;
                    iLongC = iLongA;
                }
                if (iLongPick == 0L) {
                    iLongB *= 2L;
                    iLongD = iLongB;
                }
            }
            long iLongAggregate = Math.max(iLongC, iLongD) / Math.min(iLongC, iLongD);
            System.out.println(iLongAggregate);
        }
    }
}
