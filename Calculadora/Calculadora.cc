import java.util.Scanner;

public class Calculadora {

    public static void main(String []agrs)
    {
        int op=0;
        int n1,n2,s,m,d,r;
        Scanner sc= new Scanner(System.in);

        do{
            System.out.println("\nCalculadora\n"+
            "************\n"+
            "[1] SUMAR\n"+
            "[2] RESTAR\n"+
            "[3] SALIR\n"+
            "Ingresa una opcion:");

            op = Integer.parseInt(sc.nextLine());

           switch(op)
            {
                case 1:
                    System.out.println("Ingrese numero 1");
                    n1 = Integer.parseInt(sc.nextLine());
                    System.out.println("Ingrese numero 2");
                    n2 = Integer.parseInt(sc.nextLine());
                    s=n1+n2;
                    System.out.println("El resultado es: " + s);
                    break;
                case 2:
                    System.out.println("Ingrese numero 1");
                    n1 = Integer.parseInt(sc.nextLine());
                    System.out.println("Ingrese numero 2");
                    n2 = Integer.parseInt(sc.nextLine());
                    s=n1+n2;
                    System.out.println("El resultado es: " + s);
                    break;
            }
        }while(op!=3);
    }

}
