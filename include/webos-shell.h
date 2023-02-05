/* Generated by wayland-scanner 1.11.0 */

#ifndef WEBOS_SHELL_CLIENT_PROTOCOL_H
#define WEBOS_SHELL_CLIENT_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-client.h"

#ifdef  __cplusplus
extern "C" {
#endif

/**
 * @page page_webos_shell The webos_shell protocol
 * @section page_ifaces_webos_shell Interfaces
 * - @subpage page_iface_wl_webos_shell - interface for webOS shell
 * - @subpage page_iface_wl_webos_shell_surface - interface to handle webos shell surfaces
 * @section page_copyright_webos_shell Copyright
 * <pre>
 *
 * Copyright (c) 2013-2020 LG Electronics, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * SPDX-License-Identifier: Apache-2.0
 * </pre>
 */
struct wl_surface;
struct wl_webos_shell;
struct wl_webos_shell_surface;

/**
 * @page page_iface_wl_webos_shell wl_webos_shell
 * @section page_iface_wl_webos_shell_desc Description
 *
 * This interface provides handlings on webOS shell surfaces.
 * @section page_iface_wl_webos_shell_api API
 * See @ref iface_wl_webos_shell.
 */
/**
 * @defgroup iface_wl_webos_shell The wl_webos_shell interface
 *
 * This interface provides handlings on webOS shell surfaces.
 */
extern const struct wl_interface wl_webos_shell_interface;
/**
 * @page page_iface_wl_webos_shell_surface wl_webos_shell_surface
 * @section page_iface_wl_webos_shell_surface_desc Description
 *
 * This allows the client to associate an normal surface with a
 * shell surface. The shell surface provides webOS specific functionality
 * to surfaces.
 * @section page_iface_wl_webos_shell_surface_api API
 * See @ref iface_wl_webos_shell_surface.
 */
/**
 * @defgroup iface_wl_webos_shell_surface The wl_webos_shell_surface interface
 *
 * This allows the client to associate an normal surface with a
 * shell surface. The shell surface provides webOS specific functionality
 * to surfaces.
 */
extern const struct wl_interface wl_webos_shell_surface_interface;

#define WL_WEBOS_SHELL_GET_SYSTEM_PIP	0
#define WL_WEBOS_SHELL_GET_SHELL_SURFACE	1

/**
 * @ingroup iface_wl_webos_shell
 */
#define WL_WEBOS_SHELL_GET_SYSTEM_PIP_SINCE_VERSION	1
/**
 * @ingroup iface_wl_webos_shell
 */
#define WL_WEBOS_SHELL_GET_SHELL_SURFACE_SINCE_VERSION	1

/** @ingroup iface_wl_webos_shell */
static inline void
wl_webos_shell_set_user_data(struct wl_webos_shell *wl_webos_shell, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) wl_webos_shell, user_data);
}

/** @ingroup iface_wl_webos_shell */
static inline void *
wl_webos_shell_get_user_data(struct wl_webos_shell *wl_webos_shell)
{
	return wl_proxy_get_user_data((struct wl_proxy *) wl_webos_shell);
}

static inline uint32_t
wl_webos_shell_get_version(struct wl_webos_shell *wl_webos_shell)
{
	return wl_proxy_get_version((struct wl_proxy *) wl_webos_shell);
}

/** @ingroup iface_wl_webos_shell */
static inline void
wl_webos_shell_destroy(struct wl_webos_shell *wl_webos_shell)
{
	wl_proxy_destroy((struct wl_proxy *) wl_webos_shell);
}

/**
 * @ingroup iface_wl_webos_shell
 *
 * This request is deprecated. If you want to create a new request,
 * you can reuse this one. FYI, in that case, you also need to modify
 * get_system_pip method in luna-surfacemanager as well.
 */
static inline void
wl_webos_shell_get_system_pip(struct wl_webos_shell *wl_webos_shell)
{
	wl_proxy_marshal((struct wl_proxy *) wl_webos_shell,
			 WL_WEBOS_SHELL_GET_SYSTEM_PIP);
}

/**
 * @ingroup iface_wl_webos_shell
 *
 * Creates an webOS shell surface for an existing surface.
 */
static inline struct wl_webos_shell_surface *
wl_webos_shell_get_shell_surface(struct wl_webos_shell *wl_webos_shell, struct wl_surface *surface)
{
	struct wl_proxy *id;

	id = wl_proxy_marshal_constructor((struct wl_proxy *) wl_webos_shell,
			 WL_WEBOS_SHELL_GET_SHELL_SURFACE, &wl_webos_shell_surface_interface, NULL, surface);

	return (struct wl_webos_shell_surface *) id;
}

