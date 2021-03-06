//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UCHomePageBannderDelegate-Protocol.h"

@class NSHashTable, NSMutableArray, NSString, UCHomePageBottomBanner, UCHomePageBottomBannerMessage;

@interface UCHomePageBottomBannerManager : NSObject <UCHomePageBannderDelegate>
{
    _Bool _isLiving;
    NSHashTable *_observers;
    NSMutableArray *_messageQueue;
    UCHomePageBottomBanner *_bannerView;
    UCHomePageBottomBannerMessage *_currentMessage;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UCHomePageBottomBannerMessage *currentMessage; // @synthesize currentMessage=_currentMessage;
@property(retain, nonatomic) UCHomePageBottomBanner *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) NSMutableArray *messageQueue; // @synthesize messageQueue=_messageQueue;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) _Bool isLiving; // @synthesize isLiving=_isLiving;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)removeBannerObserver:(id)arg1;
- (void)addBannerObserver:(id)arg1;
- (void)dequeueAllMessages;
- (void)clickGoButtonInGuideView:(id)arg1;
- (void)clickCloseButtonInGuideView:(id)arg1;
- (void)notifyShowEvent;
- (void)enqueueMessage:(id)arg1;
- (void)closeBannerView;
- (struct CGRect)showFrame;
- (struct CGRect)showFrameOfTheScreen;
- (void)showViewWithMessage:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

