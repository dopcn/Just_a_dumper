//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel, UIView;

@interface NMRidePathDetailCell : UITableViewCell
{
    UIView *_topLine;
    UIView *_bottomLine;
    UIImageView *_leftIcon;
    UILabel *_visibleLabel;
    _Bool _isFirst;
    _Bool _isLast;
    NSString *_iconName;
    NSString *_title;
}

+ (double)defaultCellHeight;
@property(nonatomic) _Bool isLast; // @synthesize isLast=_isLast;
@property(nonatomic) _Bool isFirst; // @synthesize isFirst=_isFirst;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
- (void).cxx_destruct;
- (void)initViews;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

