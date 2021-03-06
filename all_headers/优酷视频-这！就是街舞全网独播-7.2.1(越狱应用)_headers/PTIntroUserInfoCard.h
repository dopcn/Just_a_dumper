//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PTIntroBaseCard.h"

@class PTIntroUserInfo, UIImageView, UILabel;

@interface PTIntroUserInfoCard : PTIntroBaseCard
{
    UILabel *_nameLabel;
    UILabel *_followerLabel;
    UILabel *_messageLabel;
    UIImageView *_portraitLine;
    PTIntroUserInfo *_userInfo;
}

@property(retain, nonatomic) PTIntroUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) UIImageView *portraitLine; // @synthesize portraitLine=_portraitLine;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *followerLabel; // @synthesize followerLabel=_followerLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)clickCard;
- (void)layout;
- (void)setUpModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

