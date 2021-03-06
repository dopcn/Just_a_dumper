//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "CTHomeSecondPageCellProtocol-Protocol.h"

@class CTHomeSecondPageItemModel, CTImageView, NSLayoutConstraint, NSString, UILabel;

@interface CTHomeSecondPageBusinessDiscountCell : UICollectionViewCell <CTHomeSecondPageCellProtocol>
{
    CTImageView *_businessImageView;
    UILabel *_mainTitleLabel;
    UILabel *_subTitleLabel;
    UILabel *_secSubTitleLabel;
    UILabel *_freeToGetLabel;
    UILabel *_numberLabel;
    NSLayoutConstraint *_subTitleCenterYConstraint;
    NSLayoutConstraint *_subTitleTopConstraint;
    NSLayoutConstraint *_subTitleBottomConstraint;
    CTHomeSecondPageItemModel *_cellModel;
}

+ (double)CellHeight;
+ (double)CellWidth;
@property(retain, nonatomic) CTHomeSecondPageItemModel *cellModel; // @synthesize cellModel=_cellModel;
@property(nonatomic) __weak NSLayoutConstraint *subTitleBottomConstraint; // @synthesize subTitleBottomConstraint=_subTitleBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *subTitleTopConstraint; // @synthesize subTitleTopConstraint=_subTitleTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *subTitleCenterYConstraint; // @synthesize subTitleCenterYConstraint=_subTitleCenterYConstraint;
@property(nonatomic) __weak UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(nonatomic) __weak UILabel *freeToGetLabel; // @synthesize freeToGetLabel=_freeToGetLabel;
@property(nonatomic) __weak UILabel *secSubTitleLabel; // @synthesize secSubTitleLabel=_secSubTitleLabel;
@property(nonatomic) __weak UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(nonatomic) __weak UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(nonatomic) __weak CTImageView *businessImageView; // @synthesize businessImageView=_businessImageView;
- (void).cxx_destruct;
- (id)retrieveURL;
- (void)refreshCellData:(id)arg1;
- (void)initUI;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

