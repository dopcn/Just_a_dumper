//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MLConnectPanelMiddleItemViewModel, MLConnectPanelTopHotItemTagView, UIImageView, UILabel;

@interface MLConnectPanelTopHotItemView : UIView
{
    MLConnectPanelMiddleItemViewModel *_connectPanelMiddleItemViewModel;
    UIImageView *_imageViewHead;
    UIImageView *_imageViewNumberID;
    UILabel *_labelNickName;
    MLConnectPanelTopHotItemTagView *_connectPanelTopHotItemTagView;
}

@property(retain, nonatomic) MLConnectPanelTopHotItemTagView *connectPanelTopHotItemTagView; // @synthesize connectPanelTopHotItemTagView=_connectPanelTopHotItemTagView;
@property(retain, nonatomic) UILabel *labelNickName; // @synthesize labelNickName=_labelNickName;
@property(retain, nonatomic) UIImageView *imageViewNumberID; // @synthesize imageViewNumberID=_imageViewNumberID;
@property(retain, nonatomic) UIImageView *imageViewHead; // @synthesize imageViewHead=_imageViewHead;
@property(retain, nonatomic) MLConnectPanelMiddleItemViewModel *connectPanelMiddleItemViewModel; // @synthesize connectPanelMiddleItemViewModel=_connectPanelMiddleItemViewModel;
- (void).cxx_destruct;
- (void)setHeadImageViewAndNumberIdViewFrames:(int)arg1;
- (void)onTapHeadView;
- (void)layoutSubviews;
- (void)initUserInterface;
- (void)initData;
- (id)init;

@end

