//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaiduWalletGridBaseView.h"

@class BaiduWalletAlphaButton, BaiduWalletGridHeaderModel;

@interface BaiduWalletGridUnloginHeaderView : BaiduWalletGridBaseView
{
    CDUnknownBlockType _clickLoginBlock;
    BaiduWalletGridHeaderModel *_model;
    BaiduWalletAlphaButton *_avatarButton;
    BaiduWalletAlphaButton *_loginButton;
}

@property(retain, nonatomic) BaiduWalletAlphaButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) BaiduWalletAlphaButton *avatarButton; // @synthesize avatarButton=_avatarButton;
@property(retain, nonatomic) BaiduWalletGridHeaderModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType clickLoginBlock; // @synthesize clickLoginBlock=_clickLoginBlock;
- (void).cxx_destruct;
- (void)handleLoginbuttonClick:(id)arg1;
- (void)updateWithModel:(id)arg1;
- (void)layoutSubviews;
- (void)createLoginButton;
- (void)createavatarImageView;
- (void)createSubviews;
- (id)initWithModel:(id)arg1;

@end

