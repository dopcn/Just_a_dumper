//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SYUserModeModel, UIImageView, UILabel;

@interface SYUseModeTableViewCell : UITableViewCell
{
    _Bool _needSwitch;
    UIImageView *_icon;
    UILabel *_title;
    UILabel *_detailLabel;
    UIImageView *_arrow;
    SYUserModeModel *_model;
}

@property(retain, nonatomic) SYUserModeModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(nonatomic) _Bool needSwitch; // @synthesize needSwitch=_needSwitch;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)layoutWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

