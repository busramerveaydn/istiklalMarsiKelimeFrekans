#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <locale.h>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Turkish");
  ifstream infile;
  infile.open("file1.txt");
  string s;
  int boy;
  int ks=0;
  int count_a=0,count_b=0,count_c=0,count_d=0,count_e=0,count_f=0,count_g=0,count_h=0,count_i=0,count_k=0,count_l=0,count_m=0,count_n=0,count_o=0,count_p=0,count_r=0,count_s=0,count_t=0,count_u=0,count_v=0,count_y=0,count_z=0,count_I=0;
  while(!infile.eof())
  {
    infile>>s;
    ks++;
    //cout<<s<<endl;
    boy = s.size();
    for(int i=0;i<boy;i++)
    {
      if(s[i]!=33&&s[i]!=34&&s[i]!=35&&s[i]!=36&&s[i]!=37&&s[i]!=38&&s[i]!=39&&
               s[i]!=40&&s[i]!=41&&s[i]!=42&&s[i]!=43&&s[i]!=44&&s[i]!=45&&s[i]!=46&&s[i]!=47&&s[i]!=58&&s[i]!=59&&s[i]!=60&&s[i]!=61&&s[i]!=62&&s[i]!=63&&s[i]!=96&&s[i]!=94)
      {
        cout<<s[i]<<"";
      }
    }
    cout<<endl;
    for(int i=0;i<boy;i++)
    {
        if(s[i]==65||s[i]==97)
        {
            count_a++;
        }
    }
    for(int i=0;i<boy;i++)
    {
        if(s[i]==66||s[i]==98)
        {
            count_b++;
        }
    }
    for(int i=0;i<boy;i++)
    {
        if(s[i]==67||s[i]==99)
        {
            count_c++;
        }
    }
    for(int i=0;i<boy;i++)
    {
        if(s[i]==68||s[i]==100)
        {
            count_d++;
        }
    }
    for(int i=0;i<boy;i++)
    {
        if(s[i]==69||s[i]==101)
        {
            count_e++;
        }
    }
    for(int i=0;i<boy;i++)
    {
        if(s[i]==70||s[i]==102)
        {
            count_f++;
        }
    }
    for(int i=0;i<boy;i++)
    {
        if(s[i]==71||s[i]==103)
        {
            count_g++;
        }
    }
    for(int i=0;i<boy;i++)
    {
        if(s[i]==72||s[i]==104)
        {
            count_h++;
        }
    }
    for(int i=0;i<boy;i++)
    {
        if(s[i]==73)
        {
            count_I++;
        }
    }
    for(int i=0;i<boy;i++)
    {
        if(s[i]==105)
        {
            count_i++;
        }
    }
    for(int i=0;i<boy;i++)
    {
        if(s[i]==75||s[i]==107)
        {
            count_k++;
        }
    }
    for(int i=0;i<boy;i++)
    {
        if(s[i]==76||s[i]==108)
        {
            count_l++;
        }
    }
    for(int i=0;i<boy;i++)
    {
        if(s[i]==77||s[i]==109)
        {
            count_m++;
        }
    }
    for(int i=0;i<boy;i++)
    {
        if(s[i]==78||s[i]==110)
        {
            count_n++;
        }
    }
    for(int i=0;i<boy;i++)
    {
        if(s[i]==79||s[i]==111)
        {
            count_o++;
        }
    }
    for(int i=0;i<boy;i++)
    {
        if(s[i]==80||s[i]==112)
        {
            count_p++;
        }
    }
    for(int i=0;i<boy;i++)
    {
        if(s[i]==82||s[i]==114)
        {
            count_r++;
        }
    }
    for(int i=0;i<boy;i++)
    {
        if(s[i]==83||s[i]==115)
        {
            count_s++;
        }
    }
    for(int i=0;i<boy;i++)
    {
        if(s[i]==84||s[i]==116)
        {
            count_t++;
        }
    }
    for(int i=0;i<boy;i++)
    {
        if(s[i]==85||s[i]==117)
        {
            count_u++;
        }
    }
    for(int i=0;i<boy;i++)
    {
        if(s[i]==86||s[i]==118)
        {
            count_v++;
        }
    }
    for(int i=0;i<boy;i++)
    {
        if(s[i]==89||s[i]==121)
        {
            count_y++;
        }
    }
    for(int i=0;i<boy;i++)
    {
        if(s[i]==90||s[i]==122)
        {
            count_z++;
        }
    }
  }
  cout<<"Toplam kelime sayýsý: "<<ks<<endl;
  cout<<"A ve a sayýsý: "<<count_a<<endl;
  cout<<"B ve b sayýsý: "<<count_b<<endl;
  cout<<"C ve c sayýsý: "<<count_c<<endl;
  cout<<"D ve d sayýsý: "<<count_d<<endl;
  cout<<"E ve e sayýsý: "<<count_e<<endl;
  cout<<"F ve f sayýsý: "<<count_f<<endl;
  cout<<"G ve g sayýsý: "<<count_g<<endl;
  cout<<"H ve h sayýsý: "<<count_h<<endl;
  cout<<"I sayýsý: "<<count_I<<endl;
  cout<<"i sayýsý: "<<count_i<<endl;
  cout<<"K ve k sayýsý: "<<count_k<<endl;
  cout<<"L ve l sayýsý: "<<count_l<<endl;
  cout<<"M ve m sayýsý: "<<count_m<<endl;
  cout<<"N ve n sayýsý: "<<count_n<<endl;
  cout<<"O ve o sayýsý: "<<count_o<<endl;
  cout<<"P ve p sayýsý: "<<count_p<<endl;
  cout<<"R ve r sayýsý: "<<count_r<<endl;
  cout<<"S ve s sayýsý: "<<count_s<<endl;
  cout<<"T ve t sayýsý: "<<count_t<<endl;
  cout<<"U ve u sayýsý: "<<count_u<<endl;
  cout<<"V ve v sayýsý: "<<count_v<<endl;
  cout<<"Y ve y sayýsý: "<<count_y<<endl;
  cout<<"Z ve z sayýsý: "<<count_z<<endl;
}
