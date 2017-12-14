import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Main
{
    private static String A[][];
    private static boolean visited[][];
    private static int N;
    private static int testCase=1;
    private static Scanner scanner;
    private static boolean doneW;
    private static boolean doneB;

    public static void input()
    {

        while(scanner.hasNext())
        {

            if(scanner.hasNextInt())
            {
                N=scanner.nextInt();

            }

            if(N==0)
                break;
            A=new String[N][N];
            visited=new boolean[N][N];
            doneW=false;
            doneB=false;

            for(int i=0; i<N; i++)
            {
                String input;
                if(scanner.hasNext())
                {
                    input=scanner.next();

                    for(int j=0; j<N; j++)
                    {
                        A[i][j]=Character.toString(input.charAt(j));
                        visited[i][j]=false;

                    }
                }

            }

            for(int j=0; j<N; j++)
            {
                int i=0;
                if(A[i][j].equals("b") && visited[i][j]==false)
                    resultB(0,j,0);

            }

            for(int i=0; i<N; i++)
            {
                int j=0;
                if(A[i][j].equals("w") && visited[i][j]==false)
                    resultW(i,0,0);

            }





            testCase++;
        }

    }

    public static void resultW(int i, int j, int count)
    {



        if(i==N || j==N || i<0 || j<0)
            return;
        if(visited[i][j])
            return;
        if(A[i][j].equals("b"))
            return;
        if(N-1==j && doneW==false)
        {
            System.out.println(testCase+" "+"W");
            doneW=true;
            return;
        }


        visited[i][j]=true;
        resultW(i,j+1,count+1);
        resultW(i+1,j+1,count+1);
        resultW(i+1,j,count);
        resultW(i-1,j-1,count);
        resultW(i,j-1,count);
        resultW(i-1,j,count);


    }

    public static void resultB(int i, int j, int count)
    {



        if(i==N || j==N || i<0 || j<0)
            return;
        if(visited[i][j])
            return;
        if(A[i][j].equals("w"))
            return;
        if(N-1==i && doneB==false)
        {
            System.out.println(testCase+" "+"B");
            doneB=true;
            return;
        }


        visited[i][j]=true;
        resultB(i,j+1,count);
        resultB(i+1,j+1,count+1);
        resultB(i+1,j,count+1);
        resultB(i-1,j-1,count);
        resultB(i,j-1,count);
        resultB(i-1,j,count);


    }

    public static void main (String[] args) throws java.lang.Exception
    {

        scanner=new Scanner(System.in);
        input();
    }
}
