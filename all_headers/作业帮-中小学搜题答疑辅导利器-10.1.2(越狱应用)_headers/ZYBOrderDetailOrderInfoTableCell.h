//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel;

@interface ZYBOrderDetailOrderInfoTableCell : UITableViewCell
{
    UIButton *_copyingButton;
    UILabel *_orderCodeLabel;
    UILabel *_timeLabel;
}

+ (id)indentifier;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *orderCodeLabel; // @synthesize orderCodeLabel=_orderCodeLabel;
@property(retain, nonatomic) UIButton *copyingButton; // @synthesize copyingButton=_copyingButton;
- (void).cxx_destruct;
- (void)setupLayoutView;
- (void)resetCellDataWithModel:(id)arg1 forIndexPath:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

