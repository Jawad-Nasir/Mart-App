#include<stdio.h>

struct shop{
    int id;
    char p_Name[100];
    double  price;
    int quant;
    char stock;
};

    // Function for displaying items
void display_items(struct shop *item){
    printf(" ----------------------------------------------------------\n");
    printf("| PID |       Name      | Price(PKR) | Quantity | In-Stock |\n");
    for (int i = 0; i < 5; i++){
        printf("| %-3d | %-15s | %-10.2lf | %-8d | %-8c |\n", item[i].id, item[i].p_Name, item[i].price, item[i].quant, item[i].stock);
    }
    printf(" ----------------------------------------------------------\n");
}
    // Function for Clothing Section
void clothing(struct shop* c, double *amount) {
    int pid,result;

    while(1) {

        // Displaying the items in the Clothing section
        display_items(c);

        printf("Enter the PID of the item to add to cart (0 to exit): ");
        result = scanf("%d", &pid);

        if (pid == 0) {
            break;
        } else if ( result != 1 || pid > 5 || pid <= 0) {
            while ( getchar() != '\n');
            printf("\n\tInvalid PID , Please try again.\n");
        } else if (c[pid-1].quant <= 0) {
            printf("\n\t\tSorry!!, Out of Stock\n");
            c[pid-1].stock = 'N';
        } else {
            *amount += c[pid-1].price;
            (c[pid-1].quant)--;
        }
    }
}
    // Function for Edibles Section
void edibles(struct shop* e, double *amount) {
    int pid,result;

    while(1) {

        // Displaying the items in the Edibles section
        display_items(e);

        printf("Enter the PID of the item to add to cart (0 to exit): ");
        result = scanf("%d", &pid);

        if (pid == 0) {
            break;
        } else if ( result != 1 || pid > 5 || pid <= 0) {
            while ( getchar() != '\n' );
            printf("\n\tInvalid PID , Please try again.\n");
        } else if (e[pid-1].quant <= 0) {
            printf("\n\t\tSorry!!, Out of Stock\n");
            e[pid-1].stock = 'N';
        } else {
            *amount += e[pid-1].price;
            (e[pid-1].quant)--;
        }
    }
}
    // Function for Electronics Section
void electronics(struct shop* elec, double *amount) {
    int pid,result;

    while(1) {

        // Displaying the items in the Electonics section
        display_items(elec);

        printf("Enter the PID of the item to add to cart (0 to exit): ");
        result = scanf("%d", &pid);

        if (pid == 0) {
            break;
        } else if (result != 1 || pid > 5 || pid <= 0) {
            while ( getchar() != '\n' );    
            printf("\n\tInvalid PID , Please try again.\n");
        } else if (elec[pid-1].quant <= 0) {
            printf("\n\t\tSorry!!, Out of Stock\n");
            elec[pid-1].stock = 'N';
        } else {
            *amount += elec[pid-1].price;
            (elec[pid-1].quant)--;
        }
    }
}

int main() {
    int choose,result;
    double total = 0;
    struct shop cloth[5] = {{1,"Shirt",600.04,7,'Y'},{2,"Trouser",990.02,3,'Y'}, {3,"Ethnics",3200.55,2,'Y'},{4,"Sneaker",4999.00,5,'Y'},{5,"T-Shirt",700.66,7,'Y'}};
    struct shop edible[5] = {{1,"Lays-Salty",50.00,3,'Y'},{2,"Lays-Wavy",80.00,5,'Y'},{3,"Nestle-Yougurt",150.01,8,'Y'},{4,"Dairy-Milk",100.00,6,'Y'},{5,"Pepsi",130.00,9,'Y'}};
    struct shop electronic[5] = {{1,"Samsung-LCD",50000.00,9,'Y'},{2,"IPHONE-X",73000.00,5,'Y'},{3,"Vivo-A30",29990.02,3,'Y'},{4,"Eardots",2700.55,11,'Y'},{5,"Speakers",2500.56,7,'Y'}};

    while (1)
    {
        printf("\nSelect your prefered shopping category:\n\n1.Clothes\n2.Edibles\n3.Electronics\n4.Proceed to pay\n");
        result = scanf("%d", &choose);

        if (choose == 4) {
            break;
        } else if ( result != 1 || choose < 1 || choose > 3 ) {
            while ( getchar() !='\n' );
            printf("\n\tPlease  select a valid option!\n");
        }

        switch (choose)
        {
            case 1:
                clothing(cloth, &total);
                break;
            case 2:
                edibles(edible, &total);
                break;
            case 3:
                electronics(electronic, &total);
                break;
        }
    }
    
    printf("\n\tYour Total Bill is PKR. %.2lf\n", total);
    printf("\n\tThank you for shopping with us.\n\n");
    return 0;
}