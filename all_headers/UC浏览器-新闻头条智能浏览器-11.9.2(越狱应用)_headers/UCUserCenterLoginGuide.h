//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UCHomePageBottomBannerObserver-Protocol.h"

@class NSString, UCHomePageBottomBannerMessage, UCUserCenterLoginGuideView;

@interface UCUserCenterLoginGuide : NSObject <UCHomePageBottomBannerObserver>
{
    _Bool _isLiving;
    UCUserCenterLoginGuideView *_guideView;
    UCHomePageBottomBannerMessage *_message;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UCHomePageBottomBannerMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) UCUserCenterLoginGuideView *guideView; // @synthesize guideView=_guideView;
@property(nonatomic) _Bool isLiving; // @synthesize isLiving=_isLiving;
- (void)clickGoButtonInBanner:(id)arg1 message:(id)arg2;
- (void)clickCloseButtonInBanner:(id)arg1 message:(id)arg2;
- (void)showBanner:(id)arg1 message:(id)arg2;
- (void)showLoginGuide;
- (void)showUserCenterLoginGuideIfNeeded;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

