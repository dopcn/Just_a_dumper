//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FriendHeaderView.h"

@class YXThemeButton;

@interface RecommendHeaderView : FriendHeaderView
{
    YXThemeButton *_alterNameButton;
    YXThemeButton *_authorityButton;
}

@property(retain, nonatomic) YXThemeButton *authorityButton; // @synthesize authorityButton=_authorityButton;
@property(retain, nonatomic) YXThemeButton *alterNameButton; // @synthesize alterNameButton=_alterNameButton;
- (void).cxx_destruct;
- (void)authorityButtonPressed:(id)arg1;
- (void)alterNameButtonPressed:(id)arg1;
- (void)layoutSubviews;
- (void)reloadView;
- (void)setTextColor;
- (void)initUI;

@end

