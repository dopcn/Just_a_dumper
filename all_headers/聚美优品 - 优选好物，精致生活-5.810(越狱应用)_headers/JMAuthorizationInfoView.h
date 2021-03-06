//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MAProductTrust_Info, UIButton, UIImageView, UILabel;

@interface JMAuthorizationInfoView : UIView
{
    MAProductTrust_Info *_trust_info;
    UIView *_navBar;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    UIImageView *_authImageView;
}

+ (double)fitHeightForImage:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) UIImageView *authImageView; // @synthesize authImageView=_authImageView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) MAProductTrust_Info *trust_info; // @synthesize trust_info=_trust_info;
- (void).cxx_destruct;
- (void)authNotification:(id)arg1;
- (void)hide;
- (void)show;
- (void)closeAction:(id)arg1;
- (double)autoStatusBarDistance;
- (double)statusBarFrameHeight;
- (void)addViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

