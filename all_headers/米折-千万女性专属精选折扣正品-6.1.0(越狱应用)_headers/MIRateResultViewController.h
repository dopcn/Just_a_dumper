//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MIBaseViewController.h"

@class NSArray, NSNumber, NSString, UIButton, UILabel, UIView;

@interface MIRateResultViewController : MIBaseViewController
{
    UIView *_updatedTopView;
    UIView *_updatedBottomView;
    UIView *_unUpdatedView;
    UILabel *_rateSuccessLabel;
    UIButton *_showBtn;
    int _type;
    NSString *_oid;
    NSNumber *_awardType;
    NSString *_shareImageUrl;
    NSString *_shareUrlStr;
    NSArray *_shareImageArr;
    NSString *_shareChannel;
    NSString *_shareDesc;
    NSString *_showPoints;
}

@property(retain, nonatomic) NSString *showPoints; // @synthesize showPoints=_showPoints;
@property(retain, nonatomic) NSString *shareDesc; // @synthesize shareDesc=_shareDesc;
@property(retain, nonatomic) NSString *shareChannel; // @synthesize shareChannel=_shareChannel;
@property(retain, nonatomic) NSArray *shareImageArr; // @synthesize shareImageArr=_shareImageArr;
@property(retain, nonatomic) NSString *shareUrlStr; // @synthesize shareUrlStr=_shareUrlStr;
@property(retain, nonatomic) NSString *shareImageUrl; // @synthesize shareImageUrl=_shareImageUrl;
@property(retain, nonatomic) NSNumber *awardType; // @synthesize awardType=_awardType;
@property(retain, nonatomic) NSString *oid; // @synthesize oid=_oid;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)shareSuccess;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)goShare;
- (void)goTemai;
- (void)miPopToPreviousViewController;
- (void)refreshBottomView;
- (void)refreshView;
- (void)initUnUpdatedImage;
- (void)viewDidLoad;

@end

