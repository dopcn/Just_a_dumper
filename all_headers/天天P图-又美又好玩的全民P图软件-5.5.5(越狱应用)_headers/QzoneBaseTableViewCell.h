//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIColor, UIImageView, UIView;

@interface QzoneBaseTableViewCell : UITableViewCell
{
    _Bool _hideSeparatorLineOnBothEnds;
    _Bool _hideSeparatorLineAlways;
    int _locationType;
    UIColor *_topSeparatorLineColor;
    UIColor *_bottomSeparatorLineColor;
    double _seperatorLineHeight;
    double _separatorLineInset;
    UIImageView *_backgourndImageView;
    UIView *_topSeparatorLine;
    UIView *_bottomSeparatorLine;
    UIView *_topSeparatorLineOnBg;
    UIView *_bottomSeparatorLineOnBg;
}

@property(retain, nonatomic) UIView *bottomSeparatorLineOnBg; // @synthesize bottomSeparatorLineOnBg=_bottomSeparatorLineOnBg;
@property(retain, nonatomic) UIView *topSeparatorLineOnBg; // @synthesize topSeparatorLineOnBg=_topSeparatorLineOnBg;
@property(retain, nonatomic) UIView *bottomSeparatorLine; // @synthesize bottomSeparatorLine=_bottomSeparatorLine;
@property(retain, nonatomic) UIView *topSeparatorLine; // @synthesize topSeparatorLine=_topSeparatorLine;
@property(retain, nonatomic) UIImageView *backgourndImageView; // @synthesize backgourndImageView=_backgourndImageView;
@property(nonatomic) int locationType; // @synthesize locationType=_locationType;
@property(nonatomic) _Bool hideSeparatorLineAlways; // @synthesize hideSeparatorLineAlways=_hideSeparatorLineAlways;
@property(nonatomic) _Bool hideSeparatorLineOnBothEnds; // @synthesize hideSeparatorLineOnBothEnds=_hideSeparatorLineOnBothEnds;
@property(nonatomic) double separatorLineInset; // @synthesize separatorLineInset=_separatorLineInset;
@property(nonatomic) double seperatorLineHeight; // @synthesize seperatorLineHeight=_seperatorLineHeight;
@property(retain, nonatomic) UIColor *bottomSeparatorLineColor; // @synthesize bottomSeparatorLineColor=_bottomSeparatorLineColor;
@property(retain, nonatomic) UIColor *topSeparatorLineColor; // @synthesize topSeparatorLineColor=_topSeparatorLineColor;
- (void).cxx_destruct;
- (void)setPosition:(int)arg1;
- (void)setAppearanceWithRow:(long long)arg1 inTotle:(long long)arg2;
- (int)positionOfAppearanceWithRow:(long long)arg1 inTotle:(long long)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

