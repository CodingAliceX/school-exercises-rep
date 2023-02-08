public class Cilindro extends Cerchio {

    private double altezza;

    public void setAltezza(double a){
        altezza = a;
    }

    public double getAltezza(){
        return altezza;
    }

    public double area(){
        return super.area() * 2 + super.perimetro() * altezza;
    }

    public double volume(){
        return super.area() * altezza;
    }

}
