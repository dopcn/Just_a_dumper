//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNPMYOUTHCell.h"

@class UIView;
@protocol SNPMYOUTHVideoDetailRecommendProductCellDelegate;

@interface SNPMYOUTHVideoDetailRecommendProductCell : SNPMYOUTHCell
{
    id <SNPMYOUTHVideoDetailRecommendProductCellDelegate> _productDelegate;
    UIView *_headerView;
}

+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <SNPMYOUTHVideoDetailRecommendProductCellDelegate> productDelegate; // @synthesize productDelegate=_productDelegate;
- (void).cxx_destruct;
- (void)refreshCell:(id)arg1 contentID:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

