//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface BBHelpOfflineHeaderView : UIView
{
    UILabel *_offlineLabel;
    UILabel *_offlineHeader;
    UIImageView *_offlineIcon;
    UIImageView *_backgroundImageView;
}

+ (double)idealHeight;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIImageView *offlineIcon; // @synthesize offlineIcon=_offlineIcon;
@property(retain, nonatomic) UILabel *offlineHeader; // @synthesize offlineHeader=_offlineHeader;
@property(retain, nonatomic) UILabel *offlineLabel; // @synthesize offlineLabel=_offlineLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

