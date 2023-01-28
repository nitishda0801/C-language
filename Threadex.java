public class Threadex extends Thread {
    public void run()
    {
        System.out.println("inside run method");
    }
    public static void main(String[] args) 
    {
        Threadex t=new Threadex();
        t.start();
        System.out.println("Inside main");
    }
}
