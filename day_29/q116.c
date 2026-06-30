#include <stdio.h>
#include<string.h>

struct Inventory
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main(){
    //creaint inventory management system
    struct Inventory item[100];

    int total = 0;
    int choice;
    int i;
    int searchID;
    int found;

    do
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Product\n");
        printf("2. View Products\n");
        printf("3. Search Product\n");
        printf("4. Update Product\n");
        printf("5. Delete Product\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        if(choice==1)
        {
            printf("\nEnter Product ID: ");
            scanf("%d",&item[total].id);

            printf("Enter Product Name: ");
            scanf("%s",item[total].name);

            printf("Enter Quantity: ");
            scanf("%d",&item[total].quantity);

            printf("Enter Price: ");
            scanf("%f",&item[total].price);

            total++;

            printf("Product Added Successfully!\n");
        }

        else if(choice==2)
        {
            if(total==0)
            {
                printf("No Products Available.\n");
            }
            else
            {
                printf("\n------ Product List ------\n");

                for(i=0;i<total;i++)
                {
                    printf("\nProduct %d\n",i+1);
                    printf("ID : %d\n",item[i].id);
                    printf("Name : %s\n",item[i].name);
                    printf("Quantity : %d\n",item[i].quantity);
                    printf("Price : %.2f\n",item[i].price);
                }
            }
        }

        else if(choice==3)
        {
            found = 0;

            printf("Enter Product ID: ");
            scanf("%d",&searchID);

            for(i=0;i<total;i++)
            {
                if(item[i].id==searchID)
                {
                    printf("\nProduct Found\n");
                    printf("ID : %d\n",item[i].id);
                    printf("Name : %s\n",item[i].name);
                    printf("Quantity : %d\n",item[i].quantity);
                    printf("Price : %.2f\n",item[i].price);

                    found = 1;
                    break;
                }
            }

            if(found==0)
            {
                printf("Product Not Found.\n");
            }
        }

        else if(choice==4)
        {
            found = 0;

            printf("Enter Product ID to Update: ");
            scanf("%d",&searchID);

            for(i=0;i<total;i++)
            {
                if(item[i].id==searchID)
                {
                    printf("Enter New Name: ");
                    scanf("%s",item[i].name);

                    printf("Enter New Quantity: ");
                    scanf("%d",&item[i].quantity);
                    printf("Enter New Price: ");
                    scanf("%f",&item[i].price);

                    printf("Product Updated Successfully!\n");

                    found = 1;
                    break;
                }
            }

            if(found==0)
            {
                printf("Product Not Found.\n");
            }
        }

        else if(choice==5)
        {
            found = 0;

            printf("Enter Product ID to Delete: ");
            scanf("%d",&searchID);

            for(i=0;i<total;i++)
            {
                if(item[i].id==searchID)
                {
                    int j;

                    for(j=i;j<total-1;j++)
                    {
                        item[j]=item[j+1];
                    }

                    total--;

                    printf("Product Deleted Successfully!\n");

                    found = 1;
                    break;
                }
            }

            if(found==0)
            {
                printf("Product Not Found.\n");
            }
        }

        else if(choice==6)
        {
            printf("Thank You!\n");
        }
         else
        {
            printf("Invalid Choice!\n");
        }

    }
    while(choice!=6);
    
    return 0 ;
}