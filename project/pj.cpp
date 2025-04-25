#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
class Item
{
protected:
    int id;
    string name;
    double price;

public:
    Item(int itemId, const string &itemName, double itemPrice)
        : id(itemId), name(itemName), price(itemPrice) {}

    int getId() const
    {
        return id;
    }

    string getName() const
    {
        return name;
    }

    double getPrice() const
    {
        return price;
    }

    virtual void display() const
    {
        cout << id << " " << name << " " << price << endl;
    }
};

class Product : public Item
{
public:
    Product(int productId, const string &productName, double productPrice)
        : Item(productId, productName, productPrice) {}
};

// New class CartProduct that inherits from Item
class CartProduct : public Item
{
private:
    int quantity;

public:
    CartProduct(int productId, const string &productName, double productPrice, int productQuantity)
        : Item(productId, productName, productPrice), quantity(productQuantity) {}

    int getQuantity() const
    {
        return quantity;
    }

    void setQuantity(int q)
    {
        quantity = q;
    }

    double getTotalPrice() const
    {
        return quantity * getPrice();
    }

    void display() const
    {
        cout << getName() << " " << quantity << " " << getTotalPrice() << endl;
    }
};

class ShoppingCart
{
private:
    vector<CartProduct> cart;

public:
    void addProduct(const Product &product, int quantity)
    {
        for (CartProduct &item : cart)
        {
            if (item.getId() == product.getId())
            {
                item.setQuantity(item.getQuantity() + quantity);
                cout << "\nUpdated " << product.getName() << " quantity to " << item.getQuantity() << ".\n";
                return;
            }
        }
        cart.push_back(CartProduct(product.getId(), product.getName(), product.getPrice(), quantity));
        cout << "\nAdded " << product.getName() << " to the cart.\n";
    }

    void displayCart() const
    {
        if (cart.empty())
        {
            cout << "\nYour cart is empty.\n";
            return;
        }

        double total = 0;
        cout << "\nYour Cart:\n";
        cout << "Product   Quantity   Price\n";

        for (const CartProduct &item : cart)
        {
            item.display();
            total += item.getTotalPrice();
        }

        cout << "\nTotal: " << total << endl;
    }

    void saveCartToFile() const
    {
        ofstream file("z.txt");
        if (!file.is_open())
        {
            cerr << "Error: Unable to open file z.txt for writing.\n";
            return;
        }

        for (const CartProduct &item : cart)
        {
            file << item.getId() << " " << item.getName() << " " << item.getQuantity() << " " << item.getTotalPrice() << "\n"; // insertion in file
        }

        file.close();
        cout << "\nCart saved to file z.txt successfully.\n";
    }

    void loadCartFromFile(const vector<Product> &products)
    {
        ifstream file("z.txt");
        if (!file.is_open())
        {
            cout << "\nNo previous cart found (z.txt not available).\n";
            return;
        }

        int id, quantity;
        string name;
        double totalPrice;
        while (file >> id) // extraction operator
        {
            file.ignore();                  // Skip space
            getline(file, name, ' ');       // Read name until space
            file >> quantity >> totalPrice; // Read quantity and total price

            bool found = false;
            for (const Product &product : products)
            {
                if (product.getId() == id)
                {
                    addProduct(product, quantity);
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cerr << "Warning: Product with ID " << id << " (" << name << ") not found in the shop.\n";
            }
        }

        file.close();
        cout << "\nCart loaded from file z.txt successfully.\n";
    }

    void checkout() const
    {
        if (cart.empty())
        {
            cout << "\nYour cart is empty.\n";
            return;
        }

        double total = 0;
        cout << "\nCheckout Summary:\n";
        cout << "Product   Quantity   Price\n";
        for (const CartProduct &item : cart)
        {
            item.display();
            total += item.getTotalPrice();
        }

        cout << "\nTotal amount to be paid: " << total << endl;
    }
};

class Shop
{
private:
    vector<Product> products;
    ShoppingCart cart;

public:
    Shop()
    {
        products.push_back(Product(1, "Laptop", 899.99));
        products.push_back(Product(2, "Smartphone", 499.99));
        products.push_back(Product(3, "Headphones", 49.99));
        products.push_back(Product(4, "Smartwatch", 199.99));
        products.push_back(Product(5, "Tablet", 299.99));
        cart.loadCartFromFile(products);
    }

    void displayProducts() const
    {
        cout << "\nAvailable Products:\n";
        cout << "ID   Product   Price\n";
        for (const Product &product : products)
        {
            product.display();
        }
    }

    void addProductToCart(int productId, int quantity)
    {
        for (const Product &product : products)
        {
            if (product.getId() == productId)
            {
                cart.addProduct(product, quantity);
                return;
            }
        }
        cout << "\nInvalid product ID.\n";
    }

    void viewCart() const
    {
        cart.displayCart();
    }

    void saveCart() const
    {
        cart.saveCartToFile();
    }

    void checkout() const
    {
        cart.checkout();
    }

    void start()
    {
        int choice, productId, quantity;

        while (true)
        {
            cout << "\nOnline Shopping System\n";
            cout << "1. Display Products\n";
            cout << "2. Add to Cart\n";
            cout << "3. View Cart\n";
            cout << "4. Save Cart to File\n";
            cout << "5. Checkout\n"; // Added Checkout option
            cout << "6. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                displayProducts();
                break;
            case 2:
                cout << "\nEnter Product ID to add: ";
                cin >> productId;
                cout << "Enter quantity: ";
                cin >> quantity;
                addProductToCart(productId, quantity);
                break;
            case 3:
                viewCart();
                break;
            case 4:
                saveCart();
                break;
            case 5:
                checkout(); // Call checkout functionality
                break;
            case 6:
                cout << "\nExiting...\n";
                cart.saveCartToFile();
                return;
            default:
                cout << "\nInvalid choice. Try again.\n";
            }
        }
    }
};

int main()
{
    Shop shop;
    shop.start();
    return 0;
}