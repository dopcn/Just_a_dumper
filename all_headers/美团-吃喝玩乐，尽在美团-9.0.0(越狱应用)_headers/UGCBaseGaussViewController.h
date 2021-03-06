//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "UINavigationControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSNumber, NSString, UGCMagicTransition, UGCPhotoWithExtroInfo, UGCSelectImageButton, UIPercentDrivenInteractiveTransition, UIView;
@protocol ShouldPopGaussViewDelegate;

@interface UGCBaseGaussViewController : UITableViewController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, UIScrollViewDelegate>
{
    UGCSelectImageButton *_titleButton;
    id <ShouldPopGaussViewDelegate> _gaussPopDelegate;
    NSDictionary *_additionalSubViewConDic;
    NSNumber *_shopId;
    NSString *_referid;
    NSNumber *_referType;
    NSMutableDictionary *_callBackDic;
    NSDictionary *_imageDic;
    NSString *_selectImageName;
    UGCPhotoWithExtroInfo *_imageData;
    UIView *_headerView;
}

@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UGCPhotoWithExtroInfo *imageData; // @synthesize imageData=_imageData;
@property(copy, nonatomic) NSString *selectImageName; // @synthesize selectImageName=_selectImageName;
@property(retain, nonatomic) NSDictionary *imageDic; // @synthesize imageDic=_imageDic;
@property(retain, nonatomic) NSMutableDictionary *callBackDic; // @synthesize callBackDic=_callBackDic;
@property(retain, nonatomic) NSNumber *referType; // @synthesize referType=_referType;
@property(copy, nonatomic) NSString *referid; // @synthesize referid=_referid;
@property(retain, nonatomic) NSNumber *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSDictionary *additionalSubViewConDic; // @synthesize additionalSubViewConDic=_additionalSubViewConDic;
@property(nonatomic) __weak id <ShouldPopGaussViewDelegate> gaussPopDelegate; // @synthesize gaussPopDelegate=_gaussPopDelegate;
@property(retain, nonatomic) UGCSelectImageButton *titleButton; // @synthesize titleButton=_titleButton;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setUpImages;
- (void)popToRoot:(id)arg1;
- (void)shouldPopToRoot:(CDUnknownBlockType)arg1;
- (id)getHeaderView:(id)arg1;
- (void)setUpTableView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)isModalView;
- (_Bool)isDrawerView;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)presentViewController:(id)arg1 fromViews:(id)arg2 toViews:(id)arg3 duration:(double)arg4;
- (void)presentViewController:(id)arg1 fromView:(id)arg2 toView:(id)arg3 duration:(double)arg4;
@property(retain, nonatomic) UGCMagicTransition *pushTransit; // @dynamic pushTransit;
@property(retain, nonatomic) UGCMagicTransition *popTransit; // @dynamic popTransit;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactivePopTransition; // @dynamic interactivePopTransition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

