#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

template <typename Object, typename Comparator>
const Object & findMax( const vector<Object> & arr, Comparator cmp )
{
	int maxIndex = 0;

	for( int i = 1; i < arr.size( ); ++i )
		if( cmp.isLessThan( arr[ maxIndex ], arr[ i ] ) )
			maxIndex = i;

	return arr[ maxIndex ];
}

class CaseInsensitiveCompare
{
	public:
		bool isLessThan( const string & lhs, const string & rhs ) const
		{ return strcasecmp( lhs.c_str( ), rhs.c_str( ) ) < 0; }
};

int main( )
{
	vector<string> arr = { "ZEBRA", "alligator", "crocodile" };
	cout << findMax( arr, CaseInsensitiveCompare{ } ) << endl;

	return 0;
}

