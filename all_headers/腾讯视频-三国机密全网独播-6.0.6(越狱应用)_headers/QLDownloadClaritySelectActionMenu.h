//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSMutableArray, UILabel;
@protocol QLDownloadClaritySelectActionMenuDelegate><NSObject;

@interface QLDownloadClaritySelectActionMenu : UIView
{
    UIView *_bgView;
    UIView *_contentView;
    UILabel *_tipView;
    _Bool _useItemList;
    int _currentSelectResolution;
    id <QLDownloadClaritySelectActionMenuDelegate><NSObject> _delegate;
    NSDictionary *_videoInfo;
    NSMutableArray *_resolutionItems;
    NSMutableArray *_itemList;
}

@property(nonatomic) int currentSelectResolution; // @synthesize currentSelectResolution=_currentSelectResolution;
@property(retain, nonatomic) NSMutableArray *itemList; // @synthesize itemList=_itemList;
@property(retain, nonatomic) NSMutableArray *resolutionItems; // @synthesize resolutionItems=_resolutionItems;
@property(retain, nonatomic) NSDictionary *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) __weak id <QLDownloadClaritySelectActionMenuDelegate><NSObject> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)resolutionWithSetting:(unsigned long long)arg1;
- (void)generateItemList:(id)arg1;
- (void)postResumeDownloadNotification;
- (void)didPressCancelButtonAction:(id)arg1;
- (void)didPressButtonAction:(id)arg1;
- (void)dismissFromSuperView;
- (void)showInSuperView;
- (void)addBottomSafeAreaView:(double)arg1 height:(double)arg2;
- (void)addCancelButton:(double)arg1 height:(double)arg2;
- (void)addSeparatorView:(double)arg1 height:(double)arg2;
- (void)addContentView;
- (void)addTipView:(id)arg1;
- (void)dismiss;
- (void)disenableMenuItem:(long long)arg1 disenable:(_Bool)arg2;
- (void)showInView:(id)arg1 tip:(id)arg2 titles:(id)arg3 cancel:(_Bool)arg4;
- (void)showInView:(id)arg1;
- (void)vipStateChange:(id)arg1;
- (id)getResolutionArray;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithDelegate:(id)arg1;

@end

