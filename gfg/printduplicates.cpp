void printDuplicates(int a[], int n)
{
   int f = 1;
   for(int i=0;i<n;i++)
   {
       int x = a[i]%100;
       a[x]+=100;
       if(a[x]>=200 && a[x]<300)
            {
                cout<<x<<" ";
                f = 0;
            }
   }
   
   if(f)
   cout<<"-1";
}