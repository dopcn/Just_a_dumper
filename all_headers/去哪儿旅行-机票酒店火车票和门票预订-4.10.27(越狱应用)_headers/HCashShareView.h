//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HJumpRequestDataModel, NSDictionary, NSNumber, NSString, UIViewController;

@interface HCashShareView : UIView
{
    NSString *_imageID;
    NSString *_buttonTitle;
    NSNumber *_buttonBGColor;
    NSNumber *_buttonTitleColor;
    NSString *_headerTitle;
    NSString *_hintTitle;
    NSDictionary *_shareInfo;
    UIViewController *_baseNameVC;
    NSString *_specialShare;
    HJumpRequestDataModel *_jumpRequestModel;
}

@property(retain, nonatomic) HJumpRequestDataModel *jumpRequestModel; // @synthesize jumpRequestModel=_jumpRequestModel;
@property(retain, nonatomic) NSString *specialShare; // @synthesize specialShare=_specialShare;
@property(retain, nonatomic) UIViewController *baseNameVC; // @synthesize baseNameVC=_baseNameVC;
@property(retain, nonatomic) NSDictionary *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) NSString *hintTitle; // @synthesize hintTitle=_hintTitle;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(retain, nonatomic) NSNumber *buttonTitleColor; // @synthesize buttonTitleColor=_buttonTitleColor;
@property(retain, nonatomic) NSNumber *buttonBGColor; // @synthesize buttonBGColor=_buttonBGColor;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) NSString *imageID; // @synthesize imageID=_imageID;
- (void).cxx_destruct;
- (void)setupInfoViewSubs:(id)arg1;
- (void)setupViewRootSubs:(id)arg1;
- (void)share;
- (void)showView:(_Bool)arg1;
- (void)reloadRootViews;
- (void)hide;

@end

