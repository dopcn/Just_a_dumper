//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "InputActionDelegate-Protocol.h"
#import "YXChatBarInputViewControllerDelegate-Protocol.h"

@class NSString, UIViewController, YXChatBarInputViewController, YXChatBarMessageModel, YXShippingAddressHandler;

@interface YXChatBarMessageHandler : NSObject <InputActionDelegate, YXChatBarInputViewControllerDelegate>
{
    UIViewController *_actionController;
    YXChatBarInputViewController *_chatBarInputViewController;
    YXChatBarMessageModel *_messageModel;
    YXShippingAddressHandler *_addressHandler;
}

@property(retain, nonatomic) YXShippingAddressHandler *addressHandler; // @synthesize addressHandler=_addressHandler;
@property(retain, nonatomic) YXChatBarMessageModel *messageModel; // @synthesize messageModel=_messageModel;
@property(retain, nonatomic) YXChatBarInputViewController *chatBarInputViewController; // @synthesize chatBarInputViewController=_chatBarInputViewController;
@property(nonatomic) __weak UIViewController *actionController; // @synthesize actionController=_actionController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleYXChatBargetMessageReplyOriginalContentPressedEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleYXChatBargetMessageReplyAvatarPressedEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleYXChatBargetMessageReplyImageViewLongPressedEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleYXChatBargetMessageReplyImageViewTapEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleYXChatBargetMessageWinAPrizeEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleYXChatBargetMessageReplyButtonEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleLinkEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideInputView;
- (void)showInputView;
- (void)layoutChatBarInputViewWhenHide;
- (void)layoutChatBarInputView;
- (void)handleYXChatBarMessageTouchEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)inputTextViewSizeChanged;
- (void)setInputTextToEmpty;
- (void)sendReplyWithText:(id)arg1 image:(id)arg2;
- (void)chatBarInputViewControllerDidSendText:(id)arg1 imageData:(id)arg2;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)chatBarInputViewValidateSendText:(id)arg1;
- (void)handleYXChatBarMessageDidSelectRowEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleWithEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canHandleWithEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addInputView;
- (void)handleNotificationPhotoButtonPressed:(id)arg1;
- (void)handleNotificationEmotionButtonPressed:(id)arg1;
- (void)initListenEvents;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

