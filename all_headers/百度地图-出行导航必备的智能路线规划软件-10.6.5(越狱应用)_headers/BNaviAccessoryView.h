//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BNaviBaseView.h"

@class UIImageView;

@interface BNaviAccessoryView : BNaviBaseView
{
    UIImageView *_accessoryView;
    unsigned long long _accessoryViewType;
}

@property(nonatomic) unsigned long long accessoryViewType; // @synthesize accessoryViewType=_accessoryViewType;
@property(retain, nonatomic) UIImageView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void).cxx_destruct;
- (void)updateNaviSubviews:(id)arg1;
- (void)layoutSubviews;
- (void)setFrameAndImage;
- (void)doInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