#ifndef WL_WEBOS_SHELL_SURFACE_LOCATION_HINT_ENUM
#define WL_WEBOS_SHELL_SURFACE_LOCATION_HINT_ENUM
/**
 * @ingroup iface_wl_webos_shell_surface
 * location mask for the surface
 *
 * Using this mask the surface can be positioned onto
 * different locations on screen. By not using absolute
 * coordinates we can create greater flexibility in the
 * compositor and the clients.
 */
enum wl_webos_shell_surface_location_hint {
	WL_WEBOS_SHELL_SURFACE_LOCATION_HINT_NORTH = 1,
	WL_WEBOS_SHELL_SURFACE_LOCATION_HINT_WEST = 2,
	WL_WEBOS_SHELL_SURFACE_LOCATION_HINT_SOUTH = 4,
	WL_WEBOS_SHELL_SURFACE_LOCATION_HINT_EAST = 8,
	WL_WEBOS_SHELL_SURFACE_LOCATION_HINT_CENTER = 16,
};
#endif /* WL_WEBOS_SHELL_SURFACE_LOCATION_HINT_ENUM */

#ifndef WL_WEBOS_SHELL_SURFACE_STATE_ENUM
#define WL_WEBOS_SHELL_SURFACE_STATE_ENUM
/**
 * @ingroup iface_wl_webos_shell_surface
 * the state of the surface
 *
 * The state provides info to the client on how the compositor has placed
 * the surface.
 *
 * The default state will indicate to the client that it is windowed. The
 * "position_changed" event will tell the position in screen coordinates
 * when the surface is in this state.
 */
enum wl_webos_shell_surface_state {
	WL_WEBOS_SHELL_SURFACE_STATE_DEFAULT = 0,
	WL_WEBOS_SHELL_SURFACE_STATE_MINIMIZED = 1,
	WL_WEBOS_SHELL_SURFACE_STATE_MAXIMIZED = 2,
	WL_WEBOS_SHELL_SURFACE_STATE_FULLSCREEN = 3,
};
#endif /* WL_WEBOS_SHELL_SURFACE_STATE_ENUM */

#ifndef WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_ENUM
#define WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_ENUM
/**
 * @ingroup iface_wl_webos_shell_surface
 * the key that the surface handles
 *
 * The client uses wl_webos_shell_surface.set_key_mask to notify server
 * that it will handle specific keys only.
 */
enum wl_webos_shell_surface_webos_key {
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_HOME = 1,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_BACK = 2,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_EXIT = 4,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_NAVIGATION_LEFT = 8,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_NAVIGATION_RIGHT = 16,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_NAVIGATION_UP = 32,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_NAVIGATION_DOWN = 64,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_NAVIGATION_OK = 128,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_NUMERIC_KEYS = 256,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_REMOTE_COLOR_RED = 512,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_REMOTE_COLOR_GREEN = 1024,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_REMOTE_COLOR_YELLOW = 2048,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_REMOTE_COLOR_BLUE = 4096,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_REMOTE_PROGRAMME_GROUP = 8192,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_REMOTE_PLAYBACK_GROUP = 16384,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_REMOTE_TELETEXT_GROUP = 32768,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_LOCAL_LEFT = 65536,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_LOCAL_RIGHT = 131072,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_LOCAL_UP = 262144,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_LOCAL_DOWN = 524288,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_LOCAL_OK = 1048576,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_REMOTE_MAGNIFIER_GROUP = 2097152,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_MINIMAL_PLAYBACK_GROUP = 4194304,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_GUIDE = 8388608,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_TELETEXT_ACTIVE_GROUP = 16777216,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_DATA = 33554432,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_INFO = 67108864,
	WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_DEFAULT = 0xFFFFFFF8,
};
#endif /* WL_WEBOS_SHELL_SURFACE_WEBOS_KEY_ENUM */

#ifndef WL_WEBOS_SHELL_SURFACE_ADDON_STATUS_ENUM
#define WL_WEBOS_SHELL_SURFACE_ADDON_STATUS_ENUM
/**
 * @ingroup iface_wl_webos_shell_surface
 * the status of the add-on
 *
 * Status of the add-on for the given shell surface.
 * null: neither server-side add-on set nor loaded
 * loaded: the server-side add-on is loaded and visible
 * denied: the server-side add-on is not allowed to load
 * error: the server-side add-on is not loaded due to an error
 */
