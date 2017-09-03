import java.io.*;
class prime
      {
         public static void main(String args[])
          {
             int i,count=0,n=17;
             for(i=2;i<n;i++)
               {
                  if((n%i)==0)
                   {
                    count=1; 
                     break;
                    }
                    }
                    if(count==0)
                    {
                        System.out.println("prime number");
                     }
                    else
                     {
                       System.out.println("not prime");
                       }
                      }         
                   }
               
        