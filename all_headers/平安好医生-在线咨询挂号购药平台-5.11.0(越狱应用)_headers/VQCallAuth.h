//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, VQDataCenter;
@protocol VQCallAuthDelegate;

@interface VQCallAuth : NSObject
{
    long long _authCode;
    id <VQCallAuthDelegate> _delegate;
    NSString *_userID;
    VQDataCenter *_dateCenter;
}

@property(retain, nonatomic) VQDataCenter *dateCenter; // @synthesize dateCenter=_dateCenter;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(readonly) long long authCode; // @synthesize authCode=_authCode;
@property(nonatomic) id <VQCallAuthDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buddyQueryLoginPropertiesOK:(id)arg1;
- (void)authByPinganServerWithAccount:(id)arg1 nonce:(id)arg2;
- (void)logout;
- (_Bool)login;
- (id)getServer;
- (id)initWithUser:(id)arg1;

@end

