//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXUIViewController.h"

#import "AudioForChattingViewDelegate-Protocol.h"

@class NSString, VoipForChattingView;
@protocol AudioForChattingUIViewControllerDelegate;

@interface VoipChatVoipUIViewController : YXUIViewController <AudioForChattingViewDelegate>
{
    NSString *_userID;
    NSString *_userNumber;
    id <AudioForChattingUIViewControllerDelegate> _chattingDelegate;
    VoipForChattingView *_voipChatUIView;
}

@property(retain, nonatomic) VoipForChattingView *voipChatUIView; // @synthesize voipChatUIView=_voipChatUIView;
@property(nonatomic) __weak id <AudioForChattingUIViewControllerDelegate> chattingDelegate; // @synthesize chattingDelegate=_chattingDelegate;
- (void).cxx_destruct;
- (void)setSpeekButtonState:(long long)arg1;
- (void)setSilenceButtonState:(long long)arg1;
- (void)onSpeekerButtonPressed:(_Bool)arg1;
- (void)onSilenceButtonPressed:(_Bool)arg1;
- (void)endChatButtonPressed;
- (void)viewWillLayoutSubviews;
- (void)initVoipForChatUIView;
- (void)initComponents;
- (id)initVoipChatVoipUIViewController:(id)arg1 number:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)setChatRequestTip:(id)arg1;
- (void)updateChatTimeUI:(long long)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

