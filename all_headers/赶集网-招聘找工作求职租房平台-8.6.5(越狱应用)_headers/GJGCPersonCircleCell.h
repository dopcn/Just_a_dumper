//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

@interface GJGCPersonCircleCell : UITableViewCell
{
    CDUnknownBlockType _clickFollow;
    CDUnknownBlockType _clickCircle;
    CDUnknownBlockType _clickFans;
    UILabel *_titleLabel;
    UIView *_mainView;
}

@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType clickFans; // @synthesize clickFans=_clickFans;
@property(copy, nonatomic) CDUnknownBlockType clickCircle; // @synthesize clickCircle=_clickCircle;
@property(copy, nonatomic) CDUnknownBlockType clickFollow; // @synthesize clickFollow=_clickFollow;
- (void).cxx_destruct;
- (double)cellHeight;
- (void)didSelectButton:(id)arg1;
- (void)updateData:(id)arg1 isSelf:(_Bool)arg2;
- (void)configSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

