#include <iostream>
#include <cmath>
int main() {
    int a,b,c,lim,temp,count=1;
    std::cout<<"please input your the limit you had set:\t"<<std::endl;
    std::cin>>lim;
    for(a=1;a<=lim;a++){
        for(b=a+1;b<=lim;b++){
            temp=a*a+b*b;
            c=(int)sqrt(temp);
            if(c*c==temp){
                printf("%d*%d+%d*%d=%d*%d\t",a,a,b,b,c,c);
                if(count%4==0)
                    printf("\n");
                count++;
            }

        }
    }
    return 0;
}
