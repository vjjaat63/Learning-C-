#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Media
{
public:
    string title;
    bool isIssued;

    Media(string t)
    {
        title = t;
        isIssued = false;
    }

    virtual void issue()
    {
        if (!isIssued)
        {
            isIssued = true;
            cout << title << " has been issued." << endl;
        }
        else
        {
            cout << title << " is already issued." << endl;
        }
    }

    virtual void deposit()
    {
        if (isIssued)
        {
            isIssued = false;
            cout << title << " has been deposited." << endl;
        }
        else
        {
            cout << title << " was not issued." << endl;
        }
    }

    virtual void displayInfo() const = 0; // Pure virtual function

    string getTitle() const
    {
        return title;
    }
};

// Derived classes
class Book : public Media
{
    string author;

public:
    Book(string t, string a) : Media(t), author(a) {}

    void displayInfo() const override
    {
        cout << "Book: " << title << " by " << author;
        cout << (isIssued ? " (Issued)" : " (Available)") << endl;
    }
};

class Tape : public Media
{
    int duration; // Duration in minutes

public:
    Tape(string t, int d) : Media(t), duration(d) {}

    void displayInfo() const override
    {
        cout << "Tape: " << title << ", Duration: " << duration << " mins";
        cout << (isIssued ? " (Issued)" : " (Available)") << endl;
    }
};

// DigitalLibrary class to manage media
class DigitalLibrary
{
    vector<Media *> mediaCollection;

public:
    void addMedia(Media *media)
    {
        mediaCollection.push_back(media);
    }

    void issueMedia(const string &title)
    {
        for (Media *media : mediaCollection)
        {
            if (media->getTitle() == title)
            {
                media->issue();
                return;
            }
        }
        cout << "Media '" << title << "' not found." << endl;
    }

    void depositMedia(const string &title)
    {
        for (Media *media : mediaCollection)
        {
            if (media->getTitle() == title)
            {
                media->deposit();
                return;
            }
        }
        cout << "Media '" << title << "' not found." << endl;
    }

    void displayCollection() const
    {
        cout << "\nLibrary Collection:\n";
        for (Media *media : mediaCollection)
        {
            media->displayInfo();
        }
    }

    ~DigitalLibrary()
    {
        for (Media *media : mediaCollection)
        {
            delete media; // Clean up allocated media
        }
    }
};

int main()
{
    DigitalLibrary library;

    // Add media items to the library
    library.addMedia(new Book("Dragon Ball Z", "Akira Toriyama"));
    library.addMedia(new Book("1984", "George Orwell"));
    library.addMedia(new Tape("Hatim", 148));
    library.addMedia(new Tape("Shaktiman", 152));

    library.displayCollection();

    // Issue and deposit some media items
    library.issueMedia("Gintama");
    library.issueMedia("Shaktiman");
    library.displayCollection();

    library.depositMedia("Hatim");
    library.depositMedia("Shaktiman");
    library.displayCollection();

    return 0;
}
