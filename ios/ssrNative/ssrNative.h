//
//  ssrNative.h
//  ssrNative
//
//  Created by ssrlive on 3/31/18.
//  Copyright © 2018 ssrLive. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for ssrNative.
FOUNDATION_EXPORT double ssrNativeVersionNumber;

//! Project version string for ssrNative.
FOUNDATION_EXPORT const unsigned char ssrNativeVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <ssrNative/PublicHeader.h>

#import <ssrNative/ssr_qr_code.h>
#import <ssrNative/ssr_executive.h>
#import <ssrNative/ssr_cipher_names.h>
#import <ssrNative/sockaddr_universal.h>

int ssr_run_loop_begin(struct server_config *cf, void(*feedback_state)(struct ssr_client_state *state, void *p), void *p);
void ssr_run_loop_shutdown(struct ssr_client_state *state);
