//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNO2OZWSViewController.h"

@class NSMutableArray, NSMutableDictionary, NSString, SNO2ORedBabyActChildViewController;

@interface SNO2ORedBabyActViewController : SNO2OZWSViewController
{
    NSString *_storeCode;
    SNO2ORedBabyActChildViewController *_currentChildViewController;
    NSMutableArray *_serviceTabIDArray;
    NSMutableArray *_serviceTabTitleArray;
    NSMutableDictionary *_viewDic;
}

+ (void)load;
@property(retain, nonatomic) NSMutableDictionary *viewDic; // @synthesize viewDic=_viewDic;
@property(retain, nonatomic) NSMutableArray *serviceTabTitleArray; // @synthesize serviceTabTitleArray=_serviceTabTitleArray;
@property(retain, nonatomic) NSMutableArray *serviceTabIDArray; // @synthesize serviceTabIDArray=_serviceTabIDArray;
@property(retain, nonatomic) SNO2ORedBabyActChildViewController *currentChildViewController; // @synthesize currentChildViewController=_currentChildViewController;
@property(retain, nonatomic) NSString *storeCode; // @synthesize storeCode=_storeCode;
- (void).cxx_destruct;
- (void)refreshDataWithStoreCode:(id)arg1;
- (id)contentViewForPage:(id)arg1 atIndex:(long long)arg2;
- (void)viewDidLoad;
- (id)init;

@end

