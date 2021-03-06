//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AuthenBsObject.h"

#import "AuthenLoginDelegate-Protocol.h"
#import "ICBCGesturePasswordViewControllerDelegate-Protocol.h"

@class NSString;

@interface AuthenBsGotoAuthenLoginObject : AuthenBsObject <AuthenLoginDelegate, ICBCGesturePasswordViewControllerDelegate>
{
    CDUnknownBlockType _callBack;
}

@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
- (void).cxx_destruct;
- (void)changeToLoginVC:(_Bool)arg1;
- (void)didLoginSuccess:(id)arg1;
- (void)handleLoginResponseData:(id)arg1;
- (void)forgetPwdAndSelfRegisterResponseData:(id)arg1;
- (id)getIPAddresses;
- (id)ipAddress:(_Bool)arg1;
- (id)createXMLPostData;
- (void)runGoToAuthenLogin:(id)arg1 callBack:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

