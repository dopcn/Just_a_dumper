//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CourselistItem, UIImageView, UIView;

@interface TreasureChestWeikeCourseTypeCell : UITableViewCell
{
    CourselistItem *_item;
    UIImageView *_bannerView;
    UIImageView *_updateStatusIV;
    UIImageView *_subscribeIV;
    UIView *_line;
}

+ (double)heightForItem;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIImageView *subscribeIV; // @synthesize subscribeIV=_subscribeIV;
@property(retain, nonatomic) UIImageView *updateStatusIV; // @synthesize updateStatusIV=_updateStatusIV;
@property(retain, nonatomic) UIImageView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) CourselistItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)setCurrentClicked:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

