# Intr0duction 

This is an online shopping application project which is based on c programming . 
In this project we used switch cases ,function ,array and pointer.It calculate the  total ammount for the selected iteam which is selected by customer.
it's calculate 



## Functionality Provided
1. Coustumer will be purchase shoes,clothing,tshirts jeans and many more of different brand .
2. Coustumer can able to add multiple ittem .
3. Coustumer can reduce the item and add new item.
4. Coustumer can see their total at the end of shopping and get the bill .

## Approach 
Firstly the main menu will be appear on screen to the coustumer. Then you have to enter you name by which you are going to continue the shopping, than all the available product will appear on your screen.them the coustumer have to select the iteam or product and than he add to cart. IF coustumer want to countine shopping than  they can add the more iteam in the cart and countine their shopping .Once the shooping is completed than the coustumer see their iteam,quantity , cost f every product and the total bill. Finally the total amount to be paid on display.

## The implementation of the functionality 
The below provided link take you to the C coding of the application :
 https://github.com/Atulsingh20/M1_Project-/blob/d8bea39ed521d245b3edf7a5f3ae865c2e7173fe/project_shopping.c# M1_Project-
 
 ## output 
 
 ![Screenshot (12)](https://user-images.githubusercontent.com/101882303/161274029-4b3ec201-f559-42e7-ae13-3f75592ee446.png)

## Denonstration 
Step 1: Firstly, (char items[]) is constructed , which store the product details i.e brands name ,cost and varitey .
![Screenshot (13)](https://user-images.githubusercontent.com/101882303/161277095-2b8182e3-de75-47d7-b6fb-b70905738332.png)

step 2: Ask for detail of coustumer for example -' Please Enter Your Name'.In my code get(str) and printf use for welcoming the coustumer :
![Screenshot (13)](https://user-images.githubusercontent.com/101882303/161278081-b74202a4-6984-4643-84fd-9f8322ff8d19.png)

step 3: After that it's give choice to the coustumer to select the Product in which they have number of brand with differnt price range . whenever coustumer select their items, they need tu enter 1 tu continue th shopping and see the total bill,if coutumer want to continue heri shopping they have to  enter 2 or if they want to end the shopping they have to press any other number . with the help of loop and switch statment hole function run.
![Screenshot (13)](https://user-images.githubusercontent.com/101882303/161280970-fc9fddbb-289c-4f36-b348-4994c93b849b.png)

step 4: If coustumer want to buy product of any other category ? "Enter your choice" message shown on the screen .if coustumer enter any invalid value the "Enter Valid Categories Choice" is pop up on the screen .
![Screenshot (13)](https://user-images.githubusercontent.com/101882303/161282475-fb11c93d-2997-45e2-a31d-d2cb11b01492.png)

step 5: At last ,if coustumer want to delete any product they have to enter theri id and select the product,whenever iteam is delete the price of that product will deduct from total ammount. The total amount and the cost of every product will shown on screen i.e 'Your Total Purchase Bill' and the service will end by Thank You message "Thanks %s for Shopping and Visit again to Brand Store".
![Screenshot (13)](https://user-images.githubusercontent.com/101882303/161284092-af9a1e4a-2742-432c-a697-5463dcd62af6.png)


