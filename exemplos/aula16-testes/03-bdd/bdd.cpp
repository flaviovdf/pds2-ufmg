#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

SCENARIO( "vectors can be sized and resized" ) {
    GIVEN( "A vector with some items" ) {
        std::vector<int> v( 5 );

        CHECK( v.size() == 5 );
        CHECK( v.capacity() >= 5 );

        WHEN( "the size is increased" ) {
            v.resize( 10 );

            THEN( "the size and capacity change" ) {
                CHECK( v.size() == 10 );
                CHECK( v.capacity() >= 10 );
            }
        }
        WHEN( "the size is reduced" ) {
            v.resize( 0 );

            THEN( "the size changes but not capacity" ) {
                CHECK( v.size() == 0 );
                CHECK( v.capacity() >= 5 );
            }
        }
        WHEN( "more capacity is reserved" ) {
            v.reserve( 10 );

            THEN( "the capacity changes but not the size" ) {
                CHECK( v.size() == 5 );
                CHECK( v.capacity() >= 10 );
            }
        }
        WHEN( "less capacity is reserved" ) {
            v.reserve( 0 );

            THEN( "neither size nor capacity are changed" ) {
                CHECK( v.size() == 5 );
                CHECK( v.capacity() >= 5 );
            }
        }
    }
}
