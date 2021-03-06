//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol VSPlayerViewDelegate;

@interface VSNetworkCoverView : UIView
{
    id <VSPlayerViewDelegate> _delegate;
    CDUnknownBlockType _playAction;
    UIButton *_gobackBtn;
    UIImageView *_waanCover;
    UIView *_maskView;
    UILabel *_tipView;
    UIView *_containView;
    UIButton *_playButton;
}

@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIView *containView; // @synthesize containView=_containView;
@property(retain, nonatomic) UILabel *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *waanCover; // @synthesize waanCover=_waanCover;
@property(retain, nonatomic) UIButton *gobackBtn; // @synthesize gobackBtn=_gobackBtn;
@property(copy, nonatomic) CDUnknownBlockType playAction; // @synthesize playAction=_playAction;
@property(nonatomic) __weak id <VSPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)playAction:(id)arg1;
- (void)onClickGoBackBtn;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

