#include<stdio.h>
int main()
{
    float u;
    scanf("%f",&u);
    if(u<=199)
    {
        float cu=1.20;
        float bill= cu*u;
        float  surcharge;
        if(bill>=400)
        {
           surcharge=((bill*15)/100);
        }
      float  tbill = bill+surcharge;
      printf("Units Consumed: %.0f
",u);
      printf("Cost per Unit: %.2f
",cu);
      printf("Bill: %.2f
",bill);
      printf("Surcharge: %.2f
",surcharge);
      printf("Total Amount: %.2f
",tbill);
    }
    else if(u>=200 && u<400)
    {
        float cu=1.40;
        float bill= cu*u;
        float  surcharge;
        if(bill>=400)
        {
        surcharge=((bill*15)/100);
        }
      float  tbill = bill+surcharge;
      printf("Units Consumed: %.0f
",u);
      printf("Cost per Unit: %.2f
",cu);
      printf("Bill: %.2f
",bill);
      printf("Surcharge: %.2f
",surcharge);
      printf("Total Amount: %.2f",tbill);
    }
     else if(u>=400 && u<600 )
    {
        float cu=1.60;
        float bill= cu*u;
        float  surcharge;
        if(bill>=400)
        {
           surcharge=((bill*15)/100);
        }
       float tbill = bill+surcharge;
      printf("Units Consumed: %.0f
",u);
      printf("Cost per Unit: %.2f
",cu);
      printf("Bill: %.2f
",bill);
      printf("Surcharge: %.2f
",surcharge);
      printf("Total Amount: %.2f
",tbill);
    }
    else if(u>=600 && u<800 )
    {
        float cu=1.80;
        float bill= cu*u;
        float  surcharge;
        if(bill>=400)
        {
         surcharge=((bill*15)/100);
        }
        float tbill = bill+surcharge;
      printf("Units Consumed: %.0f
",u);
      printf("Cost per Unit: %.2f
",cu);
      printf("Bill: %.2f
",bill);
      printf("Surcharge: %.2f
",surcharge);
      printf("Total Amount: %.2f
",tbill);
    }
    else if(u>=800)
    {
        float cu=2.00;
        float bill= cu*u;
        float  surcharge;
        if(bill>=400)
        {
           surcharge=((bill*15)/100);
        }
      float  tbill = bill+surcharge;
      printf("Units Consumed: %.0f
",u);
      printf("Cost per Unit: %.2f
",cu);
      printf("Bill: %.2f
",bill);
      printf("Surcharge: %.2f
",surcharge);
      printf("Total Amount: %.2f
",tbill);
    }
}