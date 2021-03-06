//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSString;

@interface UIView (BUIView) <UIAlertViewDelegate, UIActionSheetDelegate>
- (void)showFromBarButtonItem:(id)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)showFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)showFromTabBar:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)showFromToolbar:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)showInView:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)config:(CDUnknownBlockType)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

