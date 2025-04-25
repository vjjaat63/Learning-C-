import java.time.LocalDate;
import java.time.LocalTime;
import java.time.LocalDateTime;

public class temp{
    public static void main(String []args){
        LocalTime time = LocalTime.now();
        LocalDate date = LocalDate.now();
        LocalDateTime timedate = LocalDateTime.now();

        System.out.println("Time is : " + time);
        System.out.println("Date is : " + date);
        System.out.println("Date and Time is : " + timedate);
        while(true){
            LocalTime newtime = LocalTime.now();
            try {
                Thread.sleep(1000);
            } catch (Exception e) {
                // TODO: handle exception
            }
            System.out.println(newtime.withNano(0));
        }
    }
}






























// import java.util.Scanner;
// public class temp{
//     public static void main(String[] args) {
//         Scanner obj = new Scanner(System.in);
//         System.out.print("Enter a : ");
//         int a = obj.nextInt();
//         System.out.print("Enter b : ");
//         int b = obj.nextInt();

//         try{
//             if(a<=0||b<=0)
//                 throw new Exception("Enter valid dimensions !");
//         }
//         catch(Exception e){
//             System.out.println(e);
//             return ;
//         }
//         int area = a*b;
//         System.out.println("Area is : " + area);
//     }
// }