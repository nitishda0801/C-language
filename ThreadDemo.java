import java.lang.*;
public class ThreadDemo extends Thread {
   ThreadDemo()
   {
       super("Child thread");
       System.out.println("thread="+this);
       System.out.println("Calling run() function...");
       start();
   } 
   public void run()
   {
       System.out.println("Inside run mfunction");
       System.out.println("Child thread exit");
   }
   public static void main(String[] args) {
    ThreadDemo td=new ThreadDemo();
    System.out.println("main thread1");
   // Thread.sleep(100);
    System.out.println("Main thraed2");

   }
}
