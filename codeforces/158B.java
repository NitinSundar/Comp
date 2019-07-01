import java.util.Scanner;
public class Sample{
    public static void main(String args[]){
        
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a[]=new int[n];
        int c1=0,c2=0,c3=0,c4=0;
        for(int i=0;i<n;i++){
        a[i]=sc.nextInt();
            if(a[i]==1)
            c1++;
            else if(a[i]==2)
            c2++;
            else if(a[i]==3)
            c3++;
            else
            c4++;
        }
        int count=c4,remain1=0;
        
        if( c3==c1)
      
        count+=c3;
        if(c3>c1){
            count+=c1;
           
            count+=(c3-c1);
        }
        if(c3<c1){
            count+=c3;
           
            remain1=(c1-c3);
           
        }
        int remain2=0;
      if(c2!=0 && c2%2==0){
      count+=c2/2;
      }
      if(c2%2!=0){
      count+=c2/2;
      remain2=2;}
      if(remain2==2){
        int k=remain1+2;
        if(k%4==0)
        count+=k/4;
        else
        count+=k/4+1;}
        else{
        if(remain1%4==0)
        count+=remain1/4;
        else
        count+=remain1/4+1;}
        
        
        System.out.println(count);
        
    }
    
}