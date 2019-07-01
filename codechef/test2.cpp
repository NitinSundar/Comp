    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int lli;
    vector<pair<int,int> > points,ans;
    int start,stop;
    void func(int k)
    {
      start=-1;
      stop = -1;
      int sz=points.size();
      vector<double> v;
      for(int i=0;i<points.size();i++)
      {
         pair<int,int> a,b;
         a = points[i],b = points[(i+1)%sz];
         double x1 = a.first,x2=b.first,y1=a.second,y2=b.second;
         if(!((y1<=k && k<=y2) || (y2<=k && k<=y1 ))) continue;
         if(y1 == y2) continue;
         double res = x1 + ((k-y1)*(x2-x1))/(y2-y1);
         if(x1<=res && res<=x2 || (x2<=res && res<=x1)) {v.push_back(res);}
      }
      sort(v.begin(),v.end());
      start=(int)v[0],stop=(int)v[(int)v.size() - 1];
      if(v[0]-(double)start >= 0) start++;
      if(v[(int)v.size() - 1]-stop == 0.0) stop--;
    }
    int main()
    {
      int t;
      cin>>t;
      while(t--)
      {
         points.clear();
         ans.clear();
         int n;
         cin>>n;
         int minx=1e9+9,miny=1e9+9,maxx=-1e9-9,maxy = -1e9-9;
         for(int i=0;i<n;i++)
         {
            int x,y;
            cin>>x>>y;
            points.push_back(make_pair(x,y));
            minx=min(minx,x);
            miny=min(miny,y);
            maxx=max(x,maxx);
            maxy=max(y,maxy);
         }
         for(int y = miny + 1;y<maxy;y++)
         {
            func(y);
            //cout<<y<<" "<<start<<" "<<stop<<endl;
            if(start!=-1 && stop!=-1)for(int x=start;x<=stop;x++) ans.push_back(make_pair(x,y));
            if(ans.size() >= n/10) break;
         }
         if(ans.size() >= n/10)
         {
            int pp = n/10;
            for(int i=0;i<pp;i++)
               cout<<ans[i].first<<" "<<ans[i].second<<"\n";
            cout<<"\n";
         }
         else cout<<"-1\n";
     
         
      }
      return 0;
    } 