//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EGWCityFeedsNaviBar, MJCityTitleView, NSMutableDictionary, WeatherCityNavigation, WeatherNavigationView;

@interface MJCityNavigationBarManager : NSObject
{
    WeatherNavigationView *_usingNavView;
    EGWCityFeedsNaviBar *_feedsNaviBar;
    MJCityTitleView *_titleView;
    CDUnknownBlockType _addCityBlock;
    CDUnknownBlockType _feedsTitleDidClickBlk;
    NSMutableDictionary *_barsMutDic;
    WeatherCityNavigation *_weatherCity;
    NSMutableDictionary *_citiesMutDic;
    WeatherNavigationView *_preView;
    long long _preNetStatus;
}

@property(nonatomic) long long preNetStatus; // @synthesize preNetStatus=_preNetStatus;
@property(nonatomic) __weak WeatherNavigationView *preView; // @synthesize preView=_preView;
@property(retain, nonatomic) NSMutableDictionary *citiesMutDic; // @synthesize citiesMutDic=_citiesMutDic;
@property(retain, nonatomic) WeatherCityNavigation *weatherCity; // @synthesize weatherCity=_weatherCity;
@property(retain, nonatomic) NSMutableDictionary *barsMutDic; // @synthesize barsMutDic=_barsMutDic;
@property(copy, nonatomic) CDUnknownBlockType feedsTitleDidClickBlk; // @synthesize feedsTitleDidClickBlk=_feedsTitleDidClickBlk;
@property(copy, nonatomic) CDUnknownBlockType addCityBlock; // @synthesize addCityBlock=_addCityBlock;
@property(retain, nonatomic) MJCityTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) EGWCityFeedsNaviBar *feedsNaviBar; // @synthesize feedsNaviBar=_feedsNaviBar;
@property(retain, nonatomic) WeatherNavigationView *usingNavView; // @synthesize usingNavView=_usingNavView;
- (void).cxx_destruct;
- (void)didTapFeedsNavi;
- (void)resetNaviFrames;
- (void)updateFeedsNaviBar;
- (void)updateData;
- (void)updateViewIfGPSFailed;
- (id)updateWeatherNaviagtionViewIfNeedBy:(unsigned long long)arg1;
- (id)findOrCreateWeatherCityBy:(unsigned long long)arg1;
- (id)findOrCreatWeatherNavViewByCityStatus:(unsigned long long)arg1;
- (void)updateStatus;
- (void)setSpecialStatus:(long long)arg1;
- (_Bool)isFailedOrNormalStatus:(long long)arg1;
- (id)cityIDFromReq:(id)arg1;
- (void)protectStatusChanged;
- (void)updateReqeustDataStatus:(id)arg1;
- (void)firstNetConnectedSetPreNetStatusIfNeed:(int)arg1;
- (void)observerNetChanged;
- (void)observerNetRequestNotification;
- (void)setup;
- (void)dealloc;
- (id)init;

@end

