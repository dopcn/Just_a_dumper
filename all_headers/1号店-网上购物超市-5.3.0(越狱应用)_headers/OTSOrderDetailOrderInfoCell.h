//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OTSOrderDetailInfoBaseCell.h"

@protocol OTSOrderDetailOrderInfoCellProtocol;

@interface OTSOrderDetailOrderInfoCell : OTSOrderDetailInfoBaseCell
{
}

+ (double)preferredHorizonMargin;
+ (double)preferredAdjacentSpace;
+ (double)preferredContentTopMargin;
+ (double)heightForCellData:(id)arg1;
- (void)didClickCopyButton:(id)arg1;
- (id)genBtn;
- (void)customLayout;
- (void)updateWithCellData:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <OTSOrderDetailOrderInfoCellProtocol> delegate; // @dynamic delegate;

@end

