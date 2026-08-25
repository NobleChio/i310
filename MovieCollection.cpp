#include MovieCollection.h 

    MovieCollection::void addMovie(const Movie& movie)
    {
        movies.push_back(movie);
    }

    MovieCollection::void displayAllMovies() const
    {
        if (movies.empty())
        {
            cout << "No movies found." << endl;
            return;
        }

        cout << left
             << setw(30) << "Title"
             << setw(15) << "Genre"
             << setw(8) << "Year"
             << "Rating" << endl;

        for (const Movie& movie : movies)
            movie.display();
    }

    MovieCollection::void searchByTitle(string title) const
    {
        for (const Movie& movie : movies)
        {
            if (toLower(movie.getTitle()) == toLower(title))
            {
                movie.display();
                return;
            }
        }

        cout << "Movie not found." << endl;
    }

    MovieCollection::void displayByGenre(string genre) const
    {
        bool found = false;

        for (const Movie& movie : movies)
        {
            if (toLower(movie.getGenre()) == toLower(genre))
            {
                movie.display();
                found = true;
            }
        }

        if (!found)
            cout << "No movies found." << endl;
    }

    MovieCollection::double calculateAverageRating() const
    {
        if (movies.empty())
            return 0.0;

        double total = 0.0;

        for (const Movie& movie : movies)
            total += movie.getRating();

        return total / movies.size();
    }

    MovieCollection::int getNumberOfMovies() const
    {
        return movies.size();
    }