//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QYPPCommentComposeToolBarDelegate-Protocol.h"
#import "UIExpandingTextViewDelegate-Protocol.h"

@class NSString, QYPPCommentComposeFloatView, QYPPCommentComposeGifSelectView, QYPPCommentComposerToolBar, UIExpandingTextView, UIImageView;
@protocol QYPPCommentComposeControlViewDelegate;

@interface QYPPCommentComposeControlView : UIView <UIExpandingTextViewDelegate, QYPPCommentComposeToolBarDelegate>
{
    id <QYPPCommentComposeControlViewDelegate> _delegate;
    unsigned long long _status;
    UIExpandingTextView *_textView;
    QYPPCommentComposerToolBar *_controlToolBar;
    QYPPCommentComposeFloatView *_floatView;
    UIImageView *_topLineImage;
    UIView *_coverView;
    QYPPCommentComposeGifSelectView *_gifSelectView;
}

+ (double)textViewHight;
+ (double)controlViewHight:(unsigned long long)arg1;
@property(retain, nonatomic) QYPPCommentComposeGifSelectView *gifSelectView; // @synthesize gifSelectView=_gifSelectView;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIImageView *topLineImage; // @synthesize topLineImage=_topLineImage;
@property(retain, nonatomic) QYPPCommentComposeFloatView *floatView; // @synthesize floatView=_floatView;
@property(retain, nonatomic) QYPPCommentComposerToolBar *controlToolBar; // @synthesize controlToolBar=_controlToolBar;
@property(retain, nonatomic) UIExpandingTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) id <QYPPCommentComposeControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendButtonDidClick;
- (void)toolBarButtonsStatusWillChange:(unsigned long long)arg1;
- (id)hitTestForSubview:(id)arg1 point:(struct CGPoint)arg2 event:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)textImageView;
- (void)layoutWithComposerInputStatus:(unsigned long long)arg1;
- (void)updateTextViewTextContent:(id)arg1;
- (void)updateTextViewPlaceholder:(id)arg1;
- (void)updateComposerItemsType:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)createSubviews;
- (void)setSenderButtonEnable:(_Bool)arg1;
- (void)setFloatViewDelegate:(id)arg1;
- (void)setToolBarDelegate:(id)arg1;
- (void)setTextViewDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

