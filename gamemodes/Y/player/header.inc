#if defined _inc_header
	#undef _inc_header
#endif

#include "auth\header"
#include "core\header"

#if defined Y_PLAYER_REQUIRE_ACCOUNT
	#include "login\header"
	#include "registration\header"
#endif

#include "status\header"

#include "admin\header"