//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KTVSimpleTableViewCell.h"

@class UIImageView, UILabel;

@interface SelectRecordCell : KTVSimpleTableViewCell
{
    UILabel *_songnameLabel;
    UILabel *_durationLabel;
    UIImageView *_durationIcon;
    UILabel *_timeLabel;
    UIImageView *_mvIconImage;
}

+ (id)heightForModel:(id)arg1;
@property(retain, nonatomic) UIImageView *mvIconImage; // @synthesize mvIconImage=_mvIconImage;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *durationIcon; // @synthesize durationIcon=_durationIcon;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *songnameLabel; // @synthesize songnameLabel=_songnameLabel;
- (void).cxx_destruct;
- (void)setDurationLabelDuration:(double)arg1;
- (void)reloadData;
- (void)awakeFromNib;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

