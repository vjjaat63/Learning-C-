import java.util.ArrayList;
import java.util.Scanner;
import java.util.HashMap;
import java.util.Stack;
import java.util.*;


class Device {
    private String IP;
    public ArrayList<ArrayList<String>> Connections;
    
    static HashMap<String, Device> map = new HashMap<>();
    public Device(){}
    public Device(String ip) {
        this.IP = ip;
    }

    public String getIP() {
        return IP;
    }
    public void Add(ArrayList<String> a){
        Connections.add(a);
    }
   
    public void showConnection(){};
}

// Switch class extending Device

class Switch extends Device {
   // private ArrayList<ArrayList<String>> Connections;
  

    public Switch(String ip) {
        super(ip);  // Call to parent class constructor
        Connections = new ArrayList<>();
        map.put(ip,this);
    }

    // Generic connect method with any object type that extends Device
    public <T extends Device> void connect(String name, T obj) {
        ArrayList<String> row = new ArrayList<>();
        row.add(name);
        row.add(obj.getIP());  
        Connections.add(row);
        
        ArrayList<String> r = new ArrayList<>();
        r.add("Switch");
        r.add(getIP());
        obj.Add(r);
    }
    
   
    public void showConnection() {
        System.out.println("Switch (" + getIP() + ") connections:");
        for (ArrayList<String> connection : Connections) {
            System.out.println(connection.get(0) + " -> " + connection.get(1));
        }
    }
    
    
}

// Router class extending Device
class Router extends Device {


    public Router(String ip) {
        super(ip);  // Call to parent class constructor
        Connections = new ArrayList<>();
        map.put(ip,this);
    }
    
    // Generic connect method with any object type that extends Device
   public <T extends Device> void connect(String name, T obj) {
        ArrayList<String> row = new ArrayList<>();
        row.add(name);
        row.add(obj.getIP());  
        Connections.add(row);
        
        ArrayList<String> r = new ArrayList<>();
        r.add("Router");
        r.add(getIP());
        obj.Add(r);
    }
    public void showConnection() {
        System.out.println("Router (" + getIP() + ") connections:");
        for (ArrayList<String> connection : Connections) {
            System.out.println(connection.get(0) + " -> " + connection.get(1));
        }
    }
    
}

class Desktop extends Device {
    
    public Desktop(String ip) {
        super(ip);  // Call to parent class constructor
        Connections = new ArrayList<>();
        map.put(ip,this);
    }

   public <T extends Device> void connect(String name, T obj) {
        ArrayList<String> row = new ArrayList<>();
        row.add(name);
        row.add(obj.getIP());  
        Connections.add(row);
        
        ArrayList<String> r = new ArrayList<>();
        r.add("Desktop");
        r.add(getIP());
        obj.Add(r);
    }
    public void showConnection() {
        System.out.println("Desktop/Machine (" + getIP() + ") connections:");
        for (ArrayList<String> connection : Connections) {
            System.out.println(connection.get(0) + " -> " + connection.get(1));
        }
    }
    
}

public class Network {
    
    // map = ip(String) | device(object)

public static String pathfinder(String source, String target) {
    if (!Device.map.containsKey(source) || !Device.map.containsKey(target)) {
        if (!Device.map.containsKey(source) && Device.map.containsKey(target))
            return "Source not found!";
        else if (Device.map.containsKey(source) && !Device.map.containsKey(target))
            return "Target not found!";
        else
            return "Neither Source nor Target found!";
    }

    Stack<String> road = new Stack<>();
    HashMap<String, Boolean> visited = new HashMap<>();
    
    road.push(source);
    visited.put(source, true);

    while (!road.isEmpty()) {
        String curr = road.peek();

        if (curr.equals(target)) {
            return String.join(" -> ", road);
        }

        Device device = Device.map.get(curr);
        boolean foundVisited = true;  

        for (ArrayList<String> connection : device.Connections) {
            String neighbor = connection.get(1);
            if (!visited.containsKey(neighbor)) {
                road.push(neighbor);
                visited.put(neighbor, true);
                foundVisited = false; 
                break;
            }
        }

        if (foundVisited) {
            road.pop();
        }
    }

    return "No path found between " + source + " and " + target;
}


