//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MICellInfoProtocol-Protocol.h"

@class NSString, UILabel, UIView;

@interface MIProductGroupTableViewCell : UITableViewCell <MICellInfoProtocol>
{
    UIView *_groupBacView;
    UILabel *_groupTitleLabel;
    UILabel *_groupPriceLabel;
}

+ (double)cellHeight:(id)arg1;
@property(nonatomic) __weak UILabel *groupPriceLabel; // @synthesize groupPriceLabel=_groupPriceLabel;
@property(nonatomic) __weak UILabel *groupTitleLabel; // @synthesize groupTitleLabel=_groupTitleLabel;
@property(nonatomic) __weak UIView *groupBacView; // @synthesize groupBacView=_groupBacView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)loadData:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

