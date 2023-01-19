// Problem Statement
// Newton went to a mall. There are N items in a shop. For each i=1, 2, …, N, the price of the i- th item is Ai Rs. Newton has K coupons. Each coupon can be used on one item. You can use any number of coupons, possibly zero, on the same item. Using k coupons on an item with a price of a Rs allows him to buy it for max{a−kX, 0} Rs.
// Print the minimum amount of money Newton needs to buy all the items.
import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class Main {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int k = sc.nextInt();
		int x = sc.nextInt();
		int arr[] = new int[n];
		for(int i = 0; i<n; i++){
			arr[i] = sc.nextInt();
		}
		for(int i = 0; i<n; i++){
			if(k == 0){
				break;
			}
			int count = Math.min(k, arr[i]/x);
			arr[i]-=count*x;
			k-=count;
		}
		Arrays.sort(arr);
		long sum = 0;
		for(int i = 0; i<n-k; i++){
			sum += arr[i];
		}
		System.out.println(sum);
    }
}