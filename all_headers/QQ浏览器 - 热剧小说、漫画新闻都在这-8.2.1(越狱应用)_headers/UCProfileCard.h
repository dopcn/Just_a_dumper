//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UCBaseCard.h"

@class UIImageView, UILabel, UITapGestureRecognizer, UIView, UserAccount;

@interface UCProfileCard : UCBaseCard
{
    double _marginTop;
    UIImageView *_bg;
    UIImageView *_mask;
    UILabel *_lbl_name;
    UILabel *_lbl_from;
    UIView *_wrapper;
    UITapGestureRecognizer *_tap;
    UserAccount *_account;
    CDUnknownBlockType _onProfileClicked;
    UIImageView *_face;
}

@property(retain, nonatomic) UIImageView *face; // @synthesize face=_face;
@property(copy, nonatomic) CDUnknownBlockType onProfileClicked; // @synthesize onProfileClicked=_onProfileClicked;
@property(retain, nonatomic) UserAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onTap:(id)arg1;
- (void)onProfileTap:(id)arg1;
- (void)refreshPortraitImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setLoginInfo:(_Bool)arg1;
- (void)refreshSkinWithMode:(long long)arg1;
- (void)onCreate;
- (void)dealloc;

@end

