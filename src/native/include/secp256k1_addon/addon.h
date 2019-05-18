#ifndef __SIGNUN_SECP256K1_ADDON_H
#define __SIGNUN_SECP256K1_ADDON_H

#include <node_api.h>

#include "signun_util.h"

#include "secp256k1.h"


napi_status create_secp256k1_addon(napi_env env, napi_value base, signun_js_value_cache_t js_value_cache);

#endif
