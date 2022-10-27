import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        final int FSA1 = 0, FSA2 = 12, FSA3 = 18, FSA4 = 27, FSA5 = 48, FSAO = 60;
        float imp, imps;
        imps = 0;
        Scanner myObj = new Scanner(System.in);
        System.out.println("/////////////////////////////============/////////////////////////////");
        System.out.println("#                                                                    #");
        System.out.println("#                          Benvenuto Utente!                         #");
        System.out.println("#             Nel Sistema Di Calcolo Fiscale Elettronico!            #");
        System.out.println("#                                                                    #");
        System.out.println("#                           _______________                          #");
        System.out.println("#                          |               |                         #");
        System.out.println("#                          |      $$$      |                         #");
        System.out.println("#                          |               |                         #");
        System.out.println("#                           ---------------                          #");
        System.out.println("#                                Ready!                              #");
        System.out.println("/////////////////////////////============/////////////////////////////");
        System.out.println("");
        System.out.println("");
        System.out.println("");
        System.out.println("");
        System.out.println("# Fasce Redditi:");
        System.out.println("# 0k - 10k : " +  FSA1 + " %");
        System.out.println("# 10k - 20k : " + FSA2 + " %");
        System.out.println("# 20k - 35K : " + FSA3 + " %");
        System.out.println("# 35k - 60k : " + FSA4 + " %");
        System.out.println("# 60k - 100k : " + FSA5 + " %");
        System.out.println("# Oltre : " + FSAO + " %");
        System.out.println("");
        System.out.print("Perfavore inserisci il tuo reddito: ");
        imp = myObj.nextFloat();
        while (imp < 0) {
            System.out.println("#ERRORE#: Perfavore reinserisci il tuo reddito! (Deve essere Maggiore di 0) : ");
            imp = myObj.nextFloat();
        }
        if (imp > 0 && imp <= 10000) {
            imps = imp / 100 * FSA1;
            System.out.println("IMPOSTA: ( " + imp + " / 100 * " + FSA1 + " )");
            System.out.println("RISULTATO ----> " + imps);
        }
        if (imp > 10000 && imp <= 20000) {
            imps = imp / 100 * FSA2;
            System.out.println("IMPOSTA: ( " + imp + " / 100 * " + FSA2 + " )");
            System.out.println("RISULTATO ----> " + imps);
        }
        if (imp > 20000 && imp <= 35000) {
            imps = imp / 100 * FSA3;
            System.out.println("IMPOSTA: ( " + imp + " / 100 * " + FSA3 + " )");
            System.out.println("RISULTATO ----> " + imps);
        }
        if (imp > 35000 && imp <= 60000) {
            imps = imp / 100 * FSA4;
            System.out.println("IMPOSTA: ( " + imp + " / 100 * " + FSA4 + " )");
            System.out.println("RISULTATO ----> " + imps);
        }
        if (imp > 60000 && imp <= 100000) {
            imps = imp / 100 * FSA5;
            System.out.println("IMPOSTA: ( " + imp + " / 100 * " + FSA5 + " )");
            System.out.println("RISULTATO ----> " + imps);
        }
        if (imp > 100000) {
            imps = imp / 100 * FSAO;
            System.out.println("IMPOSTA: ( " + imp + " / 100 * " + FSAO + " )");
            System.out.println("RISULTATO ----> " + imps);
        }
        System.out.println("");
        System.out.println("");
        System.out.println("#####################################################################");
        System.out.println("#####################################################################");
        System.out.println("############################/ End           #########################");
        System.out.println("############################|   Of          |########################");
        System.out.println("#############################    Program    /########################");
        System.out.println("#####################################################################");
        System.out.println("#####################################################################");
    }
}

