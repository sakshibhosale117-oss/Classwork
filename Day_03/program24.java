import java.util.Scanner;

class program24
{
    public static void main(String A[])
    {
        Scanner scanner = null;
        String sName = null;

        scanner = new Scanner(System.in);

        System.out.println("Enter your name :");
        sName = scanner.next();                         //only print single word

        System.out.println("Welcome "+ sName);
        
    }    
}

/*
C:\Users\Lenovo\Desktop\LB>java program24.java
Enter your name :
sakshi bhosale
Welcome sakshi

C:\Users\Lenovo\Desktop\LB>java program24.java
Enter your name :
Sakshi_Tatyaso_Bhosale
Welcome Sakshi_Tatyaso_Bhosale
 */