enum wl_webos_shell_surface_addon_status {
	WL_WEBOS_SHELL_SURFACE_ADDON_STATUS_NULL = 0,
	WL_WEBOS_SHELL_SURFACE_ADDON_STATUS_LOADED = 1,
	WL_WEBOS_SHELL_SURFACE_ADDON_STATUS_DENIED = 2,
	WL_WEBOS_SHELL_SURFACE_ADDON_STATUS_ERROR = 3,
};
#endif /* WL_WEBOS_SHELL_SURFACE_ADDON_STATUS_ENUM */

/**
 * @ingroup iface_wl_webos_shell_surface
 * @struct wl_webos_shell_surface_listener
 */
struct wl_webos_shell_surface_listener {
	/**
	 * the surface state was changed
	 *
	 * The compositor or the user has taken action that has resulted
	 * in this surface to change state.
	 */
	void (*state_changed)(void *data,
			      struct wl_webos_shell_surface *wl_webos_shell_surface,
			      uint32_t state);
	/**
	 * the surface position on screen changed
	 *
	 * This event will only be sent the surfaces that are in their
	 * default state. It will be not sent for fullscreen surfaces nor
	 * for surfaces that are minimized.
	 */
	void (*position_changed)(void *data,
				 struct wl_webos_shell_surface *wl_webos_shell_surface,
				 int32_t x,
				 int32_t y);
	/**
	 * request closing of window
	 *
	 * The close event is sent when the compositor requests closing
	 * of a window, e.g. through some gesture or other interaction,
	 * without explicitly quitting or killing the client.
	 */
	void (*close)(void *data,
		      struct wl_webos_shell_surface *wl_webos_shell_surface);
	/**
	 * indicates what areas are exposed
	 *
	 * The array contains non-overlapping rectangles that define
	 * areas that are visible in this surface. The array elements are a
	 * series of ints arranged as follows x,y,w,h,x,y,w,h,-1. The
	 * values will not contain negative numbers and the -1 is treated
	 * as a terminating marker.
	 */
	void (*exposed)(void *data,
			struct wl_webos_shell_surface *wl_webos_shell_surface,
			struct wl_array *rectangles);
	/**
	 * the surface state is about to change
	 *
	 * Be sure that the actual state should not be changed with this.
	 * Client can only prepare that state will be changed.
	 */
	void (*state_about_to_change)(void *data,
				      struct wl_webos_shell_surface *wl_webos_shell_surface,
				      uint32_t state);
	/**
	 * notify the add-on status when changed
	 *
	 * Notifies when the add-on status changes.
	 * @since 2
	 */
	void (*addon_status_changed)(void *data,
				     struct wl_webos_shell_surface *wl_webos_shell_surface,
				     uint32_t addon_status);
};

/**
 * @ingroup wl_webos_shell_surface_iface
 */
static inline int
wl_webos_shell_surface_add_listener(struct wl_webos_shell_surface *wl_webos_shell_surface,
				    const struct wl_webos_shell_surface_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) wl_webos_shell_surface,
				     (void (**)(void)) listener, data);
}

#define WL_WEBOS_SHELL_SURFACE_SET_LOCATION_HINT	0
#define WL_WEBOS_SHELL_SURFACE_SET_STATE	1
#define WL_WEBOS_SHELL_SURFACE_SET_PROPERTY	2
#define WL_WEBOS_SHELL_SURFACE_SET_KEY_MASK	3
#define WL_WEBOS_SHELL_SURFACE_SET_ADDON	4
#define WL_WEBOS_SHELL_SURFACE_RESET_ADDON	5

/**
 * @ingroup iface_wl_webos_shell_surface
 */
#define WL_WEBOS_SHELL_SURFACE_SET_LOCATION_HINT_SINCE_VERSION	1
/**
 * @ingroup iface_wl_webos_shell_surface
 */
#define WL_WEBOS_SHELL_SURFACE_SET_STATE_SINCE_VERSION	1
/**
 * @ingroup iface_wl_webos_shell_surface
 */
#define WL_WEBOS_SHELL_SURFACE_SET_PROPERTY_SINCE_VERSION	1
/**
 * @ingroup iface_wl_webos_shell_surface
 */
#define WL_WEBOS_SHELL_SURFACE_SET_KEY_MASK_SINCE_VERSION	1
/**
 * @ingroup iface_wl_webos_shell_surface
 */
#define WL_WEBOS_SHELL_SURFACE_SET_ADDON_SINCE_VERSION	2
/**
 * @ingroup iface_wl_webos_shell_surface
 */
#define WL_WEBOS_SHELL_SURFACE_RESET_ADDON_SINCE_VERSION	2

