//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView;

@interface GOrderFillLineCell : UITableViewCell
{
    int _type;
    UIImageView *_bottomLine;
    UIImageView *_topLine;
}

@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) UIImageView *topLine; // @synthesize topLine=_topLine;
@property(readonly, nonatomic) UIImageView *bottomLine; // @synthesize bottomLine=_bottomLine;
- (void).cxx_destruct;
- (void)setTopLineHidden:(_Bool)arg1;
- (void)setLineType:(int)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

