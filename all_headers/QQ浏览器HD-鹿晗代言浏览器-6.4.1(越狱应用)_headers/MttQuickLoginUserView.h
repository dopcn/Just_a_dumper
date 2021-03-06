//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol MttQuickLoginUserViewDelegate;

@interface MttQuickLoginUserView : UIView
{
    id <MttQuickLoginUserViewDelegate> _delegate;
    UIButton *_loginIcon;
    UIButton *_loginWeixinIcon;
    UILabel *_qqTitleLabel;
    UILabel *_weixinTitleLabel;
}

@property(retain, nonatomic) UILabel *weixinTitleLabel; // @synthesize weixinTitleLabel=_weixinTitleLabel;
@property(retain, nonatomic) UILabel *qqTitleLabel; // @synthesize qqTitleLabel=_qqTitleLabel;
@property(retain, nonatomic) UIButton *loginWeixinIcon; // @synthesize loginWeixinIcon=_loginWeixinIcon;
@property(retain, nonatomic) UIButton *loginIcon; // @synthesize loginIcon=_loginIcon;
@property(nonatomic) __weak id <MttQuickLoginUserViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showWeixinLoginView:(_Bool)arg1;
- (void)onClick:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

