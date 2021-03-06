//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class GainersModel, StockColorTag, UILabel;

@interface FSChangeBaseCell : UITableViewCell
{
    GainersModel *_model;
    unsigned long long _type;
    UILabel *_midLabel;
    UILabel *_rightLabel;
    StockColorTag *_iconTag;
}

@property(retain, nonatomic) StockColorTag *iconTag; // @synthesize iconTag=_iconTag;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *midLabel; // @synthesize midLabel=_midLabel;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) GainersModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setCellDataWithModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

