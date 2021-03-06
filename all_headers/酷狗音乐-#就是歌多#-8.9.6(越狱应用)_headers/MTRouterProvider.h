//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTRouterProtocol-Protocol.h"
#import "UserLoginViewControllerDelegate-Protocol.h"

@class NSDictionary, NSString;

@interface MTRouterProvider : NSObject <UserLoginViewControllerDelegate, MTRouterProtocol>
{
    CDUnknownBlockType _loginSuccessBlock;
    CDUnknownBlockType _loginFailureBlock;
    NSDictionary *_routers;
}

@property(copy, nonatomic) NSDictionary *routers; // @synthesize routers=_routers;
@property(copy, nonatomic) CDUnknownBlockType loginFailureBlock; // @synthesize loginFailureBlock=_loginFailureBlock;
@property(copy, nonatomic) CDUnknownBlockType loginSuccessBlock; // @synthesize loginSuccessBlock=_loginSuccessBlock;
- (void).cxx_destruct;
- (void)loginCancel;
- (void)loginSuccess;
- (void)back:(id)arg1;
- (_Bool)handleOpenShortVideoURL:(id)arg1 options:(id)arg2;
- (_Bool)handleOpenCommonURL:(id)arg1 options:(id)arg2;
- (_Bool)handleOpenWebURL:(id)arg1 options:(id)arg2;
- (_Bool)handleOpenStarURL:(id)arg1 options:(id)arg2;
- (_Bool)handleOpenKGLiveURL:(id)arg1 options:(id)arg2;
- (_Bool)handleOpenLiveCommonURL:(id)arg1 options:(id)arg2;
- (_Bool)handleOpenLiveURL:(id)arg1 options:(id)arg2;
- (_Bool)handleOpenPKLiveURL:(id)arg1 options:(id)arg2;
- (_Bool)handleOpenMobileLiveURL:(id)arg1 options:(id)arg2;
- (_Bool)handleOpenUserURL:(id)arg1 options:(id)arg2;
- (_Bool)handleOpenGameURL:(id)arg1 options:(id)arg2;
- (_Bool)handleOpenSearchURL:(id)arg1 options:(id)arg2;
- (_Bool)handleOpenRankingURL:(id)arg1 options:(id)arg2;
- (_Bool)openURL:(id)arg1 options:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

