//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;

@interface RPPlanBorrowerCell : UITableViewCell
{
    UILabel *_userName;
    UILabel *_amount;
    UILabel *_date;
    UILabel *_days;
    UIView *_bottomLine;
}

@property(nonatomic) __weak UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) __weak UILabel *days; // @synthesize days=_days;
@property(nonatomic) __weak UILabel *date; // @synthesize date=_date;
@property(nonatomic) __weak UILabel *amount; // @synthesize amount=_amount;
@property(nonatomic) __weak UILabel *userName; // @synthesize userName=_userName;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)cellForData:(id)arg1;
- (void)awakeFromNib;

@end

