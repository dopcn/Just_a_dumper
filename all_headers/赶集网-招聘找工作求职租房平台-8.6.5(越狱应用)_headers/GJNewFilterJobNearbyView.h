//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GJCFLocationManager, GJUserLocation, UIButton, UILabel;

@interface GJNewFilterJobNearbyView : UIView
{
    id _delegate;
    GJUserLocation *_myUserlocation;
    GJCFLocationManager *_locationManager;
    UILabel *_titleLabel;
    UILabel *_locationLabel;
    UIButton *_checkButton;
}

@property(retain, nonatomic) UIButton *checkButton; // @synthesize checkButton=_checkButton;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak GJCFLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) __weak GJUserLocation *myUserlocation; // @synthesize myUserlocation=_myUserlocation;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)checkButtonClicked;
- (void)showAlertViewWithoutGPS;
- (void)showSectionTitleWithNetState;
- (void)getCityInfo;
- (void)reloadLocation;
- (void)layoutLocationLabel;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

