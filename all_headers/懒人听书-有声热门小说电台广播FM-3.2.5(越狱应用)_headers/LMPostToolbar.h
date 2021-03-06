//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel;
@protocol LMPostToolbarDelegate, UITextViewDelegate;

@interface LMPostToolbar : UIView <UITextViewDelegate>
{
    id <LMPostToolbarDelegate> _delegate;
    UILabel *_shareLabel;
    UIView *_bottomLine;
    UIView *_topLine;
    UIButton *_imageButton;
    UIView *_imageButtonDot;
    UIButton *_topicButton;
    UIButton *_recordButton;
    UIView *_recordButtonDot;
    UIButton *_sinaShareButton;
    UIButton *_qqShareButton;
    id <UITextViewDelegate> _oldDelegate;
}

@property(nonatomic) __weak id <UITextViewDelegate> oldDelegate; // @synthesize oldDelegate=_oldDelegate;
@property(retain, nonatomic) UIButton *qqShareButton; // @synthesize qqShareButton=_qqShareButton;
@property(retain, nonatomic) UIButton *sinaShareButton; // @synthesize sinaShareButton=_sinaShareButton;
@property(retain, nonatomic) UIView *recordButtonDot; // @synthesize recordButtonDot=_recordButtonDot;
@property(retain, nonatomic) UIButton *recordButton; // @synthesize recordButton=_recordButton;
@property(retain, nonatomic) UIButton *topicButton; // @synthesize topicButton=_topicButton;
@property(retain, nonatomic) UIView *imageButtonDot; // @synthesize imageButtonDot=_imageButtonDot;
@property(retain, nonatomic) UIButton *imageButton; // @synthesize imageButton=_imageButton;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *shareLabel; // @synthesize shareLabel=_shareLabel;
@property(nonatomic) __weak id <LMPostToolbarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shareToQQButtonClick:(id)arg1;
- (void)shareToSinaButtonClick:(id)arg1;
- (void)addRecordButtonClick:(id)arg1;
- (void)addTopicButtonClick:(id)arg1;
- (void)addImageButtonClick:(id)arg1;
@property(readonly, nonatomic) long long shareIndex;
- (void)setupButtonStatus;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)clearSelectState;
- (void)setupAddRecordButtonDotShow:(_Bool)arg1;
- (void)setupAddImageButtonDotShow:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 withToolbarType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

