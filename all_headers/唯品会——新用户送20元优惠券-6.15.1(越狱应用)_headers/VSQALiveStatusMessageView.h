//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface VSQALiveStatusMessageView : UIView
{
    UIImageView *_statusImageView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UILabel *_descLabel;
    UIButton *_closeButton;
    CDUnknownBlockType _shareActionBlock;
    UIButton *_shareButton;
    CDUnknownBlockType _closeActionBlock;
}

+ (id)aliveStatusMessageView:(long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType closeActionBlock; // @synthesize closeActionBlock=_closeActionBlock;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(copy, nonatomic) CDUnknownBlockType shareActionBlock; // @synthesize shareActionBlock=_shareActionBlock;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
- (void).cxx_destruct;
- (void)shareAction:(id)arg1;
- (void)closeAction:(id)arg1;
- (void)hideMessageView;
- (void)showMessageView;
- (void)setDefalutData;
- (void)setUpUI;
- (id)init;

@end

