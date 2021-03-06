//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "KWPPToolBoxSlideShowViewDelegate-Protocol.h"
#import "WPPFormatSettingDelegate-Protocol.h"
#import "WPPPictureSettingDelegate-Protocol.h"
#import "WPPToolBoxInsertViewDelegate-Protocol.h"

@class KWPPOneKeyListBoard, KWPPToolBoxSlideShowView, NSString, WPPFormatSetting, WPPPictureSetting, WPPTextBoxSetting, WPPToolBoxInsertView, WPPToolbarMenuViewForPad;
@protocol WPPNewToolBoxViewForPadDataSource, WPPNewToolBoxViewForPadDelegate;

@interface WPPNewToolBoxViewForPad : UIView <WPPFormatSettingDelegate, WPPToolBoxInsertViewDelegate, WPPPictureSettingDelegate, KWPPToolBoxSlideShowViewDelegate>
{
    _Bool _isShow;
    int _screenLayoutType;
    long long _boxComponentType;
    id <WPPNewToolBoxViewForPadDelegate> _delegate;
    id <WPPNewToolBoxViewForPadDataSource> _dataSource;
    WPPToolbarMenuViewForPad *_toolBarMenuView;
    UIView *_toolBoxView;
    KWPPOneKeyListBoard *_onekeyBoardView;
    KWPPToolBoxSlideShowView *_slideShowView;
    WPPToolBoxInsertView *_toolboxInsertView;
    UIView *_currentSettingView;
    UIView *_panelStickToView;
    WPPFormatSetting *_formatSetting;
    WPPTextBoxSetting *_textBoxSetting;
    WPPPictureSetting *_pictureSetting;
}

@property(retain, nonatomic) WPPPictureSetting *pictureSetting; // @synthesize pictureSetting=_pictureSetting;
@property(retain, nonatomic) WPPTextBoxSetting *textBoxSetting; // @synthesize textBoxSetting=_textBoxSetting;
@property(retain, nonatomic) WPPFormatSetting *formatSetting; // @synthesize formatSetting=_formatSetting;
@property(nonatomic) __weak UIView *panelStickToView; // @synthesize panelStickToView=_panelStickToView;
@property(retain, nonatomic) UIView *currentSettingView; // @synthesize currentSettingView=_currentSettingView;
@property(retain, nonatomic) WPPToolBoxInsertView *toolboxInsertView; // @synthesize toolboxInsertView=_toolboxInsertView;
@property(retain, nonatomic) KWPPToolBoxSlideShowView *slideShowView; // @synthesize slideShowView=_slideShowView;
@property(retain, nonatomic) KWPPOneKeyListBoard *onekeyBoardView; // @synthesize onekeyBoardView=_onekeyBoardView;
@property(retain, nonatomic) UIView *toolBoxView; // @synthesize toolBoxView=_toolBoxView;
@property(retain, nonatomic) WPPToolbarMenuViewForPad *toolBarMenuView; // @synthesize toolBarMenuView=_toolBarMenuView;
@property(nonatomic) int screenLayoutType; // @synthesize screenLayoutType=_screenLayoutType;
@property(nonatomic) __weak id <WPPNewToolBoxViewForPadDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WPPNewToolBoxViewForPadDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long boxComponentType; // @synthesize boxComponentType=_boxComponentType;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void).cxx_destruct;
- (void)slideShowView:(id)arg1 didSelectIndex:(long long)arg2 clickview:(id)arg3;
- (void)touchedAddedTextbox;
- (void)touchedTakePhotoBtn;
- (void)touchedInsertMediaBtn:(id)arg1;
- (void)pictrueChanged:(id)arg1;
- (void)pictrueSettingViewClearCrop;
- (void)pictrueSettingViewCropPic;
- (void)showOnLineHelpWith:(int)arg1;
- (void)formatSettingChanged;
- (void)showToolBoxWithAnimation;
- (void)hideToolBoxWithAnimation;
- (_Bool)isBoxComponentNeedCursor;
- (struct CGRect)getSettingViewFrame;
- (void)resetToolBoxWithType:(long long)arg1;
- (void)resetView;
- (_Bool)isToolbarPanelTransparent;
- (void)forceClose:(CDUnknownBlockType)arg1;
- (void)showMediaView;
- (_Bool)isOneKeyBeautifying;
- (void)toolboxWillHideComponent;
- (void)toolboxWillShowComponent;
- (void)toolbarPanelPresentationShow:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 buttonType:(long long)arg2 delegete:(id)arg3 superView:(id)arg4;
- (void)layoutSubviews;
- (long long)getWillChangeStateButtonType:(long long)arg1;
- (void)refreshToolboxItemState:(long long)arg1;
- (_Bool)setToolboxBySelectedObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