/** @ingroup iface_wl_webos_shell_surface */
static inline void
wl_webos_shell_surface_set_user_data(struct wl_webos_shell_surface *wl_webos_shell_surface, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) wl_webos_shell_surface, user_data);
}

/** @ingroup iface_wl_webos_shell_surface */
static inline void *
wl_webos_shell_surface_get_user_data(struct wl_webos_shell_surface *wl_webos_shell_surface)
{
	return wl_proxy_get_user_data((struct wl_proxy *) wl_webos_shell_surface);
}

static inline uint32_t
wl_webos_shell_surface_get_version(struct wl_webos_shell_surface *wl_webos_shell_surface)
{
	return wl_proxy_get_version((struct wl_proxy *) wl_webos_shell_surface);
}

/** @ingroup iface_wl_webos_shell_surface */
static inline void
wl_webos_shell_surface_destroy(struct wl_webos_shell_surface *wl_webos_shell_surface)
{
	wl_proxy_destroy((struct wl_proxy *) wl_webos_shell_surface);
}

/**
 * @ingroup iface_wl_webos_shell_surface
 *
 * The location hint is a guideline to the compositor where
 * to place the surface. The compositor will do its best to
 * place it there, however this is not guaranteed. Currently
 * The location hint is only applied to _WEBOS_WINDOW_TYPE_POPUP
 * and _WEBOS_WINDOW_TYPE_SYSTEM_UI surfaces.
 */
static inline void
wl_webos_shell_surface_set_location_hint(struct wl_webos_shell_surface *wl_webos_shell_surface, uint32_t hint)
{
	wl_proxy_marshal((struct wl_proxy *) wl_webos_shell_surface,
			 WL_WEBOS_SHELL_SURFACE_SET_LOCATION_HINT, hint);
}

/**
 * @ingroup iface_wl_webos_shell_surface
 *
 * The client requests its surface state to the compositor.
 */
static inline void
wl_webos_shell_surface_set_state(struct wl_webos_shell_surface *wl_webos_shell_surface, uint32_t state)
{
	wl_proxy_marshal((struct wl_proxy *) wl_webos_shell_surface,
			 WL_WEBOS_SHELL_SURFACE_SET_STATE, state);
}

/**
 * @ingroup iface_wl_webos_shell_surface
 *
 * The client sets the surface property to the compositor. The property
 * is given by a string pair (name, value).
 */
static inline void
wl_webos_shell_surface_set_property(struct wl_webos_shell_surface *wl_webos_shell_surface, const char *name, const char *value)
{
	wl_proxy_marshal((struct wl_proxy *) wl_webos_shell_surface,
			 WL_WEBOS_SHELL_SURFACE_SET_PROPERTY, name, value);
}

/**
 * @ingroup iface_wl_webos_shell_surface
 *
 * A value of '1' in the mask indicates that the respective key event (both press and release)
 * will be delivered to the client. Bitwise XOR operation against the default mask value and
 * a supported individual values will result in that key not being delivered to the client.
 * Notice that the default value omits certain keys.
 *
 * The compositor is free to ignore certain keys even if set to '1' depending on the overall
 * system UI behaviour, most commonly this will mean the HOME key.
 *
 * NOTE: This protocol will eventually replace the string property based key filtering.
 */
static inline void
wl_webos_shell_surface_set_key_mask(struct wl_webos_shell_surface *wl_webos_shell_surface, uint32_t webos_key)
{
	wl_proxy_marshal((struct wl_proxy *) wl_webos_shell_surface,
			 WL_WEBOS_SHELL_SURFACE_SET_KEY_MASK, webos_key);
}

/**
 * @ingroup iface_wl_webos_shell_surface
 *
 * Sets the path to the server-side add-on. The compositor loads the add-on
 * on receiving this request if the add-on is identified as a valid one.
 */
static inline void
wl_webos_shell_surface_set_addon(struct wl_webos_shell_surface *wl_webos_shell_surface, const char *path)
{
	wl_proxy_marshal((struct wl_proxy *) wl_webos_shell_surface,
			 WL_WEBOS_SHELL_SURFACE_SET_ADDON, path);
}

/**
 * @ingroup iface_wl_webos_shell_surface
 *
 * Requests to unload the add-on if it is loaded.
 * If there is no add-on loaded this request is silently ignored.
 */
static inline void
wl_webos_shell_surface_reset_addon(struct wl_webos_shell_surface *wl_webos_shell_surface)
{
	wl_proxy_marshal((struct wl_proxy *) wl_webos_shell_surface,
			 WL_WEBOS_SHELL_SURFACE_RESET_ADDON);
}

#ifdef  __cplusplus
}
#endif

#endif