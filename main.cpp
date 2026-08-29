#include "FileManager.h"

int main()
{
    MovieCollection collection;

    if (!FileManager::loadMovies("movies.txt", collection))
    {
        cout << "Could not open movies.txt" << endl;
        return 1;
    }

    cout << collection.getNumberOfMovies()
         << " movies loaded." << endl;

    int choice;

    do
    {
        displayMenu();
        cin >> choice;
        cin.ignore();

        if (choice == 1)
        {
            collection.displayAllMovies();
        }
        else if (choice == 2)
        {
            string title;

            cout << "Enter title: ";
            getline(cin, title);

            collection.searchByTitle(title);
        }
        else if (choice == 3)
        {
            string genre;

            cout << "Enter genre: ";
            getline(cin, genre);

            collection.displayByGenre(genre);
        }
        else if (choice == 4)
        {
            cout << "Average rating: "
                 << fixed << setprecision(2)
                 << collection.calculateAverageRating()
                 << endl;
        }
        else if (choice == 5)
        {
            cout << "Number of movies: "
                 << collection.getNumberOfMovies()
                 << endl;
        }
        else if (choice == 0)
        {
            cout << "Goodbye." << endl;
        }
        else
        {
            cout << "Invalid choice." << endl;
        }

    } while (choice != 0);

    return 0;
}
