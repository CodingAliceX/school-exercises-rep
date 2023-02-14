import java.util.Scanner;
public class Main {
    public static void main(String[] args) {

        System.out.println("Benvenuto in questo programma di prova!");
        System.out.println("");

        Scanner scan = new Scanner(System.in);

        Cerchio c1 = new Cerchio();
        Cerchio c2 = new Cerchio();
        Cilindro c3 = new Cilindro();

        System.out.println("Inserisci Raggio Cerchio 1: ");
        double raggiocerchio1 = scan.nextDouble();
        System.out.println("");

        System.out.println("Inserisci Raggio Cerchio 2: ");
        double raggiocerchio2 = scan.nextDouble();
        System.out.println("");

        System.out.println("Inserisci Raggio Cilindro: ");
        double raggiocilindro = scan.nextDouble();
        System.out.println("");

        System.out.println("Inserisci Altezza Cilindro: ");
        double altezzacilindro = scan.nextDouble();
        System.out.println("");

        c1.setRaggio(raggiocerchio1);
        c2.setRaggio(raggiocerchio2);
        c3.setRaggio(raggiocilindro);
        c3.setAltezza(altezzacilindro);

        System.out.println("Cerchio 1:");
        System.out.println("");
        System.out.println("Raggio = " + c1.getRaggio());
        System.out.println("Area = " + c1.area());
        System.out.println("Perimetro = " + c1.perimetro());
        System.out.println("");
        System.out.println("Cerchio 2:");
        System.out.println("");
        System.out.println("Raggio = " + c2.getRaggio());
        System.out.println("Area = " + c2.area());
        System.out.println("Perimetro = " + c2.perimetro());
        System.out.println("");
        System.out.println("Cilindro:");
        System.out.println("");
        System.out.println("Raggio = " + c3.getRaggio());
        System.out.println("Altezza = " + c3.getAltezza());
        System.out.println("Area = " + c3.area());
        System.out.println("Volume = " + c3.volume());
        System.out.println("");
        System.out.println("Cerchio1 > Cerchio2 = " + c1.maggiore(c1.getRaggio(),c2.getRaggio()));
    }
}




































