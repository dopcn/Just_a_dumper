//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface BOXMyWalletDetailCell : UITableViewCell
{
    UILabel *_detailTitle;
    UILabel *_time;
    UILabel *_count;
    UILabel *_status;
}

@property(nonatomic) __weak UILabel *status; // @synthesize status=_status;
@property(nonatomic) __weak UILabel *count; // @synthesize count=_count;
@property(nonatomic) __weak UILabel *time; // @synthesize time=_time;
@property(nonatomic) __weak UILabel *detailTitle; // @synthesize detailTitle=_detailTitle;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

