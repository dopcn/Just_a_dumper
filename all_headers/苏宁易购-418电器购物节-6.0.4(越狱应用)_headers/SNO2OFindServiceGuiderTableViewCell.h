//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class HCSStarRatingView, MASConstraint, SNO2OTitleCell, SNUIImageView, UIImageView, UILabel, UIView;
@protocol SNO2OFindServiceGuiderTableViewCellDelgate;

@interface SNO2OFindServiceGuiderTableViewCell : UITableViewCell
{
    id <SNO2OFindServiceGuiderTableViewCellDelgate> _delegate;
    UIView *_backView;
    SNO2OTitleCell *_titleHead;
    UIView *_nearByStoreMoreView;
    SNUIImageView *_guiderImage;
    UIImageView *_guiderTypeIcon;
    UILabel *_guiderNameLbl;
    UILabel *_guiderOrderNum;
    HCSStarRatingView *_vBuyGuiderStarLevel;
    UILabel *_distanceLbl;
    MASConstraint *_distanceLblWidthConstraint;
    UILabel *_storeNameLbl;
}

@property(retain, nonatomic) UILabel *storeNameLbl; // @synthesize storeNameLbl=_storeNameLbl;
@property(retain, nonatomic) MASConstraint *distanceLblWidthConstraint; // @synthesize distanceLblWidthConstraint=_distanceLblWidthConstraint;
@property(retain, nonatomic) UILabel *distanceLbl; // @synthesize distanceLbl=_distanceLbl;
@property(retain, nonatomic) HCSStarRatingView *vBuyGuiderStarLevel; // @synthesize vBuyGuiderStarLevel=_vBuyGuiderStarLevel;
@property(retain, nonatomic) UILabel *guiderOrderNum; // @synthesize guiderOrderNum=_guiderOrderNum;
@property(retain, nonatomic) UILabel *guiderNameLbl; // @synthesize guiderNameLbl=_guiderNameLbl;
@property(retain, nonatomic) UIImageView *guiderTypeIcon; // @synthesize guiderTypeIcon=_guiderTypeIcon;
@property(retain, nonatomic) SNUIImageView *guiderImage; // @synthesize guiderImage=_guiderImage;
@property(retain, nonatomic) UIView *nearByStoreMoreView; // @synthesize nearByStoreMoreView=_nearByStoreMoreView;
@property(retain, nonatomic) SNO2OTitleCell *titleHead; // @synthesize titleHead=_titleHead;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) __weak id <SNO2OFindServiceGuiderTableViewCellDelgate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)moreCityGuiderTapClick;
- (void)updateWithGuiderDto:(id)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

