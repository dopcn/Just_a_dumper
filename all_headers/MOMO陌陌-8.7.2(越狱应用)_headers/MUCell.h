//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MUCellModel;

@interface MUCell : UITableViewCell
{
    MUCellModel *_model;
    double _cellHeight;
}

+ (struct _NSRange)getBoldRangeFromTextArray:(id)arg1;
+ (id)getNormalStringFromTextArray:(id)arg1;
+ (double)cellHeightForModel:(id)arg1;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) MUCellModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)bindModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

