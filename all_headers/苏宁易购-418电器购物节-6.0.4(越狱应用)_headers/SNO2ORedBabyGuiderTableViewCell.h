//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SNO2OTitleCell, SNUIImageView, UIButton, UILabel, UIView;
@protocol SNO2OFindViewDelegate;

@interface SNO2ORedBabyGuiderTableViewCell : UITableViewCell
{
    id <SNO2OFindViewDelegate> _findViewDelegate;
    SNO2OTitleCell *_titleHead;
    UIView *_backView;
    UIView *_nearByStoreMoreView;
    SNUIImageView *_guiderImageView;
    UILabel *_nameInfoLbl;
    UILabel *_moreInfoLbl;
    UILabel *_sloganLbl;
    UIButton *_dataBtn;
    UIView *_dataTapView;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIView *dataTapView; // @synthesize dataTapView=_dataTapView;
@property(retain, nonatomic) UIButton *dataBtn; // @synthesize dataBtn=_dataBtn;
@property(retain, nonatomic) UILabel *sloganLbl; // @synthesize sloganLbl=_sloganLbl;
@property(retain, nonatomic) UILabel *moreInfoLbl; // @synthesize moreInfoLbl=_moreInfoLbl;
@property(retain, nonatomic) UILabel *nameInfoLbl; // @synthesize nameInfoLbl=_nameInfoLbl;
@property(retain, nonatomic) SNUIImageView *guiderImageView; // @synthesize guiderImageView=_guiderImageView;
@property(retain, nonatomic) UIView *nearByStoreMoreView; // @synthesize nearByStoreMoreView=_nearByStoreMoreView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) SNO2OTitleCell *titleHead; // @synthesize titleHead=_titleHead;
@property(nonatomic) __weak id <SNO2OFindViewDelegate> findViewDelegate; // @synthesize findViewDelegate=_findViewDelegate;
- (void).cxx_destruct;
- (void)tapViewTap;
- (void)dataBtnClick;
- (void)moreCityGuiderTapClick;
- (void)updateWithChildGuider:(id)arg1;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

