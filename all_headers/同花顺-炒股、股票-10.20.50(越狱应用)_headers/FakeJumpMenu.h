//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIActionSheetDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UIView;

@interface FakeJumpMenu : NSObject <UIActionSheetDelegate>
{
    struct objc_method **methods;
    NSMutableDictionary *_userInfo;
    UIView *_presentView;
}

@property(retain, nonatomic) UIView *presentView; // @synthesize presentView=_presentView;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)fireFakePushBg;
- (void)fireFakePushFg;
- (void)fire3DTouch;
- (void)showFakePushList;
- (void)showChoice;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)openFakeJumpMenuInView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

