//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WMUCNewBieGuideBottomBarBubbleProxy-Protocol.h"

@class NSString, WMUCNewBieGuideBottomBarBubble;

@interface WMUCNewBieGuideBottomBarBubbleController : NSObject <WMUCNewBieGuideBottomBarBubbleProxy>
{
    _Bool _isCurrentShowSystemMenu;
    _Bool _isShowing;
    WMUCNewBieGuideBottomBarBubble *_bubble;
}

+ (id)shareInstance;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool isCurrentShowSystemMenu; // @synthesize isCurrentShowSystemMenu=_isCurrentShowSystemMenu;
@property(retain, nonatomic) WMUCNewBieGuideBottomBarBubble *bubble; // @synthesize bubble=_bubble;
- (void)closeBubbleWithReson:(unsigned long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation;
- (void)onSystemMenuWillClose;
- (void)onSystemMenuWillShow;
- (void)dismissBubble;
- (void)wmNewBieGuideBottomBarBubble:(id)arg1 dismissedWithReason:(unsigned long long)arg2;
- (struct CGPoint)subcriptionItemCenter;
- (void)hideBubble;
- (_Bool)showBubble;
- (_Bool)shouldShowBubble;
- (id)configBubble;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

