#if defined _inc_impl
	#undef _inc_impl
#endif

#include "auth\impl"
#include "core\impl"

#if defined Y_PLAYER_REQUIRE_ACCOUNT
	#include "login\impl"
	#include "registration\impl"
#endif

#include "status\impl"

#include "admin\impl"