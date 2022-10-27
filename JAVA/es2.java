import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        double coeffx1, coeffy1, noto1, coeffx2, coeffy2, noto2, delta, deltax, deltay, x, y;
        int tc;
        Scanner myObj = new Scanner(System.in);
        System.out.println("Inserisci il numero di sistemi lineari 2x2: ");
        tc = myObj.nextInt();
        while (tc <= 0) {
            System.out.print("Reinserire (NO > 0): ");
            tc = myObj.nextInt();
        }
        for (int i = tc; i != 0; i--) {
            System.out.print("Immetti coeffx1: ");
            coeffx1 = myObj.nextDouble();
            System.out.println("");
            System.out.print("Immetti coeffy1: ");
            coeffy1 = myObj.nextDouble();
            System.out.println("");
            System.out.print("Immetti noto1: ");
            noto1 = myObj.nextDouble();
            System.out.println("");
            System.out.print("Immetti coeffx2: ");
            coeffx2 = myObj.nextDouble();
            System.out.println("");
            System.out.print("Immetti coeffy2: ");
            coeffy2 = myObj.nextDouble();
            System.out.println("");
            System.out.print("Immetti noto2: ");
            noto2 = myObj.nextDouble();
            System.out.println("");

            delta = (coeffx1 * coeffy2) - (coeffy1 * coeffx2);
            deltax = (noto1 * coeffy2) - (coeffy1 * noto2);
            deltay = (coeffx1 * noto2) - (noto1 * coeffx2);
            x = deltax / delta;
            y = deltay / delta;

            if (delta != 0) {
                System.out.println("Il sistema è determinato");
                System.out.println("X = " + x + " Y = " + y);
            } else if (deltax != 0) {
                System.out.println("Il sistema è impossibile");
            } else if (deltay != 0) {
                System.out.println("Il sistema è impossibile");
            } else {
                System.out.println("Il sistema è indeterminato");
            }
        }
    }
}
