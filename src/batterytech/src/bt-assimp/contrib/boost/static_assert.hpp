
#ifndef AI_BOOST_STATIC_ASSERT_INCLUDED
#define AI_BOOST_STATIC_ASSERT_INCLUDED

#ifndef BOOST_STATIC_ASSERT

namespace boost {
	namespace detail {

		template <bool b>  class static_assertion_failure;
		template <>        class static_assertion_failure<true> {};
	}
}

#ifdef DEBUG  
#define BOOST_STATIC_ASSERT(eval) \
{boost::detail::static_assertion_failure<(eval)> assert_dummy;assert_dummy;}
#else
#define BOOST_STATIC_ASSERT(eval)
#endif

#endif
#endif // !! AI_BOOST_STATIC_ASSERT_INCLUDED
