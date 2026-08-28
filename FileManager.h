#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include "MovieCollection.h"

using namespace std;

class FileManager
{
    private:
        // Nothing


    public: 

        static bool loadMovies(string filename, MovieCollection& collection);
};

#endif //FILEMANAGER_H