    public static void main(String args[]) {
        // Base router and switch devices
        Router R1 = new Router("198.11.161.66");
        Switch S1 = new Switch("198.11.165.11");

        Router R2 = new Router("198.11.161.67");
        Switch S2 = new Switch("198.11.165.12");

        // Connect Switch S1 to Routers R1, R2 and Switch S2
        S1.connect("Router", R1);
        S1.connect("Router", R2);
        S1.connect("Switch", S2);

        // Connect Switch S2 to Routers R1, R2 and Switch S1
        S2.connect("Router", R1);
        S2.connect("Router", R2);
        //S2.connect("Switch", S1);

        // Connect Routers R1 and R2
        R1.connect("Router", R2);

        // Show connections for all devices
        boolean flag = true;
        while(flag){
            System.out.println("Enter any choice....");
            System.out.println("0 -> To EXIT");
            System.out.println("1 -> To add Desktop/Machine ");
            System.out.println("2 -> To add a Switch");
            System.out.println("3 -> To add a Router");
            System.out.println("4 -> To see the conneted devices ");
            System.out.println("5 -> To find the path between 2 devices ");
            
            
            Scanner scan = new Scanner(System.in);
            int a = scan.nextInt();
            switch(a){
                case 0:
                    flag = false;
                    break;
                case 1:   
                    System.out.println("Enter ip address of Machine/Desktop : ");
                    String ipD = scan.next();
                    Desktop objD = new Desktop(ipD);
                    Device.map.put(ipD,objD);
                    
                    System.out.println("Enter the device ip address which you want to connect - ");
                    String d_add = scan.next();
                    
                    boolean found = false;
                    for(String key : Device.map.keySet()){
                        if(key.equals(d_add)){
                            objD.connect("Desktop",Device.map.get(key));
                            System.out.println("Connection established");
                            found = true;          
                        }
                    }
                    if(!found){
                        System.out.println("Device not found ! Recheck IP address... ");
                    }
                    
                    break;
                    
                case 2:   
                    System.out.println("Enter ip address of Switch : ");
                    String ipS = scan.next();
                    Switch objS = new Switch(ipS);
                    Device.map.put(ipS,objS);
                    
                    System.out.println("Enter the device ip address which you want to connect - ");
                    String s_add = scan.next();
                    
                    found = false;
                    for(String key : Device.map.keySet()){
                        if(key.equals(s_add)){
                            objS.connect("Switch",Device.map.get(key));
                            System.out.println("Connection established");
                            found = true;
                        }
                    }
                    if(!found){
                        System.out.println("Switch not found ! Recheck IP address... ");
                    }
                    break;
                case 3:   
                    System.out.println("Enter ip address of Router : ");
                    String ipR = scan.next();
                    Router objR = new Router(ipR);
                    Device.map.put(ipR,objR);
                    
                    System.out.println("Enter the device ip address which you want to connect - ");
                    String r_add = scan.next();
                    
                    found = false;
                    for(String key : Device.map.keySet()){
                        if(key.equals(r_add)){
                            objR.connect("Router",Device.map.get(key));
                            System.out.println("Connection established");
                            found = true;
                        }
                    }
                    if(!found){
                        System.out.println("Router not found ! Recheck IP address... ");
                    }
                    break;
                case 4:
                    System.out.println("Enter the device ip address whose connections you want to see - ");
                    String srch = scan.next();
                    found = false;
                    for(String key : Device.map.keySet()){
                            if(key.equals(srch)){
                                        Device obj  =  Device.map.get(key);
                                        System.out.println("all connected devices");
                                        obj.showConnection();
                                        found = true;
                            }
                    }
                    if(!found){
                        System.out.println("Device not found ! Recheck IP address... ");
                    }
                    break;

                case 5 : 
                    System.out.print("Enter the ip address of first device : ");
                    String ip1 = scan.next();
                    System.out.print("Enter the ip address of second device : ");
                    String ip2 = scan.next();
                    String path = pathfinder(ip1,ip2);
                    System.out.println("Path is : " + path);

                default :
                    System.out.println("Enter a valid input...");
            }
        }
    }
}