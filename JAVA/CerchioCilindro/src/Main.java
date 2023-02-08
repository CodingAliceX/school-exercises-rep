import java.util.Scanner;
public class Main {
    public static void main(String[] args) {

        System.out.println("Benvenuto in questo programma di prova!");
        System.out.println("");
        Scanner scan = new Scanner(System.in);
        Cerchio c1 = new Cerchio();
        Cilindro c2 = new Cilindro();
        System.out.println("Inserisci Raggio Cerchio: ");
        double raggiocerchio = scan.nextDouble();
        System.out.println("");
        System.out.println("Inserisci Raggio Cilindro: ");
        double raggiocilindro = scan.nextDouble();
        System.out.println("");
        System.out.println("Inserisci Altezza Cilindro: ");
        double altezzacilindro = scan.nextDouble();
        System.out.println("");
        c1.setRaggio(raggiocerchio);
        c2.setRaggio(raggiocilindro);
        c2.setAltezza(altezzacilindro);
        System.out.println("Cerchio:");
        System.out.println("");
        System.out.println("Raggio = " + c1.getRaggio());
        System.out.println("Area = " + c1.area());
        System.out.println("Perimetro = " + c1.perimetro());
        System.out.println("");
        System.out.println("Cilindro:");
        System.out.println("");
        System.out.println("Altezza = " + c2.getAltezza());
        System.out.println("Area = " + c2.area());
        System.out.println("Volume = " + c2.volume());
    }

}




































