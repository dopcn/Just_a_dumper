//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

@class UILabel;

@interface QLONAMultiPosterCell : QLBaseTabelViewCell
{
    UILabel *_debugInfoLabel;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
+ (int)getThumbStyleWithMultiPoster:(id)arg1 showNumber:(long long *)arg2;
@property(retain, nonatomic) UILabel *debugInfoLabel; // @synthesize debugInfoLabel=_debugInfoLabel;
- (void).cxx_destruct;
- (void)reportShowUp;
- (id)replacePoster:(id)arg1 multiPoster:(id)arg2;
- (void)setObject:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

