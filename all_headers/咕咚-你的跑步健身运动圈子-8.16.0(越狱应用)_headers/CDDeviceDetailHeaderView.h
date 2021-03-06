//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CDCodEarphone1MoreView, CDDeviceBindData, CDDeviceConnectView, UIImageView, UILabel;

@interface CDDeviceDetailHeaderView : UIView
{
    long long _operationState;
    long long _deviceCategory;
    CDDeviceBindData *_bindDevice;
    long long _heartRate;
    CDUnknownBlockType _earphoneVideoClick;
    UIImageView *_deviceImageView;
    UIImageView *_videoIconImageView;
    UILabel *_deviceNameLabel;
    CDCodEarphone1MoreView *_cod1MoreView;
    CDDeviceConnectView *_connectView;
    UILabel *_codBraBatteryLowTipsLabel;
}

@property(retain, nonatomic) UILabel *codBraBatteryLowTipsLabel; // @synthesize codBraBatteryLowTipsLabel=_codBraBatteryLowTipsLabel;
@property(retain, nonatomic) CDDeviceConnectView *connectView; // @synthesize connectView=_connectView;
@property(retain, nonatomic) CDCodEarphone1MoreView *cod1MoreView; // @synthesize cod1MoreView=_cod1MoreView;
@property(retain, nonatomic) UILabel *deviceNameLabel; // @synthesize deviceNameLabel=_deviceNameLabel;
@property(retain, nonatomic) UIImageView *videoIconImageView; // @synthesize videoIconImageView=_videoIconImageView;
@property(retain, nonatomic) UIImageView *deviceImageView; // @synthesize deviceImageView=_deviceImageView;
@property(copy, nonatomic) CDUnknownBlockType earphoneVideoClick; // @synthesize earphoneVideoClick=_earphoneVideoClick;
@property(nonatomic) long long heartRate; // @synthesize heartRate=_heartRate;
@property(retain, nonatomic) CDDeviceBindData *bindDevice; // @synthesize bindDevice=_bindDevice;
@property(nonatomic) long long deviceCategory; // @synthesize deviceCategory=_deviceCategory;
@property(nonatomic) long long operationState; // @synthesize operationState=_operationState;
- (void).cxx_destruct;
- (void)videoIconClickAction;
- (void)initViews;
- (id)initWithDeviceCategory:(long long)arg1;

@end

