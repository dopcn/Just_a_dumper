//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol LZUserFollowInfoViewDelegate;

@interface LZUserFollowInfoView : UIView
{
    _Bool _isFollow;
    id <LZUserFollowInfoViewDelegate> _delegate;
    UIButton *_followBtn;
    UIImageView *_headerImgView;
    UILabel *_followLabel;
    UILabel *_followCountLabel;
}

@property(retain, nonatomic) UILabel *followCountLabel; // @synthesize followCountLabel=_followCountLabel;
@property(retain, nonatomic) UILabel *followLabel; // @synthesize followLabel=_followLabel;
@property(retain, nonatomic) UIImageView *headerImgView; // @synthesize headerImgView=_headerImgView;
@property(retain, nonatomic) UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(readonly, nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
@property(nonatomic) __weak id <LZUserFollowInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setLayout;
- (void)btnClick;
- (void)updateFollowStatus:(_Bool)arg1;
- (void)updateFollowCount:(long long)arg1;
- (void)updateHeaderImg:(id)arg1;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

