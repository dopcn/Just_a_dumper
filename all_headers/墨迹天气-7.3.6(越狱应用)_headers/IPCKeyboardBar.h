//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IPCReplyView, UIButton, UIColor;
@protocol IPCKeyboardBarDelegate;

@interface IPCKeyboardBar : UIView
{
    UIColor *_keyboardBackgroundColor;
    id <IPCKeyboardBarDelegate> _delegate;
    unsigned long long _keyboardType;
    UIView *_topLineView;
    UIButton *_inputTextView;
    IPCReplyView *_replyButton;
}

@property(retain, nonatomic) IPCReplyView *replyButton; // @synthesize replyButton=_replyButton;
@property(retain, nonatomic) UIButton *inputTextView; // @synthesize inputTextView=_inputTextView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(nonatomic) unsigned long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) __weak id <IPCKeyboardBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *keyboardBackgroundColor; // @synthesize keyboardBackgroundColor=_keyboardBackgroundColor;
- (void).cxx_destruct;
- (_Bool)checkLogin;
- (void)setupUI;
- (void)inputTextViewClick:(id)arg1;
- (void)keyboardBarBeginReplyWithReplyName:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)keyboardBarBeginInputCompleted:(CDUnknownBlockType)arg1;
- (id)initWithKeyboardType:(unsigned long long)arg1;

@end

