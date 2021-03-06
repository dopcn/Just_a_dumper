//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LSActivityAddressItemView, LSActivityBriefModel, LSActivityTimeItemView, UILabel, WXImageView;

__attribute__((visibility("hidden")))
@interface LSCardActivityBriefView : UIView
{
    LSActivityBriefModel *_viewModel;
    WXImageView *_mIconImageView;
    UILabel *_mTitleLabel;
    UIView *_mInfoContainerView;
    LSActivityTimeItemView *_timeView;
    LSActivityAddressItemView *_addressView;
}

+ (id)genCardActivityBriefViewModel:(id)arg1;
+ (id)genCardActivityBriefView;
@property(nonatomic) __weak LSActivityAddressItemView *addressView; // @synthesize addressView=_addressView;
@property(nonatomic) __weak LSActivityTimeItemView *timeView; // @synthesize timeView=_timeView;
@property(nonatomic) __weak UIView *mInfoContainerView; // @synthesize mInfoContainerView=_mInfoContainerView;
@property(nonatomic) __weak UILabel *mTitleLabel; // @synthesize mTitleLabel=_mTitleLabel;
@property(nonatomic) __weak WXImageView *mIconImageView; // @synthesize mIconImageView=_mIconImageView;
@property(retain, nonatomic) LSActivityBriefModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)configureWithViewModel:(id)arg1;

@end

