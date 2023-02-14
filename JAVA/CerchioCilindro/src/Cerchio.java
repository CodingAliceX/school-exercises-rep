public class Cerchio {
    protected double raggio;

    public void setRaggio(double r){

        raggio = r;
    }

    public double getRaggio(){

        return raggio;
    }

    public double area(){

        return raggio * raggio * Math.PI;
    }

    public double perimetro(){

        return  2 * raggio * Math.PI;
    }

    public boolean maggiore(double r1, double r2){
        if(r1 > r2){

            return true;
        }
        else{

            return false;
        }
    }
}

