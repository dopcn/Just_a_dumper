//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUPhoneCardBaseCell.h"

@class UIButton, UIImageView, UILabel;

@interface QYUGameProfileCell : QYUPhoneCardBaseCell
{
    UIImageView *_gameIcon;
    UILabel *_gameName;
    UILabel *_gameProfile;
    UILabel *_gamePlayers;
    UIButton *_profileBgBtn;
    UIButton *_paopaoBtn;
}

+ (id)getCellObjByContainer:(id)arg1 andIndex:(long long)arg2;
+ (long long)getLinesByCardData:(id)arg1 andShowNum:(long long)arg2;
+ (void)load;
+ (id)ptypeDicWithCell:(id)arg1 data:(id)arg2;
@property(retain, nonatomic) UIButton *paopaoBtn; // @synthesize paopaoBtn=_paopaoBtn;
@property(retain, nonatomic) UIButton *profileBgBtn; // @synthesize profileBgBtn=_profileBgBtn;
@property(retain, nonatomic) UILabel *gamePlayers; // @synthesize gamePlayers=_gamePlayers;
@property(retain, nonatomic) UILabel *gameProfile; // @synthesize gameProfile=_gameProfile;
@property(retain, nonatomic) UILabel *gameName; // @synthesize gameName=_gameName;
@property(retain, nonatomic) UIImageView *gameIcon; // @synthesize gameIcon=_gameIcon;
- (void).cxx_destruct;
- (void)bgBtnDidPressed:(id)arg1;
- (void)setCellModel:(id)arg1;
- (void)setupSubview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

