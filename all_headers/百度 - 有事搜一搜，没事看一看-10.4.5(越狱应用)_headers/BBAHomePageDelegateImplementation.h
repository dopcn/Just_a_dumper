//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BBAHomePageDelegate-Protocol.h"

@class NSString;

@interface BBAHomePageDelegateImplementation : NSObject <BBAHomePageDelegate>
{
}

+ (void)enterProfile;
+ (_Bool)isNewUser;
+ (void)endLaunchSpeedPointWithEvent:(id)arg1;
+ (void)addLaunchSpeedPointWithComponent:(id)arg1 event:(id)arg2;
+ (_Bool)checkCurrentNetwork;
+ (void)endFlowDurationLogWithId:(id)arg1;
+ (void)startFlowDurationLogWithId:(id)arg1 contentString:(id)arg2;
+ (_Bool)UBCEvent:(id)arg1 object:(id)arg2;
+ (void)finishHomePageLaunched:(_Bool)arg1;
+ (void)endSpeedMonitor:(id)arg1;
+ (void)startSpeedMonitor:(id)arg1;
+ (void)showIntroViewWithGuideName:(id)arg1 withUBCType:(id)arg2;
+ (void)showIntroViewWithGuideName:(id)arg1 withUBCType:(id)arg2 flagCallback:(CDUnknownBlockType)arg3;
+ (id)judgeIntroGuideUBCName;
+ (id)judgeIntroGuideName;
+ (void)refreshSkinByChangeView;
+ (void)attachSkinChangeObserver:(id)arg1;
+ (void)ubcForQuizButtonClick;
+ (void)ubcForNavigationClick;
+ (id)globalFontSizeLevel;
+ (void)fontSizeChanged:(id)arg1;
+ (id)homePageViewController;
+ (void)showSearchSuggestionViewWithCancelBtnBlock:(CDUnknownBlockType)arg1;
+ (void)subViewsInSuperView:(id)arg1 class:(Class)arg2 block:(CDUnknownBlockType)arg3;
+ (_Bool)hasCertainClassInWindowWithString:(id)arg1;
+ (_Bool)homePageViewISAppeared;
+ (_Bool)isCurrentViewControllerHomePage;
+ (_Bool)isCurrentTabHomePage;
+ (void)searchSuggestionTextFieldBecomeFirstResponder;
+ (_Bool)isSearchSuggestionViewHidden;
+ (void)searchBoxTextFieldBeginEditForHomePage:(id)arg1;
+ (void)searchBoxTextFieldBeginEdit:(id)arg1;
+ (id)lastUpdateVersion;
+ (void)openChangeCityPage:(id)arg1;
+ (_Bool)isIPhone5;
+ (_Bool)isIphone6Plus;
+ (id)getLocationInfoForRequestWithLocation:(id)arg1;
+ (void)sendNAGMVLogWithGMVID:(id)arg1 params:(id)arg2;
+ (void)showPixelSearch;
+ (void)stopTopViewLoadWebView;
+ (long long)viewDefaultTag;
+ (_Bool)doBarCodeDetect:(id)arg1;
+ (id)feedTabSelectedTabID;
+ (void)saveChangeSkinInHolidaySettingWithValue:(_Bool)arg1;
+ (_Bool)shouldChangeSkinInHoliday;
+ (void)backToDefaultSkin;
+ (_Bool)currentSkinIsHoliday;
+ (_Bool)isSkinClassic;
+ (_Bool)isClassicSkinABTestConfig;
+ (id)statusBarColorForCurrentSkin;
+ (_Bool)isCurrentSkinClassic;
+ (_Bool)isCurrentSkinDefault;
+ (void)showBaiKeWithKeyword:(id)arg1;
+ (_Bool)isFirstLaunchAfterUpdateVersion;
+ (void)addBrowseSpeedMonitorItem:(int)arg1;
+ (void)callScanQrCodeView:(id)arg1;
+ (void)addupUserActionID:(int)arg1 anotherID:(int)arg2 value:(id)arg3;
+ (void)UBCEvent:(id)arg1 content:(id)arg2;
+ (void)handleServerCommandWithJson:(id)arg1;
+ (void)handleServerCommandWithDic:(id)arg1;
+ (id)homePageSearchBoxTextFiledViewControllerWithDelegate:(id)arg1;
+ (id)mainBundleResourcePath;
+ (id)homePageRootFilePath;
+ (id)appDirectory;
+ (id)mainNavigationViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

