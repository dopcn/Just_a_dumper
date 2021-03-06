//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString, UIButton;
@protocol QYPPInputViewDelegate;

@interface QYPPInputView : UIView <CAAnimationDelegate>
{
    id <QYPPInputViewDelegate> _delegate;
    NSString *_loveCountText;
    NSString *_commentCountText;
    UIButton *_inputView;
    UIButton *_loveButton;
    UIButton *_commentButton;
    unsigned long long _loveCount;
    unsigned long long _commentCount;
}

@property(nonatomic) unsigned long long commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) unsigned long long loveCount; // @synthesize loveCount=_loveCount;
@property(retain, nonatomic) UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) UIButton *loveButton; // @synthesize loveButton=_loveButton;
@property(retain, nonatomic) UIButton *inputView; // @synthesize inputView=_inputView;
@property(copy, nonatomic) NSString *commentCountText; // @synthesize commentCountText=_commentCountText;
@property(copy, nonatomic) NSString *loveCountText; // @synthesize loveCountText=_loveCountText;
@property(nonatomic) __weak id <QYPPInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setCommentEnabled:(_Bool)arg1;
- (void)setLoveSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)loveAction:(id)arg1;
- (void)commentAction:(id)arg1;
- (void)inputAction:(id)arg1;
- (void)setupLine;
- (void)setupLoveView;
- (void)setupCommentView;
- (void)setupInputView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

