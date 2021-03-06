/*
 Source: UVA
 Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3183
 */

























/*
 ---------C++--------:
 
 #include <bits/stdc++.h>

 using namespace std;

 const int MAX_N = 100005;

 int a[MAX_N];
 int n, test;

 int main () {
     scanf("%d", &test);

     for (int t = 1; t <= test; t++) {
         printf("Case %d: ", t);
         scanf("%d", &n);

         for (int i = 1; i <= n; i++) {
             scanf("%d", &a[i]);
         }

         int l = 1; int r = a[n] + 1;

         int res;

         while (l <= r) {
             int mid = (l + r) >> 1;
             int k = mid;

             bool check = true;
             for (int i = 1; i <= n; i++) {
                 if (a[i] - a[i - 1] > k) {
                     check = false;
                     break;
                 }
                 else {
                     if (a[i] - a[i - 1] == k) {
                         k--;
                     }
                 }
             }

             if (check == true) {
                 res = mid;
                 r = mid - 1;
             }
             else {
                 l = mid + 1;
             }
         }

         printf("%d\n", res);
     }
     return 0;
 }
 
 
 
 
 -------Python-------:
 
 T = int(input())
 for tc in range(1, T + 1):
     print('Case %d: ' % tc, end = '')
     n = int(input())
     a = [0] + list(map(int, input().split()))
     l = 1
     r = a[-1] + 1
     res = 0
     
     while l <= r:
         mid = (l + r) // 2
         k = mid
         check = True
        
         for i in range(n + 1):
             if a[i] - a[i - 1] > k:
                 check = False
                 break
             else:
                 if a[i] - a[i - 1] == k:
                     k -= 1
         
         if check:
             res = mid
             r = mid - 1
         else:
             l = mid + 1

     print(res)
 
 
 
 
 
 --------Java--------:
 
 import java.util.*;
 import java.io.*;


 public class Main
 {
     static PrintWriter out = new PrintWriter(new BufferedOutputStream(System.out), true);
     static MyScanner in = new MyScanner();
     static final int MAX_N = 100005;
     static int a[] = new int[MAX_N];
     static int n, test;
     

     public static void main(String[] args) {
         test = in.nextInt();

     for (int t = 1; t <= test; t++) {
             out.printf("Case %d: ", t);
             n = in.nextInt();

             for (int i = 1; i <= n; i++) {
                 a[i] = in.nextInt();
             }

             int l = 1; int r = a[n] + 1;

             int res = 0;

             while (l <= r) {
                 int mid = (l + r) >> 1;
                 int k = mid;

                 boolean check = true;
                 for (int i = 1; i <= n; i++) {
                     if (a[i] - a[i - 1] > k) {
                         check = false;
                         break;
                     }
                     else {
                         if (a[i] - a[i - 1] == k) {
                             k--;
                         }
                     }
                 }

                     if (check == true) {
                         res = mid;
                         r = mid - 1;
                     }
                     else {
                         l = mid + 1;
                     }
         }

         out.printf("%d\n", res);
     }
     }

     public static class MyScanner {
         BufferedReader br;
         StringTokenizer st;

         public MyScanner() {
             br = new BufferedReader(new InputStreamReader(System.in));
         }
         String next() {
             while (st == null || !st.hasMoreElements()) {
                 try {
                         st = new StringTokenizer(br.readLine());
                 } catch (IOException e) {
                         e.printStackTrace();
                 }
             }
             return st.nextToken();
         }
         int nextInt() {
                 return Integer.parseInt(next());
         }
         long nextLong() {
                 return Long.parseLong(next());
         }
         double nextDouble() {
                 return Double.parseDouble(next());
         }
         String nextLine() {
             String str = "";
             try {
                 str = br.readLine();
             } catch (IOException e) {
                 e.printStackTrace();
             }
             return str;
         }
     }
 }
 
 
 */







