#ifndef MOVIECOLLECTION_H
#define MOVIECOLLECTION_H

class MovieCollection {
    private:
        vector<Movie> movies;

    public:
        void addMovie(const Movie& movie);

        void displayAllMovies() const;

        void searchByTitle(string title) const;

        void displayByGenre(string genre) const;
        
        double calculateAverageRating() const;

        int getNumberOfMovies() const;
};

#endif