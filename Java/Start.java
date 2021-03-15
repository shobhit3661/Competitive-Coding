import java.util.*;
public class Start{
    public static void main(String[] args){
 Scanner sc = new Scanner(System.in);
 int noOfItems = sc.nextInt();
 String input="";
 int price[] = new int[noOfItems];
 int percentage[] = new int[noOfItems];
 String itemName[] = new String[noOfItems];
 String[] values = new String[3];
 for(int i=0;i<noOfItems;++i){
  input = sc.nextLine();
  values = input.split(",");
  itemName[i] = values[0];
  price[i] = Integer.parseInt(values[1]);
  percentage[i] = Integer.parseInt(values[2]);
 }
}
}