//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IGTokenView.h"

@class UILabel, UIView;

@interface IGUsernameTokenView : IGTokenView
{
    UILabel *_usernameLabel;
    UIView *_backgroundView;
}

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithToken:(id)arg1;

@end

