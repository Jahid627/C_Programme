#include<stdio.h>
int main(){


float unit;
float amount;
float total;

Printf("Enter The Units You used");
Scanf("The unit is %f ",&unit);
if (unit<=50){

    amount=(unit*50);
}

else if (unit<=150){

amount= 37.5+ (unit*1);

}

else{


amount= 137.5+(unit*1.50);

}

total= amount + amount*0.25;
printf("Your Bill is %f ",total);


}
