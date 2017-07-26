#include<cstdio>
#include<vector>
#include<cstdlib>
#include<cmath>
#include<omp.h>
#include<algorithm>
#define pb push_back
#define NMAX 10000000    

void merge(std::vector<int> &v,int ini,int fin,int pivot)
{
    //int mid=(ini+fin)>>1;
    int i=ini;
    int k=ini;
    int j=pivot+1;    
    std::vector<int> s(v.size());
    while( ini<=k && k<=fin)
    {
        if(i>pivot)s[k++]=v[j++];
        else if(j>fin)s[k++]=v[i++];
        else
        {
            if(v[i]<v[j])s[k++]=v[i++];          
            else s[k++]=v[j++];
        }        
    }
    for(int i=ini;i<=fin;i++)
    {
        v[i] = s[i];
    }
//    v=s;   
}

void recursive_mergesort(std::vector<int> &v,int ini,int fin,int pivot)
{
    int mid=(ini+fin)>>1;
    pivot = mid;
    if(ini == fin)return;
    recursive_mergesort(v,ini,mid,pivot);
    recursive_mergesort(v,mid+1,fin,pivot);
    merge(v,ini,fin,pivot);
}

void printv(std::vector<int> v)
{
    for(int i=0;i<v.size();i++)printf("%d ",v[i]);
    printf("\n");
}

void iterative_mergesort(std::vector<int> &v,int ini,int fin)
{
    int n = v.size();
    int pivot = 0,ans=n,j=0, jx=0;
    bool flag=true;
    int inc;
    for(int i=1;i<(int)log2(n)+1;i+=1)   
    {
        inc=pow(2,i);
#pragma omp parallel for firstprivate(flag,ans) private(j, jx,pivot)
        for(j=0;j<n;j+=inc)
        {           
            int jj = (j+(int)pow(2,i)-1);            
            if(jj>(n-1))
            {   
                jj = n-1;               
                //ans = pow(2,(int)((log2(n)/i)));
                ans = (int)n/pow(2,i-1);
                ans = pow(2,i-1)*ans;
                //printf("\n%d\n",ans);
                merge(v,j,jj,ans-1);
                //break;
                flag=false;  
                jx=j;  
                //printf("%d-%d ",j,jj);
            }
            if(flag)
            {
                pivot = (j+jj)>>1;
                merge(v,j,jj,pivot);
                //printf("%d-%d ",j,jj);     
            }     
                                                      
        }
        //printv(v); 
        //printf("%d-%d ",j,jj);
        //printf("\n");
        flag = true;          
    }    
    int p = pow(2,(int)log2(n));
    //printf("%d ",p);
    //printf("\n");
    merge(v,0,n-1,p-1);
}

int main()
{   
    std::vector<int> v; 
    
    /*
    v.pb(5);
    v.pb(-2);
    v.pb(3);
    v.pb(0);
    v.pb(1);
    v.pb(7);
    */
    
    // Random Data NMAX = 1000
    //for(int i=0;i<NMAX;i++)v.pb( rand()%NMAX );
    
    for(int i=0;i<NMAX;i++)v.push_back(i);
    std::random_shuffle(v.begin(),v.end());
    
    //printf("\n ---------------------- Random Data -------------------------- \n");
    //printv(v),
    //recursive_mergesort(v,0,v.size()-1,0); // sort(v.begin(),v.end())
    iterative_mergesort(v,0,v.size()-1);
    //printf("\n ---------------------- Sorted list -------------------------- \n");
    //printv(v);
   
    return 0;
}
