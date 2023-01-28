public class Threadex1 implements Runnable {
    public void run()
    {
        System.out.println("Thread is running");
    }
    public static void main(String[] args) {
        Threadex1 t=new Threadex1();
        Thread th=new Thread();
        th.start();
    }
}
