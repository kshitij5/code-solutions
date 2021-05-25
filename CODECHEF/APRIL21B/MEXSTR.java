/* package codechef; // don't place package name! */
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef1
{
	public static void main (String[] args) throws java.lang.Exception{
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int t = reader.read();

        while(t > 0){
            String str = reader.readLine();

            for (int i = 0; i <= 1000000; i++){
                String a = new String(itoa(i, 2));
                
                boolean result = isSubSequence(a, str, a.length(), str.length());
                if(!result){
                    System.out.println(a);
                    break;
                }
            }
            t--;
        }
	}

    static boolean isSubSequence(String str1, String str2,int m, int n){
        // Base Cases
        if (m == 0)
            return true;
        if (n == 0)
            return false;
 
        // If last characters of two strings are matching
        if (str1.charAt(m - 1) == str2.charAt(n - 1))
            return isSubSequence(str1, str2, m - 1, n - 1);
 
        // If last characters are not matching
        return isSubSequence(str1, str2, m, n - 1);
    }
    
    static String itoa(int x, int base){
        boolean negative = false;
        String s = "";
        if (x == 0)
            return "0";
        negative = (x < 0);
        if (negative)
            x = -1 * x;
        while (x != 0) {
            // add char to
            // front of s
            s = (x % base) + s; 
              
            // integer division 
            // gives quotient
            x = x / base; 
        }
        if (negative)
            s = "-" + s;
        return s;
    }
}
