//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TLSErrInfo, TLSUserInfo;

@protocol TLSGuestLoginListener <NSObject>
- (void)OnGuestLoginTimeout:(TLSErrInfo *)arg1;
- (void)OnGuestLoginFail:(TLSErrInfo *)arg1;
- (void)OnGuestLoginSuccess:(TLSUserInfo *)arg1;
@end

