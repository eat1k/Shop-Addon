#if defined _shop_addon_included
	#endinput
#endif
#define _shop_addon_included

/**
 * Returns true if the shop is blocked, false otherwise.
 *
 * @return			true if it's blocked, false otherwise
 */
native bool:shop_is_blocked();

/**
 * Sets or unsets the block of shop.
 *
 * @param status	true to block, false to unblock
 *
 * @noreturn
 */
native shop_set_block(bool:status);