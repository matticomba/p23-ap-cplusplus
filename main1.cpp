#include <iostream>

int i=12;

class DataFrame {
    int height=0;
    int width=0; 
};

int main(){
    int j=10;
    int k;

    {int j=21;j=j+1;
    std::cout<<j<<std::endl;};
    DataFrame df;
    std::cout<<i<<' '<<j<<' '<<k<<std::endl
    <<sizeof(j)<<'\n';
    std::cout<<sizeof(df)<<'\n';
}