#ifndef _MISCELLANEOUS_TEMPLATES_H_
#define _MISCELLANEOUS_TEMPLATES_H_

// Miscellaneous function templates
// Michael P. Songy
// created: 9/25/97
// last modified: 9/25/97

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

template<class T>
void Clamp(const T &min, T &val, const T &max)
{
    val =
        (
            val < min ?
            min :
            (
                val > max ?
                max :
                val
            )
        );
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

template<class T>
void Wrap(const T &min, T &val, const T &max)
{
    val =
        (
            val < min ?
            max :
            (
                val > max ?
                min :
                val
            )
        );
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

#endif // _MISCELLANEOUS_TEMPLATES_H_
