//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAuthSignupControlling-Protocol.h"
#import "FBAuthSignupControllingDelegate-Protocol.h"

@class FBUserSession, NSString;
@protocol FBAuthSignupControlling, FBAuthSignupControllingDelegate;

@interface FBNewAccountRegistrationGatedController : NSObject <FBAuthSignupControllingDelegate, FBAuthSignupControlling>
{
    id <FBAuthSignupControllingDelegate> _authDelegate;
    id <FBAuthSignupControlling> _controllerImplementation;
    FBUserSession *_session;
}

@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <FBAuthSignupControlling> controllerImplementation; // @synthesize controllerImplementation=_controllerImplementation;
@property(nonatomic) __weak id <FBAuthSignupControllingDelegate> authDelegate; // @synthesize authDelegate=_authDelegate;
- (void).cxx_destruct;
- (id)_registrationController;
- (void)signupController:(id)arg1 completedWithResponse:(id)arg2;
- (void)presentSignupFromViewController:(id)arg1 withIdentifier:(id)arg2;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

