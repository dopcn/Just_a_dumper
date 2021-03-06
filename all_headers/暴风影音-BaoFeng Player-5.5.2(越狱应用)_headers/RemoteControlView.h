//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol RemoteControlViewDelegate;

@interface RemoteControlView : UIView
{
    id <RemoteControlViewDelegate> _delegate;
    UIImageView *_bgImageView;
    UILabel *_titleStatusLabel;
    UILabel *_deviceLabel;
    UIButton *_exitBtn;
    UIButton *_chageDeviceBtn;
}

@property(retain, nonatomic) UIButton *chageDeviceBtn; // @synthesize chageDeviceBtn=_chageDeviceBtn;
@property(retain, nonatomic) UIButton *exitBtn; // @synthesize exitBtn=_exitBtn;
@property(retain, nonatomic) UILabel *deviceLabel; // @synthesize deviceLabel=_deviceLabel;
@property(retain, nonatomic) UILabel *titleStatusLabel; // @synthesize titleStatusLabel=_titleStatusLabel;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) id <RemoteControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setDeviceFriendlyName:(id)arg1;
- (void)setStatusLabelTitle:(id)arg1;
- (void)triggerChangeDevicesBtnAction:(id)arg1;
- (void)triggerExitBtnAction:(id)arg1;
- (void)layoutSubviews;
- (void)createSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

