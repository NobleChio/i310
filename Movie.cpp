#include Movies.h

public:
    Movies::Movie()
    {
        title = "";
        genre = "";
        year = 0;
        rating = 0.0;
    }

    Movies::Movie(string t, string g, int y, double r)
    {
        title = t;
        genre = g;
        year = y;
        rating = r;
    }

    Movies::string getTitle() const
    {
        return title;
    }

    Movies::string getGenre() const
    {
        return genre;
    }

    Movies::int getYear() const
    {
        return year;
    }

    Movies::double getRating() const
    {
        return rating;
    }

    Movies::void display() const
    {
        cout << left
             << setw(30) << title
             << setw(15) << genre
             << setw(8) << year
             << fixed << setprecision(1)
             << rating << endl;
    }