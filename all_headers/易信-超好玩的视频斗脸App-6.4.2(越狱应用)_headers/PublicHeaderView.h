//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CardHeaderView.h"

@class YXThemeButton, YXThemeImageView;

@interface PublicHeaderView : CardHeaderView
{
    YXThemeImageView *_authenticationView;
    YXThemeButton *_setCloseButton;
}

@property(retain, nonatomic) YXThemeButton *setCloseButton; // @synthesize setCloseButton=_setCloseButton;
@property(retain, nonatomic) YXThemeImageView *authenticationView; // @synthesize authenticationView=_authenticationView;
- (void).cxx_destruct;
- (void)setCloseFriendButtonPressed:(id)arg1;
- (void)setCloseFriendButtonWithState:(_Bool)arg1;
- (void)reloadView;
- (void)layoutSubviews;
- (void)initUI;

@end

