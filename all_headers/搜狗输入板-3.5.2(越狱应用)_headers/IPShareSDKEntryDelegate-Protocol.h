//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPSendEntry, NSString, UIViewController;
@protocol SVModalWebViewControllerDelegate;

@protocol IPShareSDKEntryDelegate <NSObject>
- (UIViewController<SVModalWebViewControllerDelegate> *)presentingViewController;
- (NSString *)shareText;
- (void)sendEntryDidShowKeyBoardWithSending:(IPSendEntry *)arg1;
- (void)sendEntryDidSuccessWithSending:(IPSendEntry *)arg1;
- (void)sendEntryDidExecuteAction:(IPSendEntry *)arg1;
@end

